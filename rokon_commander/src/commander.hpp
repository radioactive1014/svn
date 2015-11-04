#ifndef OROCOS_KUKACOMMANDER_COMPONENT_HPP
#define OROCOS_KUKACOMMANDER_COMPONENT_HPP

#include <rtt/RTT.hpp>

#include <kuka_lwr_fri/friComm.h>


#include <ros/ros.h>
#include <ros/callback_queue.h>

#include "rokon_commander/move_to_pos.h"
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

#include "sensor_msgs/JointState.h"

#include "motion_control_msgs/JointPositions.h"



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

	class Commander : public RTT::TaskContext{
	  public:
		Commander(std::string const& name);
		bool configureHook();
		bool startHook();
		void updateHook();
		void stopHook();
		void cleanupHook();

			

		bool initROSInterface();

		/**
		 * Switch to monitor state
		 * Calls friStop() on the KRC
		 */

        //void KUKACommander::checkPosition()

		 bool moveToPosition(boost::array<double, 7> jointPos, double time);



    unsigned int        m_num_axes;

    unsigned int prop_num_axes;
	 motion_control_msgs::JointPositions final_joint;

	 motion_control_msgs::JointVelocities  final_vel;
	 sensor_msgs::JointState current_jointState;


	 ros::CallbackQueue callback;
		


		InputPort<sensor_msgs::JointState> port_current_jointState;
		InputPort<sensor_msgs::JointState> port_subscriber;
		OutputPort<motion_control_msgs::JointPositions> port_final;
		OutputPort<motion_control_msgs::JointVelocities> port_vel;


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
