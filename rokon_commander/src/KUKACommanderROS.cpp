#include "KUKACommanderROS.hpp"
#include <rtt/Component.hpp>
#include <iostream>
#include <boost/function.hpp>
#include <boost/bind.hpp>
#include "std_msgs/Int32.h"

namespace iros {

	using namespace RTT;
	using namespace std;

	KUKACommanderROS::KUKACommanderROS(std::string const& name) : TaskContext(name),
			commander(), callbackQueue(),
			// Initialize OperationCallers
			getCurrentState("getCurrentState"), getCurrentControlMode("getCurrentControlMode"),
			switchToMonitorState("switchToMonitorState"), switchToCommandState("switchToCommandState"),
			stopCommunication("stopCommunication"),
			setControlMode("setControlMode"),
			setCartesianImpedance("setCartesianImpedance"), setJointImpedance("setJointImpedance"),
			activateGravityCompensation("activateGravityCompensation"), stopGravityCompensation("stopGravityCompensation"),
			setCartesianWrench("setCartesianWrench"), setJointTorques("setJointTorques"), setZeroForces("setZeroForces"),
			moveToJointPosition("moveToJointPosition"), moveToCartesianPosition("moveToCartesianPosition"),
			stopMovements("stopMovements"), isMoving("isMoving"),
			jointPTPMotion("jointPTPMotion"),
			CartesianLINMotion("CartesianLINMotion"), CartesianPTPMotion("CartesianPTPMotion"),
			getQuaternionFromRPY("getQuaternionFromRPY") {
		Logger::In in((this->getName()));


this->addPort("check_pos", port_check_pos);
this->addPort("check_pos_Ros", port_vector_position_Ros);



    

		log(Debug) << "KUKACommanderROS constructed !" << endlog();
	}

	bool KUKACommanderROS::configureHook(){
		Logger::In in((this->getName()));

		bool success = initOrocosInterface();

		if(success) {
			log(Debug) << "KUKACommanderROS configured !" << endlog();
			return true;
		}

		log(Error) << "KUKACommanderROS not configured" << endlog();



		return false;


     

	}

	bool KUKACommanderROS::startHook(){
		Logger::In in((this->getName()));

		if(!initROSInterface())
			return false;

		log(Debug) << "KUKACommanderROS started !" << endlog();
		return true;
	}

	void KUKACommanderROS::updateHook(){


		port_check_pos.read(pos);

port_vector_position_Ros.read (vectorPositionRos);
   //cout<<vectorPositionRos[1]  ;



	ros::NodeHandle n;
		ros::Publisher chatter_pub = n.advertise<std_msgs::Int32>("chatter", 1000);

       std_msgs::Int32 msg;




        msg.data = 5;
 

    /**
     * The publish() function is how you send messages. The parameter
     * is the message object. The type of this object must agree with the type
     * given as a template parameter to the advertise<>() call, as was done
     * in the constructor above.
     */
    chatter_pub.publish(msg);




		//cout<< pos.position[1] ;

		//cout<< "in ros" ;
		Logger::In in((this->getName()));

		// Manage own ROS callback queue
		// Call all available callbacks each iteration
		callbackQueue.callAvailable();

		//log(Debug) << "KUKACommanderROS executes updateHook !" << endlog();
	}

	void KUKACommanderROS::stopHook() {
		Logger::In in((this->getName()));
		log(Debug) << "KUKACommanderROS executes stopping !" << endlog();
	}

	void KUKACommanderROS::cleanupHook() {
		Logger::In in((this->getName()));
		log(Debug) << "KUKACommanderROS cleaning up !" << endlog();
	}

	bool KUKACommanderROS::initOrocosInterface() {
		// Setup all OperationCaller with operation from the Commander component
	
		// Get all peers
		TaskContext::PeerList peerList = getPeerList();
		if (1 != peerList.size()) {
			log(Error) << ("Failed to configure KUKACommanderROS. There should be exactly one peer.") << endlog();
			return false;
		}
		commander = getPeer(peerList.front());

		this->requires("Commander")->addOperationCaller(getCurrentState);
		this->requires("Commander")->addOperationCaller(getCurrentControlMode);
		this->requires("Commander")->addOperationCaller(switchToMonitorState);
		this->requires("Commander")->addOperationCaller(switchToCommandState);
		this->requires("Commander")->addOperationCaller(stopCommunication);
		this->requires("Commander")->addOperationCaller(setControlMode);
		this->requires("Commander")->addOperationCaller(setCartesianImpedance);
		this->requires("Commander")->addOperationCaller(setJointImpedance);
		this->requires("Commander")->addOperationCaller(activateGravityCompensation);
		this->requires("Commander")->addOperationCaller(stopGravityCompensation);
		this->requires("Commander")->addOperationCaller(setCartesianWrench);
		this->requires("Commander")->addOperationCaller(setJointTorques);
		this->requires("Commander")->addOperationCaller(setZeroForces);
		this->requires("Commander")->addOperationCaller(moveToJointPosition);
		this->requires("Commander")->addOperationCaller(moveToCartesianPosition);
		this->requires("Commander")->addOperationCaller(stopMovements);
		this->requires("Commander")->addOperationCaller(isMoving);
		this->requires("Commander")->addOperationCaller(jointPTPMotion);
		this->requires("Commander")->addOperationCaller(CartesianLINMotion);
		this->requires("Commander")->addOperationCaller(CartesianPTPMotion);
		this->requires("Commander")->addOperationCaller(getQuaternionFromRPY);

		this->requires("Commander")->connectTo(commander->provides("Commander"));

		if(!this->requires("Commander")->ready() ||
				!getCurrentState.ready() ||
				!getCurrentControlMode.ready() ||
				!switchToMonitorState.ready() ||
				!switchToCommandState.ready() ||
				!stopCommunication.ready() ||
				!setControlMode.ready()) {
			log(Error) << "Operation interface to KUKACommander not ready." << endlog();
			return false;
		}

		return true;
	}

	bool KUKACommanderROS::initROSInterface() {
		// Create new ROS node handle
		ROSnode = ros::NodeHandle(commander->getName());

		if (!ROSnode.ok()) {
			log(Error) << "Failed to configure component: ROS node handle not OK." << endlog();
		    return false;
		}

		// Setup ROS callback queue
		ROSnode.setCallbackQueue(&callbackQueue);

		// Initialize and setup all Services
		// The ...ROS functions serve as bridge and call the appropriate KUKACommander functions
		getCurrentStateService = ROSnode.advertiseService("getCurrentState", &KUKACommanderROS::getCurrentStateROS, this);
		getCurrentControlModeService = ROSnode.advertiseService("getCurrentControlMode", &KUKACommanderROS::getCurrentControlModeROS, this);
		switchToMonitorStateService = ROSnode.advertiseService("switchToMonitorState", &KUKACommanderROS::switchToMonitorStateROS, this);
		switchToCommandStateService = ROSnode.advertiseService("switchToCommandState", &KUKACommanderROS::switchToCommandStateROS, this);
		stopCommunicationService = ROSnode.advertiseService("stopCommunication", &KUKACommanderROS::stopCommunicationROS, this);
		setControlModeService = ROSnode.advertiseService("setControlMode", &KUKACommanderROS::setControlModeROS, this);
		setCartesianImpedanceService = ROSnode.advertiseService("setCartesianImpedance", &KUKACommanderROS::setCartesianImpedanceROS, this);
		setJointImpedanceService = ROSnode.advertiseService("setJointImpedance", &KUKACommanderROS::setJointImpedanceROS, this);
		activateGravityCompensationService = ROSnode.advertiseService("activateGravityCompensation", &KUKACommanderROS::activateGravityCompensationROS, this);
		stopGravityCompensationService = ROSnode.advertiseService("stopGravityCompensation", &KUKACommanderROS::stopGravityCompensationROS, this);
		setCartesianWrenchService = ROSnode.advertiseService("setCartesianWrench", &KUKACommanderROS::setCartesianWrenchROS, this);
		setJointTorquesService = ROSnode.advertiseService("setJointTorques", &KUKACommanderROS::setJointTorquesROS, this);
		setZeroForcesService = ROSnode.advertiseService("setZeroForces", &KUKACommanderROS::setZeroForcesROS, this);
		moveToJointPositionService = ROSnode.advertiseService("moveToJointPosition", &KUKACommanderROS::moveToJointPositionROS, this);
		moveToCartesianPositionService = ROSnode.advertiseService("moveToCartesianPosition", &KUKACommanderROS::moveToCartesianPositionROS, this);
		stopMovementsService = ROSnode.advertiseService("stopMovements", &KUKACommanderROS::stopMovementsROS, this);
		isMovingService = ROSnode.advertiseService("isMoving", &KUKACommanderROS::isMovingROS, this);
		jointPTPMotionService = ROSnode.advertiseService("jointPTPMotion", &KUKACommanderROS::jointPTPMotionROS, this);
		CartesianLINMotionService = ROSnode.advertiseService("CartesianLINMotion", &KUKACommanderROS::CartesianLINMotionROS, this);
		CartesianPTPMotionService = ROSnode.advertiseService("CartesianPTPMotion", &KUKACommanderROS::CartesianPTPMotionROS, this);
		getQuaternionFromRPYService = ROSnode.advertiseService("getQuaternionFromRPY", &KUKACommanderROS::getQuaternionFromRPYROS, this);



		return true;
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
ORO_CREATE_COMPONENT(iros::KUKACommanderROS)