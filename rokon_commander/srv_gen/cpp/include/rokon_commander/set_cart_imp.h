/* Auto-generated by genmsg_cpp for file /home/intelligentrobotics/ws/orocos/rokon_commander/srv/set_cart_imp.srv */
#ifndef ROKON_COMMANDER_SERVICE_SET_CART_IMP_H
#define ROKON_COMMANDER_SERVICE_SET_CART_IMP_H
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

#include "geometry_msgs/Twist.h"
#include "geometry_msgs/Twist.h"



namespace rokon_commander
{
template <class ContainerAllocator>
struct set_cart_impRequest_ {
  typedef set_cart_impRequest_<ContainerAllocator> Type;

  set_cart_impRequest_()
  : stiffness()
  , damping()
  {
  }

  set_cart_impRequest_(const ContainerAllocator& _alloc)
  : stiffness(_alloc)
  , damping(_alloc)
  {
  }

  typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _stiffness_type;
   ::geometry_msgs::Twist_<ContainerAllocator>  stiffness;

  typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _damping_type;
   ::geometry_msgs::Twist_<ContainerAllocator>  damping;


  typedef boost::shared_ptr< ::rokon_commander::set_cart_impRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokon_commander::set_cart_impRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct set_cart_impRequest
typedef  ::rokon_commander::set_cart_impRequest_<std::allocator<void> > set_cart_impRequest;

typedef boost::shared_ptr< ::rokon_commander::set_cart_impRequest> set_cart_impRequestPtr;
typedef boost::shared_ptr< ::rokon_commander::set_cart_impRequest const> set_cart_impRequestConstPtr;



template <class ContainerAllocator>
struct set_cart_impResponse_ {
  typedef set_cart_impResponse_<ContainerAllocator> Type;

  set_cart_impResponse_()
  {
  }

  set_cart_impResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::rokon_commander::set_cart_impResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokon_commander::set_cart_impResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct set_cart_impResponse
typedef  ::rokon_commander::set_cart_impResponse_<std::allocator<void> > set_cart_impResponse;

typedef boost::shared_ptr< ::rokon_commander::set_cart_impResponse> set_cart_impResponsePtr;
typedef boost::shared_ptr< ::rokon_commander::set_cart_impResponse const> set_cart_impResponseConstPtr;


struct set_cart_imp
{

typedef set_cart_impRequest Request;
typedef set_cart_impResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct set_cart_imp
} // namespace rokon_commander

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::set_cart_impRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::set_cart_impRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rokon_commander::set_cart_impRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bd4dbca8475cfa8e858db7599bb64f48";
  }

  static const char* value(const  ::rokon_commander::set_cart_impRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xbd4dbca8475cfa8eULL;
  static const uint64_t static_value2 = 0x858db7599bb64f48ULL;
};

template<class ContainerAllocator>
struct DataType< ::rokon_commander::set_cart_impRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/set_cart_impRequest";
  }

  static const char* value(const  ::rokon_commander::set_cart_impRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rokon_commander::set_cart_impRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "geometry_msgs/Twist stiffness\n\
geometry_msgs/Twist damping\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::rokon_commander::set_cart_impRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rokon_commander::set_cart_impRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::set_cart_impResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::set_cart_impResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rokon_commander::set_cart_impResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::rokon_commander::set_cart_impResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rokon_commander::set_cart_impResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/set_cart_impResponse";
  }

  static const char* value(const  ::rokon_commander::set_cart_impResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rokon_commander::set_cart_impResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::rokon_commander::set_cart_impResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rokon_commander::set_cart_impResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rokon_commander::set_cart_impRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.stiffness);
    stream.next(m.damping);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct set_cart_impRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rokon_commander::set_cart_impResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct set_cart_impResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<rokon_commander::set_cart_imp> {
  static const char* value() 
  {
    return "bd4dbca8475cfa8e858db7599bb64f48";
  }

  static const char* value(const rokon_commander::set_cart_imp&) { return value(); } 
};

template<>
struct DataType<rokon_commander::set_cart_imp> {
  static const char* value() 
  {
    return "rokon_commander/set_cart_imp";
  }

  static const char* value(const rokon_commander::set_cart_imp&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rokon_commander::set_cart_impRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bd4dbca8475cfa8e858db7599bb64f48";
  }

  static const char* value(const rokon_commander::set_cart_impRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rokon_commander::set_cart_impRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/set_cart_imp";
  }

  static const char* value(const rokon_commander::set_cart_impRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rokon_commander::set_cart_impResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bd4dbca8475cfa8e858db7599bb64f48";
  }

  static const char* value(const rokon_commander::set_cart_impResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rokon_commander::set_cart_impResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/set_cart_imp";
  }

  static const char* value(const rokon_commander::set_cart_impResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROKON_COMMANDER_SERVICE_SET_CART_IMP_H

