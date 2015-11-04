/* Auto-generated by genmsg_cpp for file /home/intelligentrobotics/ws/orocos/rokon_commander/srv/cart_ptp_motion.srv */
#ifndef ROKON_COMMANDER_SERVICE_CART_PTP_MOTION_H
#define ROKON_COMMANDER_SERVICE_CART_PTP_MOTION_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "geometry_msgs/Pose.h"



namespace rokon_commander
{
template <class ContainerAllocator>
struct cart_ptp_motionRequest_ {
  typedef cart_ptp_motionRequest_<ContainerAllocator> Type;

  cart_ptp_motionRequest_()
  : position()
  , speed(0)
  {
  }

  cart_ptp_motionRequest_(const ContainerAllocator& _alloc)
  : position(_alloc)
  , speed(0)
  {
  }

  typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _position_type;
   ::geometry_msgs::Pose_<ContainerAllocator>  position;

  typedef uint8_t _speed_type;
  uint8_t speed;


  typedef boost::shared_ptr< ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct cart_ptp_motionRequest
typedef  ::rokon_commander::cart_ptp_motionRequest_<std::allocator<void> > cart_ptp_motionRequest;

typedef boost::shared_ptr< ::rokon_commander::cart_ptp_motionRequest> cart_ptp_motionRequestPtr;
typedef boost::shared_ptr< ::rokon_commander::cart_ptp_motionRequest const> cart_ptp_motionRequestConstPtr;



template <class ContainerAllocator>
struct cart_ptp_motionResponse_ {
  typedef cart_ptp_motionResponse_<ContainerAllocator> Type;

  cart_ptp_motionResponse_()
  : success(false)
  {
  }

  cart_ptp_motionResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct cart_ptp_motionResponse
typedef  ::rokon_commander::cart_ptp_motionResponse_<std::allocator<void> > cart_ptp_motionResponse;

typedef boost::shared_ptr< ::rokon_commander::cart_ptp_motionResponse> cart_ptp_motionResponsePtr;
typedef boost::shared_ptr< ::rokon_commander::cart_ptp_motionResponse const> cart_ptp_motionResponseConstPtr;


struct cart_ptp_motion
{

typedef cart_ptp_motionRequest Request;
typedef cart_ptp_motionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct cart_ptp_motion
} // namespace rokon_commander

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a2f8c4a97b143492f3fcdc7dfd67aa73";
  }

  static const char* value(const  ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa2f8c4a97b143492ULL;
  static const uint64_t static_value2 = 0xf3fcdc7dfd67aa73ULL;
};

template<class ContainerAllocator>
struct DataType< ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/cart_ptp_motionRequest";
  }

  static const char* value(const  ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "geometry_msgs/Pose position\n\
uint8 speed\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/cart_ptp_motionResponse";
  }

  static const char* value(const  ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
";
  }

  static const char* value(const  ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.position);
    stream.next(m.speed);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct cart_ptp_motionRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct cart_ptp_motionResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<rokon_commander::cart_ptp_motion> {
  static const char* value() 
  {
    return "bacc88753e2c55fcbbe645eff4eeee1a";
  }

  static const char* value(const rokon_commander::cart_ptp_motion&) { return value(); } 
};

template<>
struct DataType<rokon_commander::cart_ptp_motion> {
  static const char* value() 
  {
    return "rokon_commander/cart_ptp_motion";
  }

  static const char* value(const rokon_commander::cart_ptp_motion&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bacc88753e2c55fcbbe645eff4eeee1a";
  }

  static const char* value(const rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/cart_ptp_motion";
  }

  static const char* value(const rokon_commander::cart_ptp_motionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bacc88753e2c55fcbbe645eff4eeee1a";
  }

  static const char* value(const rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/cart_ptp_motion";
  }

  static const char* value(const rokon_commander::cart_ptp_motionResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROKON_COMMANDER_SERVICE_CART_PTP_MOTION_H
