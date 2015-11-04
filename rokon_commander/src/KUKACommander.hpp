#ifndef OROCOS_KUKACOMMANDER_COMPONENT_HPP
#define OROCOS_KUKACOMMANDER_COMPONENT_HPP

#include <rtt/RTT.hpp>

#include <kuka_lwr_fri/friComm.h>

#include <lwr_fri/typekit/Types.hpp>
#include <sensor_msgs/typekit/Types.hpp>
#include <geometry_msgs/typekit/Types.hpp>
#include <motion_control_msgs/typekit/Types.hpp>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Wrench.h>
#include <nav_msgs/Odometry.h>
#include <std_msgs/Int16.h>

#include <boost/array.hpp>

#define FRI_TO_KRL_CTRL_MODE	14
#define FRI_TO_KRL_MON_CMD		15
#define FRI_FROM_KRL_COND		14
#define FRI_FROM_KRL_STATE		15

// Constants for PTP and LIN motions
#define FRI_FROM_FRL_LINPTP		0
#define FRI_FROM_FRL_LINPTP_END	1
#define FRI_TO_KRL_MOTION_TYPE	12
#define FRI_TO_KRL_TARGET_TYPE	13
#define FRI_TO_KRL_SPEED		7
#define FRI_PTP_MOTION			1
#define FRI_LIN_MOTION			2
#define FRI_E6AXIS				1
#define FRI_FRAME				2

// Min and max LIN speed in m/s
#define FRI_MIN_LIN_SPEED	0.05
#define FRI_MAX_LIN_SPEED	2.0
// Min and max PTP speed in %
#define FRI_MIN_PTP_SPEED	1
#define FRI_MAX_PTP_SPEED	100

namespace iros {

	using namespace RTT;
	using namespace std;

	class KUKACommander : public RTT::TaskContext{
	  public:
		KUKACommander(std::string const& name);
		bool configureHook();
		bool startHook();
		void updateHook();
		void stopHook();
		void cleanupHook();

		/**
		 * Switch to monitor state
		 * Calls friStop() on the KRC
		 */

        //void KUKACommander::checkPosition()

		 int check() ;  

		 //float check_position()  ;

		void switchToMonitorState();

		/**
		 * Switch to command state
		 * Calls friStart() on the KRC
		 */
		void switchToCommandState();

		/**
		 * Stop communication
		 * Calls friClose() on the KRC
		 */
		void stopCommunication();

		/**
		 * Get the current state
		 * Get the current state of the FRI interface
		 * @return The current state of the FRI interface
		 * @see ::FRI_STATE
		 */
		FRI_STATE getCurrentState();

		/**
		 * Get the current control mode
		 * @return The current control mode
		 * @see ::FRI_CTRL
		 */
		FRI_CTRL getCurrentControlMode();

		/**
		 * Changes the control mode
		 * Changes the control mode to mode. If the current state is control state, it first
		 * switches to monitor state and afterwards automatically switches back
		 * @param mode Desired control mode
		 */
		void setControlMode(FRI_CTRL mode = FRI_CTRL_OTHER, FRI_STATE state = FRI_STATE_INVALID);

		/**
		 * Sets the Cartesian impedance
		 * The Cartesian stiffness and damping each consist of linear x, y z and rotational x, y, z
		 * @param stiffness Cartesian stiffness
		 * @param damping Cartesian damping
		 */
		void setCartesianImpedance(geometry_msgs::Twist stiffness, geometry_msgs::Twist damping);

		/**
		 * Sets the Joint impedance
		 * The Joint stiffness and damping each consist of seven values
		 * @param stiffness Array of 7 stiffness parameters
		 * @param damping Array of 7 damping parameters
		 */
		void setJointImpedance(boost::array<float, 7> stiffness, boost::array<float, 7> damping);

		/**
		 * Switches into gravity compensation mode
		 * This is a "fake" gravity compensation, as it uses one of the two impedance control modes.
		 * The stiffness is set to 0 and the damping to critical damping.
		 * Continuously commands the current position as the desired one
		 * @param joint If joint is set to true (default), the joint impedance mode is used.
		 * Otherwise, Cartesian mode is used.
		 */
		void activateGravityCompensation(bool joint = true);

		/**
		 * Stops gravity compensation mode.
		 * Does not change the command mode, but sets the stiffness/damping values to the default ones
		 */
		void stopGravityCompensation();

		/**
		 * Sets the desired Cartesian force/torque (= wrench)
		 * @param wrench force [N] and torque [Nm]
		 */
		void setCartesianWrench(geometry_msgs::Wrench wrench);

		/**
		 * Sets the desired joint torques
		 * The torques are added to the dynamic and gravity forces
		 * @param torques the torques in Nm
		 */
		void setJointTorques(boost::array<double, 7> torques);

		/**
		 * Sets all desired Cartesian and joint forces/torques to zero
		 */
		void setZeroForces();

		/**
		 * Moves the arm to jointPos
		 * A trajectory in generated moving the arm within time to the desired joint position jointPos.
		 * If jointPos is not reachable within time (due to velocity limits), it is done as fast as possible.
		 * @param jointPos The desired joint position
		 * @param time The time (in seconds), the movement shall take
		 * @return False if there is an ongoing movement or an error occurs. True otherwise.
		 */
		bool moveToJointPosition(boost::array<double, 7> jointPos, double time);

		/**
		 * Moves the arm to CartPos
		 * A trajectory in generated moving the arm within time to the desired Cartesian position CartPos.
		 * If CartPos is not reachable within time (due to velocity limits), it is done as fast as possible.
		 * @param CartPos The desired Cartesian position
		 * @param time The time (in seconds), the movement shall take
		 * @return False if there is an ongoing movement or an error occurs. True otherwise.
		 */
		bool moveToCartesianPosition(geometry_msgs::Pose CartPose, double time);

		/**
		 * Stop all ongoing movements
		 * Stops both Cartesian and joint movements. Use @see isMoving to see whether the movement was stopped.
		 * @note LIN and PTP motions cannot be stopped, in this case false is returned
		 * @return true if there is no motion or the movement can be stopped, false elsewise
		 */
		bool stopMovements();

		/**
		 * Checks, whether there is an ongoing movement
		 * @return true when still moving, false otherwise
		 */
		bool isMoving();

		/**
		 *  Commands the KRC to do a PTP motion to the given joint configuration
		 *  @param jointPos Boost array with the desired joint configuration
		 *  @param speed Speed in percent (1-100)
		 *  @return false if a motion is still ongoing, true elsewise
		 */
		bool jointPTPMotion(boost::array<double, 7> jointPos, uint8_t speed);

		/**
		 *  Commands the KRC to do a LIN motion to the given Cartesian position
		 *  The base and tool frame cannot be changed and depend on the current setting
		 *  @param CartPose Desired pose
		 *  @param speed Speed in m/s
		 *  @return false if a motion is still ongoing, true elsewise
		 */
		bool CartesianLINMotion(geometry_msgs::Pose CartPose, double speed);

		/**
		 *  Commands the KRC to do a PTP motion to the given Cartesian position
		 *  The base and tool frame cannot be changed and depend on the current setting
		 *  @param CartPose Desired pose
		 *  @param speed Speed in percent (1-100)
		 *  @return false if a motion is still ongoing, true elsewise
		 */
		bool CartesianPTPMotion(geometry_msgs::Pose CartPose, uint8_t speed);

		/**
		 *  Converts the (absolute) Euler angles RPY to a quaternion
		 *  @param r Roll (= KRL C)
		 *  @param p Pitch (= KRL B)
		 *  @param y Yaw (= KRL A)
		 *  @return The corresponding Quaternion
		 */
		geometry_msgs::Quaternion getQuaternionFromRPY(double r, double p, double y);

	  private:
	  
		/**
		 *  Helper function to print FRI variables 
		 */
		void print_user_variables(tFriKrlData, bool from);
		
		/**
		 *  Prints all FRI variables received from the KRC
		 */
		void print_var_from_krl();
		
		/**
		 *  Print all FRI variables sent to the KRC
		 */
		void print_var_to_krl();

		void n_axes_process_event(RTT::base::PortInterface*);
		void cartesian_process_event(RTT::base::PortInterface*);

		void merge_generated_cartesian(RTT::base::PortInterface*);
		void convert_joint_state_to_pos(RTT::base::PortInterface*);

		bool is_moving_LINPTP();
		bool finished_LINPTP();

		void reset_LINPTP_motion_variables();

		InputPort<tFriKrlData> port_from_krl;
		OutputPort<tFriKrlData> port_to_krl;


        motion_control_msgs::JointPositions send ;
        InputPort< motion_control_msgs::JointPositions >  port_send;

        InputPort< std::vector<double> > port_vector_position;
		OutputPort< sensor_msgs::JointState > port_check_position ;

		 OutputPort< std::vector<double> > port_vector_position_Ros;

		InputPort<tFriRobotState> port_robot_state;
		InputPort<tFriIntfState> port_fri_state;

		OutputPort<lwr_fri::FriJointImpedance> port_desJntImpedance;
		OutputPort<lwr_fri::CartesianImpedance> port_desCartImpedance;

		InputPort<sensor_msgs::JointState> port_msrJointState;
		InputPort<geometry_msgs::Pose>  port_msrCartPos;
		InputPort<geometry_msgs::Wrench> port_msrExtCartWrench;

		OutputPort<geometry_msgs::Wrench> port_desCartForce;
		OutputPort<motion_control_msgs::JointEfforts> port_desJntForce;

	    InputPort<string> port_nAxesEvent;
	    InputPort<string> port_cartesianEvent;

		InputPort<geometry_msgs::Pose>  port_generatedCartPos;
		InputPort<geometry_msgs::Twist>  port_generatedCartVel;
		OutputPort<nav_msgs::Odometry> port_generatedCartOdom;
		InputPort<sensor_msgs::JointState> port_generatedJntState;
		OutputPort<motion_control_msgs::JointPositions> port_desiredJntPos;



		InputPort<motion_control_msgs::JointPositions> port_desiredJntPosIn;

        motion_control_msgs::JointPositions  scream;



		OutputPort<motion_control_msgs::JointVelocities> port_desiredJntVel;
		OutputPort<geometry_msgs::Pose>  port_desiredCartPos;

		tFriKrlData data_from_krl;
		tFriKrlData data_to_krl;

		tFriRobotState data_robot_state;
		tFriIntfState data_fri_state;

		///EDIT//////
		tFriRobotData meaured_pos; 

		////

		string data_nAxes_event;
		string data_cartesian_event;

        std::vector<double>  vectorPosition ;
		geometry_msgs::Pose cur_pose;
		sensor_msgs::JointState cur_jnt_state;

		bool call_set_ctrl_mode;

		bool follow_cart_pos;
		bool follow_jnt_pos;

		bool nAxes_is_moving;
		bool cart_is_moving;

		boost::array<float, 7> jnt_stiffness_def;
		boost::array<float, 7> jnt_damping_def;
		geometry_msgs::Twist cart_stiffness_def;
		geometry_msgs::Twist cart_damping_def;

		TaskContext* n_axes_generator_pos_peer;
		TaskContext* cartesian_generator_pos_peer;

	    OperationCaller<bool(const vector<double>&, double)> nAxes_moveTo;
	    OperationCaller<void(void)> nAxes_resetPosition;

	    OperationCaller<bool(geometry_msgs::Pose, double)> cartesian_moveTo;
	    OperationCaller<void(void)> cartesian_resetPosition;
	};

}
#endif
