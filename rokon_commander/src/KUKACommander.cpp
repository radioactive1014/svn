#include "KUKACommander.hpp"
#include <rtt/Component.hpp>
#include <iostream>

#include <kdl/frames.hpp>
#include <tf_conversions/tf_kdl.h>

namespace iros {

	using namespace RTT;
	using namespace std;

	KUKACommander::KUKACommander(std::string const& name) : TaskContext(name){
		Logger::In in((this->getName()));

		call_set_ctrl_mode = false;

		this->addPort("fromKRL", port_from_krl);
		this->addPort("toKRL", port_to_krl);


        this->addPort("send", port_send);

      this->addPort("check_position", port_check_position);
       this->addPort("check_position_Ros", port_vector_position_Ros);
	   this->addPort("vector_position",port_vector_position);

		this->addPort("RobotState", port_robot_state).doc("Port containing the status of the robot");
		this->addEventPort("FRIState", port_fri_state).doc("Port containing the status of the FRI communication");

		this->addPort("desJntImpedance", port_desJntImpedance).doc("Desired joint impedance (stiffness and dampening)");
		this->addPort("desCartImpedance", port_desCartImpedance).doc("Desired Cartesian impedance (stiffness and dampening)");

		this->addPort("msrJointState", port_msrJointState).doc("Measured joint states (position/rotation)");
		this->addPort("msrCartPos", port_msrCartPos).doc("Measured joint states (position/rotation)");
		this->addPort("msrExtCartWrench", port_msrExtCartWrench).doc("Measured joint states (position/rotation)");

		this->addPort("desCartForce", port_desCartForce).doc("Desired Cartesian force");
		this->addPort("desJntForce", port_desJntForce).doc("Desired joint force");

		this->addEventPort("nAxesEvent", port_nAxesEvent, boost::bind(&KUKACommander::n_axes_process_event, this, _1)).doc("Retrieves events from nAxesGeneratorPos when a movement has started/stopped");
		this->addEventPort("cartesianEvent", port_cartesianEvent, boost::bind(&KUKACommander::cartesian_process_event, this, _1)).doc("Retrieves events from CartesianGeneratorPos when a movement has started/stopped");

		this->addEventPort("generatedCartPos", port_generatedCartPos, boost::bind(&KUKACommander::merge_generated_cartesian, this, _1)).doc("Retrieves generated desired Cartesian position");
		this->addPort("generatedCartVel", port_generatedCartVel).doc("Retrieves generated desired Cartesian velocity");
		this->addPort("generatedCartOdom", port_generatedCartOdom).doc("Merges Cartesian position and velocity to odometry");

		this->addEventPort("generatedJntState", port_generatedJntState, boost::bind(&KUKACommander::convert_joint_state_to_pos, this, _1)).doc("Retrieves generated desired joint state");
		this->addPort("desiredJntPos", port_desiredJntPos).doc("Desired joint position");
		this->addPort("desiredJntVel", port_desiredJntVel).doc("Desired joint velocity");
		this->addPort("desiredCartPos", port_desiredCartPos).doc("Desired Cartesian position");


		this->addPort("desiredJntPosIn", port_desiredJntPosIn).doc("Desired joint position input");




		// Operations regarding the control of the KRC and grouped in the Commander service

        // provides("Commander")->addOperation("check_position", &KUKACommander::check_position, this, OwnThread).doc("get the current FRI state");

		provides("Commander")->addOperation("getCurrentState", &KUKACommander::getCurrentState, this, OwnThread).doc("get the current FRI state");
		provides("Commander")->addOperation("getCurrentControlMode", &KUKACommander::getCurrentControlMode, this, OwnThread).doc("get the current control mode");

		provides("Commander")->addOperation("switchToMonitorState", &KUKACommander::switchToMonitorState, this, OwnThread).doc("switch to monitor state: friStop()");
		provides("Commander")->addOperation("switchToCommandState", &KUKACommander::switchToCommandState, this, OwnThread).doc("switch to command state: friStart()");
		provides("Commander")->addOperation("stopCommunication", &KUKACommander::stopCommunication, this, OwnThread).doc("stop communication: friClose");

		provides("Commander")->addOperation("setControlMode", &KUKACommander::setControlMode, this, OwnThread).doc("set control mode");
		provides("Commander")->addOperation("activateGravityCompensation", &KUKACommander::activateGravityCompensation, this, OwnThread).doc("Switches to gravity compensation mode");
		provides("Commander")->addOperation("stopGravityCompensation", &KUKACommander::stopGravityCompensation, this, OwnThread).doc("Stop gravity compensation mode");

		provides("Commander")->addOperation("setCartesianWrench", &KUKACommander::setCartesianWrench, this, OwnThread).doc("Set Cartesian wrench (force/torque)");
		provides("Commander")->addOperation("setJointTorques", &KUKACommander::setJointTorques, this, OwnThread).doc("Set joint torques");
		provides("Commander")->addOperation("setZeroForces", &KUKACommander::setZeroForces, this, OwnThread).doc("Reset all forces to zero");

		provides("Commander")->addOperation("setCartesianImpedance", &KUKACommander::setCartesianImpedance, this, OwnThread).doc("Sets the Cartesian impedance");
		provides("Commander")->addOperation("setJointImpedance", &KUKACommander::setJointImpedance, this, OwnThread).doc("Sets the Joint impedance");

		provides("Commander")->addOperation("moveToJointPosition", &KUKACommander::moveToJointPosition, this, OwnThread).doc("Moves the arm to the desired joint position");
		provides("Commander")->addOperation("moveToCartesianPosition", &KUKACommander::moveToCartesianPosition, this, OwnThread).doc("Moves the arm to the desired joint position");

		provides("Commander")->addOperation("stopMovements", &KUKACommander::stopMovements, this, OwnThread).doc("Stops all movements");
		provides("Commander")->addOperation("isMoving", &KUKACommander::isMoving, this, OwnThread).doc("Checks whether the robot is moving");

		provides("Commander")->addOperation("jointPTPMotion", &KUKACommander::jointPTPMotion, this, OwnThread).doc("Perform PTP motion in joint space");
		provides("Commander")->addOperation("CartesianLINMotion", &KUKACommander::CartesianLINMotion, this, OwnThread).doc("Perform LIN motion in Cartesian space");
		provides("Commander")->addOperation("CartesianPTPMotion", &KUKACommander::CartesianPTPMotion, this, OwnThread).doc("Perform PTP motion in Cartesian space");

		provides("Commander")->addOperation("getQuaternionFromRPY", &KUKACommander::getQuaternionFromRPY, this, OwnThread).doc("Returns the quaternion corresponding to the three Euler angles");

		// Initialize variables with 0
		data_to_krl.boolData = 0;
		for(uint8_t i = 0; i < FRI_USER_SIZE; i++) {
			data_to_krl.intData[i] = 0;
			data_to_krl.realData[i] = 0;
		}
		// Set default controller mode
		data_to_krl.intData[FRI_TO_KRL_CTRL_MODE] = FRI_CTRL_POSITION * 10;

		nAxes_is_moving = false;
		cart_is_moving = false;

		follow_cart_pos = false;
		follow_jnt_pos = false;

		// Default stiffness/damping values
		jnt_stiffness_def = {{ 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0 }};
		jnt_damping_def = {{ 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7 }};
		geometry_msgs::Vector3 stiff;
		stiff.x = 2000; stiff.y =  2000; stiff.z = 2000;
		cart_stiffness_def.linear = stiff;
		stiff.x = 200; stiff.y =  200; stiff.z = 200;
		cart_stiffness_def.angular = stiff;
		geometry_msgs::Vector3 damp;
		damp.x = 0.7; damp.y = 0.7; damp.z = 0.7;
		cart_damping_def.linear = damp; cart_damping_def.angular = damp;

		log(Info) << "KUKACommander constructed !" << endlog();
	}

	bool KUKACommander::configureHook(){
		Logger::In in((this->getName()));

		if(getPeer("nAxesGeneratorPos")) {
			if(!(n_axes_generator_pos_peer = getPeer("nAxesGeneratorPos"))) {
				log(Error) << "Peer 'nAxesGeneratorPos' not found" << endlog();
				return false;
			}
			nAxes_moveTo = n_axes_generator_pos_peer->getOperation("moveTo");
			nAxes_resetPosition = n_axes_generator_pos_peer->getOperation("resetPosition");
		}

		if(getPeer("CartesianGeneratorPos")) {
			if(!(cartesian_generator_pos_peer = getPeer("CartesianGeneratorPos"))) {
				log(Error) << "Peer 'CartesianGeneratorPos' not found" << endlog();
				return false;
			}

			cartesian_moveTo = cartesian_generator_pos_peer->getOperation("moveTo");
			cartesian_resetPosition = cartesian_generator_pos_peer->getOperation("resetPosition");
		}

		log(Info) << "KUKACommander configured !" << endlog();
		return true;
	}

	bool KUKACommander::startHook(){
		Logger::In in((this->getName()));
		// Send initial FRI variable data
		port_to_krl.write(data_to_krl);
		log(Debug) << "KUKACommander started !" << endlog();
		return true;
	}

	void KUKACommander::updateHook(){




		Logger::In in((this->getName()));
		//log(Debug) << "KUKACommander executes updateHook !" << endlog();

		// Read all values and write them to variables for further processing
		port_fri_state.read(data_fri_state);
		port_robot_state.read(data_robot_state);

		port_from_krl.read(data_from_krl);


		int ch = data_from_krl.boolData ;

		//sendcout << ch <<endl;

	//port_desiredJntPosIn.read (scream);

	//float sc = scream.positions[1];

	//port_send.read(send);

	//cout << sc<<endl;

		port_msrCartPos.read(cur_pose);
		port_msrJointState.read(cur_jnt_state);

      port_vector_position.read (vectorPosition);

		port_check_position.write(cur_jnt_state);

		//cout <<  cur_jnt_state.position[1] ;

if (ch==10)
{

	//cout<< vectorPosition[1] ;

	port_vector_position_Ros.write(vectorPosition);
}

		//cout<< vectorPosition[1] ;

		//log(Info) << "vector joints: ";
		//	for(size_t i = 0; i < 7; i++)
		//		log(Info) << vectorPosition[i] << " ";
		//	log(Info) << endlog();

		//port_msrJointState.read(meaured_pos);

		/////

		// Forward converted joint state
		if(follow_jnt_pos) {
			motion_control_msgs::JointPositions tmp_des_jnt;
			tmp_des_jnt.positions = cur_jnt_state.position;

			//port_desiredJntPosIn.read (tmp_des_jnt);



			/*log(Info) << "Des joints: ";
			for(size_t i = 0; i < 7; i++)
				log(Info) << tmp_des_jnt.positions[i] << " ";
			log(Info) << endlog();*/
			port_desiredJntPos.write(tmp_des_jnt);
		}

		// Forward Cartesian pose (needed for inverse kinematics)
		if(follow_cart_pos) {
			port_desiredCartPos.write(cur_pose);
		}

		// Check whether LIN/PTP motions have been finished
		if(finished_LINPTP() && data_to_krl.intData[FRI_TO_KRL_MOTION_TYPE] != 0)
			reset_LINPTP_motion_variables();

		// Check whether the control mode still needs to be set
		if(call_set_ctrl_mode)
			setControlMode();



       port_desiredJntPosIn.read(scream);

		// Send FRI variables
		port_to_krl.write(data_to_krl);
		//log(Debug) << "KUKACommander finishes updateHook !" << endlog();
	}

	void KUKACommander::stopHook() {
		Logger::In in((this->getName()));
		stopCommunication();
		log(Debug) << "KUKACommander executes stopping !" << endlog();
	}

	void KUKACommander::cleanupHook() {
		Logger::In in((this->getName()));
		log(Debug) << "KUKACommander cleaning up !" << endlog();
	}



//float KUKACommander::check_position() {

//	return cur_jnt_state.position ;
//}






	FRI_STATE KUKACommander::getCurrentState() {
		// Get the FRI state from the FRI variables, written by KRC program
		/*switch(data_from_krl.intData[FRI_FROM_KRL_STATE]) {
			case 10:
				return FRI_STATE_MON;
			case 20:
				return FRI_STATE_CMD;
			default:
				return FRI_STATE_OFF;
		}*/
		// USe the information given by the FRI state
		if((FRI_STATE) data_fri_state.state == FRI_STATE_CMD) {
			if((FRI_QUALITY) data_fri_state.quality == FRI_QUALITY_PERFECT)
				return FRI_STATE_CMD;
			else
				return FRI_STATE_MON;
		} else
			return (FRI_STATE) data_fri_state.state;
	}

	FRI_CTRL KUKACommander::getCurrentControlMode() {
		return (FRI_CTRL) data_robot_state.control;
	}

	void KUKACommander::switchToMonitorState() {
		Logger::In in((this->getName()));
		log(Debug) << "Switching to Monitor state" << endlog();
		data_to_krl.intData[FRI_TO_KRL_MON_CMD] = 20;
		port_to_krl.write(data_to_krl);
	}

	void KUKACommander::switchToCommandState() {
		Logger::In in((this->getName()));
		log(Debug) << "Switching to Command state" << endlog();
		data_to_krl.intData[FRI_TO_KRL_MON_CMD] = 10;
		port_to_krl.write(data_to_krl);
	}

	void KUKACommander::stopCommunication() {
		Logger::In in((this->getName()));
		log(Debug) << "Stopping communication" << endlog();
		// value must be copied, either 30 or 40
		data_to_krl.intData[FRI_TO_KRL_MON_CMD] = data_from_krl.intData[FRI_FROM_KRL_COND];
		port_to_krl.write(data_to_krl);
	}

	void KUKACommander::setControlMode(FRI_CTRL mode, FRI_STATE state) {
		Logger::In in((this->getName()));
		// Stores the state when being commanded to switch the control mode
		static FRI_STATE final_state = FRI_STATE_MON;
		// Stores the desired control mode
		static FRI_CTRL final_mode = FRI_CTRL_OTHER;

		if(!call_set_ctrl_mode) {
			final_mode = mode;
			final_state = state;
		}

		// We are in the desired control mode
		if(final_mode == getCurrentControlMode() || final_mode == FRI_CTRL_OTHER) {
			// We have previously been in another state, so to complete the action, switch to this state
			if(final_state != getCurrentState() && final_state != FRI_STATE_INVALID) {
				log(Debug) << "Control mode set, will set state now..." << endlog();
				if(final_state == FRI_STATE_CMD)
				{
					switchToCommandState();
					//ROS_INFO("I have swtiched to command mode");
				}
				else
					switchToMonitorState();
				call_set_ctrl_mode = true;
				return;
			// Both state and command mode are the desired ones, we are done
			} else {
				log(Info) << "Successfully set new control mode: " << final_mode << endlog();
				call_set_ctrl_mode = false;
				//final_state = FRI_STATE_MON; // default value
				//final_mode = FRI_CTRL_OTHER; // default value
				return;
			}
		// Store the desired mode for later use
		//} else if(mode != FRI_CTRL_OTHER) {
		//	final_mode = mode;
		}

		// If in command state, we cannot witch the control mode, so switch to monitor state
		if(getCurrentState() == FRI_STATE_CMD) {
			log(Debug) << "Switching to monitor state before switching control mode..." << endlog();
			//final_state = FRI_STATE_CMD;
			call_set_ctrl_mode = true;
			switchToMonitorState();
			return;
		// Switch the control mode
		} else if(getCurrentState() == FRI_STATE_MON) {
			log(Debug) << "Switching control mode..." << endlog();
			call_set_ctrl_mode = true;
			switch(final_mode) {
				case FRI_CTRL_POSITION:
					data_to_krl.intData[FRI_TO_KRL_CTRL_MODE] = FRI_CTRL_POSITION * 10;
					break;
				case FRI_CTRL_JNT_IMP:
					data_to_krl.intData[FRI_TO_KRL_CTRL_MODE] = FRI_CTRL_JNT_IMP * 10;
					break;
				case FRI_CTRL_CART_IMP:
					data_to_krl.intData[FRI_TO_KRL_CTRL_MODE] = FRI_CTRL_CART_IMP * 10;
					break;
				default:
					log(Warning) << "Unknown control mode requested: " << final_mode << endlog();
					call_set_ctrl_mode = false;
					final_mode = getCurrentControlMode();
					final_state = getCurrentState();
					return;
			}
			port_to_krl.write(data_to_krl);
			return;
		}
	}

	void KUKACommander::setCartesianImpedance(geometry_msgs::Twist stiffness, geometry_msgs::Twist damping) {
		Logger::In in((this->getName()));
		//log(Debug) << "Changing Cartesian impedance" << endlog();
		lwr_fri::CartesianImpedance impedance;
		impedance.stiffness = stiffness;
		impedance.damping = damping;
		port_desCartImpedance.write(impedance);
	}

	void KUKACommander::setJointImpedance(boost::array<float, 7> stiffness, boost::array<float, 7> damping) {
		Logger::In in((this->getName()));
		//log(Debug) << "Changing joint impedance" << endlog();
		lwr_fri::FriJointImpedance impedance;
		impedance.stiffness = stiffness;
		impedance.damping = damping;
		port_desJntImpedance.write(impedance);
	}

	void KUKACommander::activateGravityCompensation(bool joint) {
		Logger::In in((this->getName()));



		if(joint) {
			boost::array<float, 7> stiffness = {{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }};
			boost::array<float, 7> damping = {{ 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7 }};
			setJointImpedance(stiffness, damping);
			setControlMode(FRI_CTRL_JNT_IMP, FRI_STATE_CMD);
			follow_jnt_pos = true;
		} else {
			geometry_msgs::Vector3 stiff;
			stiff.x = 0; stiff.y = 0; stiff.z = 0;
			geometry_msgs::Twist stiffness;
			stiffness.linear = stiff; stiffness.angular = stiff;
			geometry_msgs::Vector3 damp;
			damp.x = 0.7; damp.y = 0.7; damp.z = 0.7;
			geometry_msgs::Twist damping;
			damping.linear = damp; damping.angular = damp;
			setCartesianImpedance(stiffness, damping);
			setControlMode(FRI_CTRL_CART_IMP, FRI_STATE_CMD);
			follow_cart_pos = true;
		}
	}

	void KUKACommander::stopGravityCompensation() {
		follow_jnt_pos = follow_cart_pos = false;
		setJointImpedance(jnt_stiffness_def, jnt_damping_def);
		setCartesianImpedance(cart_stiffness_def, cart_damping_def);
	}

	void KUKACommander::setCartesianWrench(geometry_msgs::Wrench wrench) {
		follow_cart_pos = true;
		port_desCartForce.write(wrench);
	}

	void KUKACommander::setJointTorques(boost::array<double, 7> torques) {
		//log(Info) << "setJointTorques begin" << endlog();
		motion_control_msgs::JointEfforts torques_msg;
		for(size_t i = 0; i < LBR_MNJ; i++) {
			//log(Info) << "setJointTorques loop " << i << endlog();
			torques_msg.efforts.push_back(torques[i]);
		}
		//log(Info) << "setJointTorques before write" << endlog();
		port_desJntForce.write(torques_msg);
		log(Info) << "joint torques set" << endlog();
	}

	void KUKACommander::setZeroForces() {
		geometry_msgs::Wrench wrench;
		geometry_msgs::Vector3 vec;
		vec.x = vec.y = vec.z = 0;
		wrench.force = vec;
		wrench.torque = vec;
		port_desCartForce.write(wrench);
		follow_cart_pos = false;

		motion_control_msgs::JointEfforts torques_msg;
		for(size_t i = 0; i < LBR_MNJ; i++)
			torques_msg.efforts.push_back(0);
		port_desJntForce.write(torques_msg);
	}

	bool KUKACommander::moveToJointPosition(boost::array<double, 7> jointPos, double time) {

		cout<<"in kuka commander move to joint positoin "<<endl;

		Logger::In in((this->getName()));
		//if(nAxes_is_moving || cart_is_moving)
		//	return false;

		if(getCurrentControlMode() == FRI_CTRL_CART_IMP)
			return false;

		if(getCurrentState() == FRI_STATE_MON)
			return false;
		cout<<jointPos.size()<< endl;

		// Call operation of other component
		return nAxes_moveTo(vector<double>(jointPos.begin(), jointPos.end()), time);
	}

	bool KUKACommander::moveToCartesianPosition(geometry_msgs::Pose CartPos, double time) {
		if(nAxes_is_moving || cart_is_moving)
			return false;

		if(getCurrentControlMode() == FRI_CTRL_CART_IMP)
			return false;

		if(getCurrentState() == FRI_STATE_MON)
			return false;

		// Call operation of other component
		return cartesian_moveTo(CartPos, time);
	}

	bool KUKACommander::stopMovements() {
		if(is_moving_LINPTP())
			return false;

		if(nAxes_is_moving)
			nAxes_resetPosition();
		else if(cart_is_moving)
			cartesian_resetPosition();

		return true;
	}

	bool KUKACommander::isMoving() {
		return nAxes_is_moving || cart_is_moving || is_moving_LINPTP();
	}

	bool KUKACommander::jointPTPMotion(boost::array<double, 7> jointPos, uint8_t speed) {
		if(isMoving())
			return false;

		// Trim speed
		if(speed < FRI_MIN_PTP_SPEED)
			speed = FRI_MIN_PTP_SPEED;
		else if(speed > FRI_MAX_PTP_SPEED)
			speed = FRI_MAX_PTP_SPEED;

		data_to_krl.intData[FRI_TO_KRL_MOTION_TYPE] = FRI_PTP_MOTION;
		data_to_krl.intData[FRI_TO_KRL_TARGET_TYPE] = FRI_E6AXIS;
		// Convert rad to deg
		for(uint8_t i = 0; i < LBR_MNJ; i++) {
			data_to_krl.realData[i] = jointPos[i] / M_PI * 180;
		}
		// Compensate offset at 2nd axis
		data_to_krl.realData[1] += 90.0;
		data_to_krl.intData[FRI_TO_KRL_SPEED] = speed;

		log(Info) << "=== Joint PTP motion ===" << endlog();
		log(Info) << "Joints: ";
		for(size_t i = 0; i < LBR_MNJ; i++)
			log(Info) << data_to_krl.realData[i] << " ";
		log(Info) << endlog();
		log(Info) << "Joints (rad): ";
		for(size_t i = 0; i < LBR_MNJ; i++)
			log(Info) << jointPos[i] << " ";
		log(Info) << endlog();

		port_to_krl.write(data_to_krl);
		return true;
	}

	bool KUKACommander::CartesianLINMotion(geometry_msgs::Pose CartPose, double speed) {
		if(isMoving())
			return false;

		// Trim speed
		if(speed < FRI_MIN_LIN_SPEED)
			speed = FRI_MIN_LIN_SPEED;
		else if(speed > FRI_MAX_LIN_SPEED)
			speed = FRI_MAX_LIN_SPEED;

		data_to_krl.intData[FRI_TO_KRL_MOTION_TYPE] = FRI_LIN_MOTION;
		data_to_krl.intData[FRI_TO_KRL_TARGET_TYPE] = FRI_FRAME;

		// Convert quaternion to RPY
		KDL::Frame tmp_frame;
		double A, B, C;
		tf::poseMsgToKDL(CartPose, tmp_frame);
		tmp_frame.M.GetRPY(C, B, A);

		// Convert m to mm and rad to deg
		data_to_krl.realData[0] = CartPose.position.x * 1000;
		data_to_krl.realData[1] = CartPose.position.y * 1000;
		data_to_krl.realData[2] = CartPose.position.z * 1000;
		data_to_krl.realData[3] = A / M_PI * 180;
		data_to_krl.realData[4] = B / M_PI * 180;
		data_to_krl.realData[5] = C / M_PI * 180;

		log(Info) << "=== Cartesian LIN motion ===" << endlog();
		log(Info) << "Position:    X:" << CartPose.position.x * 1000 << " Y:" << CartPose.position.y * 1000 << " Z:" << CartPose.position.z * 1000 << endlog();
		log(Info) << "Orientation: A:" << A / M_PI * 180 << " B:" << B / M_PI * 180 << " C:" << C / M_PI * 180 << endlog();

		data_to_krl.realData[FRI_TO_KRL_SPEED] = speed;

		port_to_krl.write(data_to_krl);
		return true;
	}

	bool KUKACommander::CartesianPTPMotion(geometry_msgs::Pose CartPose, uint8_t speed) {
		if(isMoving())
			return false;

		// Trim speed
		if(speed < FRI_MIN_PTP_SPEED)
			speed = FRI_MIN_PTP_SPEED;
		else if(speed > FRI_MAX_PTP_SPEED)
			speed = FRI_MAX_PTP_SPEED;

		data_to_krl.intData[FRI_TO_KRL_MOTION_TYPE] = FRI_PTP_MOTION;
		data_to_krl.intData[FRI_TO_KRL_TARGET_TYPE] = FRI_FRAME;

		// Convert quaternion to RPY
		KDL::Frame tmp_frame;
		double A, B, C;
		tf::poseMsgToKDL(CartPose, tmp_frame);
		tmp_frame.M.GetRPY(C, B, A);

		// Convert m to mm and rad to deg
		data_to_krl.realData[0] = CartPose.position.x * 1000;
		data_to_krl.realData[1] = CartPose.position.y * 1000;
		data_to_krl.realData[2] = CartPose.position.z * 1000;
		data_to_krl.realData[3] = A / M_PI * 180;
		data_to_krl.realData[4] = B / M_PI * 180;
		data_to_krl.realData[5] = C / M_PI * 180;

		log(Info) << "=== Cartesian PTP motion ===" << endlog();
		log(Info) << "Position:    X:" << CartPose.position.x * 1000 << " Y:" << CartPose.position.y * 1000 << " Z:" << CartPose.position.z * 1000 << endlog();
		log(Info) << "Orientation: A:" << A / M_PI * 180 << " B:" << B / M_PI * 180 << " C:" << C / M_PI * 180 << endlog();

		data_to_krl.intData[FRI_TO_KRL_SPEED] = speed;

		port_to_krl.write(data_to_krl);
		return true;
	}

	geometry_msgs::Quaternion KUKACommander::getQuaternionFromRPY(double r, double p, double y) {
		geometry_msgs::Quaternion quat;
		KDL::Rotation rot = KDL::Rotation::RPY(r, p, y);
		rot.GetQuaternion(quat.x, quat.y, quat.z, quat.w);
		return quat;
	}


	/* =================================
	 * 			Private members
	 * =================================
	 */

	void KUKACommander::print_var_from_krl() {
		print_user_variables(data_from_krl, true);
	}

	void KUKACommander::print_var_to_krl() {
		print_user_variables(data_to_krl, false);
	}

	void KUKACommander::print_user_variables(tFriKrlData var, bool from) {
		log(Info) << "=== Variables " << (from ? "from KRC" : "to KRC") << " ===" << endlog();
		log(Info) << "Booleans: " << var.boolData << endlog();
		log(Info) << "\tInteger \t Real " << endlog();
		for(uint8_t i = 0; i < FRI_USER_SIZE; i++) {
			log(Info) << (i + 1) << ":\t" << var.intData[i] << "\t\t" << var.realData[i] << endlog();
		}
	}

	void KUKACommander::n_axes_process_event(RTT::base::PortInterface*) {
		port_nAxesEvent.read(data_nAxes_event);
		auto pos = data_nAxes_event.find_last_of("_") + 1; // extract event name, form is "e_"+name+"_move_[event]"
		data_nAxes_event = data_nAxes_event.substr(pos, 20);

		if(data_nAxes_event.compare("started") == 0) {
			nAxes_is_moving = true;
		} else if(data_nAxes_event.compare("finished") == 0) {
			nAxes_is_moving = false;
		}
	}

	void KUKACommander::cartesian_process_event(RTT::base::PortInterface*) {
		port_cartesianEvent.read(data_cartesian_event);
		auto pos = data_cartesian_event.find_last_of("_") + 1; // extract event name, form is "e_"+name+"_move_[event]"
		data_cartesian_event = data_cartesian_event.substr(pos, 20);

		if(data_cartesian_event.compare("started") == 0) {
			cart_is_moving = true;
		} else if(data_cartesian_event.compare("finished") == 0) {
			cart_is_moving = false;
		}
	}

	void KUKACommander::merge_generated_cartesian(RTT::base::PortInterface*) {
		geometry_msgs::Pose tmp_pose;
		geometry_msgs::Twist tmp_twist;
		nav_msgs::Odometry tmp_odom;

		if(port_generatedCartPos.read(tmp_pose) == NewData) {
			port_generatedCartVel.read(tmp_twist);
			tmp_odom.pose.pose = tmp_pose;
			tmp_odom.twist.twist = tmp_twist;

			port_generatedCartOdom.write(tmp_odom);
		}
	}

	void KUKACommander::convert_joint_state_to_pos(RTT::base::PortInterface*) {
		sensor_msgs::JointState tmp_state;
		motion_control_msgs::JointPositions tmp_pos;
		motion_control_msgs::JointVelocities tmp_vel;
		if(port_generatedJntState.read(tmp_state) == NewData) {
			tmp_pos.positions = tmp_state.position;
			tmp_vel.velocities = tmp_state.velocity;

			if(true) {
				geometry_msgs::Pose tmp_cur_pose;
				geometry_msgs::Pose tmp_des_pose;
				sensor_msgs::JointState tmp_cur_jnt;
				port_msrCartPos.read(tmp_cur_pose);
				port_generatedCartPos.read(tmp_des_pose);
				port_msrJointState.read(tmp_cur_jnt);

				bool deviation = false;
				/*for(int i = 0; i < LBR_MNJ; i++) {
					if(fabs(tmp_cur_jnt.position[i] - tmp_pos.positions[i]) > 0.05) {
						log(Error) << "Calculated joint positions deviate too much" << endlog();
						deviation = true;
						break;
					}
				}*/
				if(!deviation) {
					port_desiredJntPos.write(tmp_pos);
					port_desiredJntVel.write(tmp_vel);
				}

				/*double A, B, C;
				KDL::Frame tmp_frame;
				tf::poseMsgToKDL(tmp_cur_pose, tmp_frame);
				tmp_frame.M.GetRPY(C, B, A);
				log(Info) << "=== Cartesian Movement ===" << endlog();
				log(Info) << "Current Cart Pose position:    " << tmp_cur_pose.position.x << " " << tmp_cur_pose.position.y << " " << tmp_cur_pose.position.z << endlog();
				log(Info) << "Current Cart Pose orientation: " << A / M_PI * 180 << " " << B / M_PI * 180 << " " << C / M_PI * 180 << endlog();
				tf::poseMsgToKDL(tmp_des_pose, tmp_frame);
				tmp_frame.M.GetRPY(C, B, A);
				log(Info) << "Desired Cart Pose position:    " << tmp_des_pose.position.x << " " << tmp_des_pose.position.y << " " << tmp_des_pose.position.z << endlog();
				log(Info) << "Desired Cart Pose orientation: " << A / M_PI * 180 << " " << B / M_PI * 180 << " " << C / M_PI * 180 << endlog();
				log(Info) << "Current Jnt state: " << tmp_cur_jnt.position[0] << " " << tmp_cur_jnt.position[1] << " " << tmp_cur_jnt.position[2] << " " << tmp_cur_jnt.position[3] << " " << tmp_cur_jnt.position[4] << " " << tmp_cur_jnt.position[5] << " " << tmp_cur_jnt.position[6] << endlog();
				log(Info) << "Desired Jnt state: " << tmp_pos.positions[0] << " " << tmp_pos.positions[1] << " " << tmp_pos.positions[2] << " " << tmp_pos.positions[3] << " " << tmp_pos.positions[4] << " " << tmp_pos.positions[5] << " " << tmp_pos.positions[6] << endlog();*/
			}
		}
	}

	bool KUKACommander::is_moving_LINPTP() {
		//if(data_from_krl.boolData)
		//	log(Info) << "boolData: " << data_from_krl.boolData << " Result: " << ((data_from_krl.boolData & (1 << FRI_FROM_FRL_LINPTP)) ? "1" : "0") << endlog();
		return data_from_krl.boolData & (1 << FRI_FROM_FRL_LINPTP);
	}

	bool KUKACommander::finished_LINPTP() {
		return data_from_krl.boolData & (1 << FRI_FROM_FRL_LINPTP_END);
	}

	void KUKACommander::reset_LINPTP_motion_variables() {
		log(Info) << "Resetting LIN/PTP variables" << endlog();
		data_to_krl.intData[FRI_TO_KRL_MOTION_TYPE] = 0;
		data_to_krl.intData[FRI_TO_KRL_TARGET_TYPE] = 0;
		for(uint8_t i = 0; i < LBR_MNJ; i++) {
			data_to_krl.realData[i] = 0;
		}
		data_to_krl.intData[FRI_TO_KRL_SPEED] = 0;
		data_to_krl.realData[FRI_TO_KRL_SPEED] = 0;

		port_to_krl.write(data_to_krl);
	}
}

/*
 * Using this macro, only one component may live
 * in one library *and* you may *not* link this library
 * with another component library. Use
 * ORO_CREATE_COMPONENT_TYPE()
 * ORO_LIST_COMPONENT_TYPE(KUKACommander)
 * In case you want to link with another library that
 * already contains components.
 *
 * If you have put your component class
 * in a namespace, don't forget to add it here too:
 */
ORO_CREATE_COMPONENT(iros::KUKACommander)
