#include "commander.hpp"
#include <rtt/Component.hpp>
#include <iostream>
#include <kdl/frames.hpp>
#include <tf_conversions/tf_kdl.h>
#include <ros/ros.h>
#include <ros/callback_queue.h>
#include "std_msgs/Int16.h"
#include "KUKACommander/move_to_jnt_pos.h"
#include "sensor_msgs/JointState.h"

#include "stdio.h"

namespace iros {

	using namespace RTT;
	using namespace std;

	ros::NodeHandle ROSnode;
	ros::CallbackQueue callback;

	int aa = 5 ;
	double a1,a2,a3,a4,a5,a6;

	ros::ServiceServer moveToService;
        sensor_msgs::JointState  fromR ;



	Commander::Commander(std::string const& name) : TaskContext(name),callback(){
		Logger::In in((this->getName()));

		this->addPort("fromRos", port_subscriber);
		this->addPort("desJntPos", port_final);
		this->addPort("desVelPos", port_vel);
		this->addPort("currentJointstate",port_current_jointState );



	}

	bool Commander::configureHook()
	{


 	prop_num_axes = 7 ;
   	m_num_axes=prop_num_axes;
	log(Debug) << "Nothing to configure!" << endlog();

	

	return true;
	}


	bool Commander::startHook()
	{
		Logger::In in((this->getName()));
		

		if(!initROSInterface())
			return false;

	
		log(Debug) << "KUKACommander started !" << endlog();
		return true;
	}

	void Commander::updateHook()
	{
	
	Logger::In in((this->getName()));
	callback.callAvailable();

	port_subscriber.read(fromR);
	// port_current_jointState.read(current_jointState);
	//final_joint.positions = fromR.position ;
	
	final_vel.velocities = fromR.position ;
	//  port_final.write(final_joint);
  	port_vel.write(final_vel);


	log(Debug) << "running so fast !!!!" << endlog();
	//cout<<"fast "<< endl;


	}



	void Commander::stopHook() {
		Logger::In in((this->getName()));

		log(Debug) << "KUKACommander executes stopping !" << endlog();
	}

	void Commander::cleanupHook() {
		Logger::In in((this->getName()));
		log(Debug) << "KUKACommander cleaning up !" << endlog();
	}






bool moveToPosition(boost::array<double, 7> jointPos, double time) {


aa = 10;

cout<<"howdy to pos"<<endl;
return true;

}


bool add(rokon_commander::move_to_pos::Request& request, rokon_commander::move_to_pos::Response& response)
{
  


  response.success = moveToPosition(request.position, request.time);


  cout<<"sending back response:"<<endl;
  return true;
}









bool Commander::initROSInterface() {
		// Create new ROS node handle
	ros::NodeHandle n;
		

		// Setup ROS callback queue
		n.setCallbackQueue(&callback);

		// Initialize and setup all Services
		// The ...ROS functions serve as bridge and call the appropriate KUKACommander functions
		
		moveToService = n.advertiseService("moveToPosition", add);
		
		return true;
		}

}

ORO_CREATE_COMPONENT(iros::Commander)
