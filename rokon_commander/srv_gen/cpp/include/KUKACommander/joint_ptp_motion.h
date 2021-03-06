/* Auto-generated by genmsg_cpp for file /home/intelligentrobotics/ws/orocos/KUKACommander/srv/joint_ptp_motion.srv */
#ifndef KUKACOMMANDER_SERVICE_JOINT_PTP_MOTION_H
#define KUKACOMMANDER_SERVICE_JOINT_PTP_MOTION_H
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




namespace KUKACommander
{
template <class ContainerAllocator>
struct joint_ptp_motionRequest_ {
  typedef joint_ptp_motionRequest_<ContainerAllocator> Type;

  joint_ptp_motionRequest_()
  : position()
  , speed(0)
  {
    position.assign(0.0);
  }

  joint_ptp_motionRequest_(const ContainerAllocator& _alloc)
  : position()
  , speed(0)
  {
    position.assign(0.0);
  }

  typedef boost::array<double, 7>  _position_type;
  boost::array<double, 7>  position;

  typedef uint8_t _speed_type;
  uint8_t speed;


  typedef boost::shared_ptr< ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct joint_ptp_motionRequest
typedef  ::KUKACommander::joint_ptp_motionRequest_<std::allocator<void> > joint_ptp_motionRequest;

typedef boost::shared_ptr< ::KUKACommander::joint_ptp_motionRequest> joint_ptp_motionRequestPtr;
typedef boost::shared_ptr< ::KUKACommander::joint_ptp_motionRequest const> joint_ptp_motionRequestConstPtr;



template <class ContainerAllocator>
struct joint_ptp_motionResponse_ {
  typedef joint_ptp_motionResponse_<ContainerAllocator> Type;

  joint_ptp_motionResponse_()
  : success(false)
  {
  }

  joint_ptp_motionResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct joint_ptp_motionResponse
typedef  ::KUKACommander::joint_ptp_motionResponse_<std::allocator<void> > joint_ptp_motionResponse;

typedef boost::shared_ptr< ::KUKACommander::joint_ptp_motionResponse> joint_ptp_motionResponsePtr;
typedef boost::shared_ptr< ::KUKACommander::joint_ptp_motionResponse const> joint_ptp_motionResponseConstPtr;


struct joint_ptp_motion
{

typedef joint_ptp_motionRequest Request;
typedef joint_ptp_motionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct joint_ptp_motion
} // namespace KUKACommander

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c4dda0b5f25005bf1117f91449616582";
  }

  static const char* value(const  ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc4dda0b5f25005bfULL;
  static const uint64_t static_value2 = 0x1117f91449616582ULL;
};

template<class ContainerAllocator>
struct DataType< ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "KUKACommander/joint_ptp_motionRequest";
  }

  static const char* value(const  ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64[7] position\n\
uint8 speed\n\
\n\
";
  }

  static const char* value(const  ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "KUKACommander/joint_ptp_motionResponse";
  }

  static const char* value(const  ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
";
  }

  static const char* value(const  ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.position);
    stream.next(m.speed);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct joint_ptp_motionRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct joint_ptp_motionResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<KUKACommander::joint_ptp_motion> {
  static const char* value() 
  {
    return "8fb151c8b876c4960080e4453e230950";
  }

  static const char* value(const KUKACommander::joint_ptp_motion&) { return value(); } 
};

template<>
struct DataType<KUKACommander::joint_ptp_motion> {
  static const char* value() 
  {
    return "KUKACommander/joint_ptp_motion";
  }

  static const char* value(const KUKACommander::joint_ptp_motion&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8fb151c8b876c4960080e4453e230950";
  }

  static const char* value(const KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "KUKACommander/joint_ptp_motion";
  }

  static const char* value(const KUKACommander::joint_ptp_motionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8fb151c8b876c4960080e4453e230950";
  }

  static const char* value(const KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "KUKACommander/joint_ptp_motion";
  }

  static const char* value(const KUKACommander::joint_ptp_motionResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // KUKACOMMANDER_SERVICE_JOINT_PTP_MOTION_H

