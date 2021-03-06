/* Auto-generated by genmsg_cpp for file /home/intelligentrobotics/ws/orocos/rokon_commander/srv/get_fri_state.srv */
#ifndef ROKON_COMMANDER_SERVICE_GET_FRI_STATE_H
#define ROKON_COMMANDER_SERVICE_GET_FRI_STATE_H
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




namespace rokon_commander
{
template <class ContainerAllocator>
struct get_fri_stateRequest_ {
  typedef get_fri_stateRequest_<ContainerAllocator> Type;

  get_fri_stateRequest_()
  {
  }

  get_fri_stateRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::rokon_commander::get_fri_stateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokon_commander::get_fri_stateRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct get_fri_stateRequest
typedef  ::rokon_commander::get_fri_stateRequest_<std::allocator<void> > get_fri_stateRequest;

typedef boost::shared_ptr< ::rokon_commander::get_fri_stateRequest> get_fri_stateRequestPtr;
typedef boost::shared_ptr< ::rokon_commander::get_fri_stateRequest const> get_fri_stateRequestConstPtr;



template <class ContainerAllocator>
struct get_fri_stateResponse_ {
  typedef get_fri_stateResponse_<ContainerAllocator> Type;

  get_fri_stateResponse_()
  : state(0)
  {
  }

  get_fri_stateResponse_(const ContainerAllocator& _alloc)
  : state(0)
  {
  }

  typedef int32_t _state_type;
  int32_t state;


  typedef boost::shared_ptr< ::rokon_commander::get_fri_stateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokon_commander::get_fri_stateResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct get_fri_stateResponse
typedef  ::rokon_commander::get_fri_stateResponse_<std::allocator<void> > get_fri_stateResponse;

typedef boost::shared_ptr< ::rokon_commander::get_fri_stateResponse> get_fri_stateResponsePtr;
typedef boost::shared_ptr< ::rokon_commander::get_fri_stateResponse const> get_fri_stateResponseConstPtr;


struct get_fri_state
{

typedef get_fri_stateRequest Request;
typedef get_fri_stateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct get_fri_state
} // namespace rokon_commander

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_fri_stateRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_fri_stateRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rokon_commander::get_fri_stateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::rokon_commander::get_fri_stateRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rokon_commander::get_fri_stateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_fri_stateRequest";
  }

  static const char* value(const  ::rokon_commander::get_fri_stateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rokon_commander::get_fri_stateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::rokon_commander::get_fri_stateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rokon_commander::get_fri_stateRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_fri_stateResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_fri_stateResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rokon_commander::get_fri_stateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7a2f37ef2ba405f0c7a15cc72663d6f0";
  }

  static const char* value(const  ::rokon_commander::get_fri_stateResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7a2f37ef2ba405f0ULL;
  static const uint64_t static_value2 = 0xc7a15cc72663d6f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::rokon_commander::get_fri_stateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_fri_stateResponse";
  }

  static const char* value(const  ::rokon_commander::get_fri_stateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rokon_commander::get_fri_stateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 state\n\
\n\
";
  }

  static const char* value(const  ::rokon_commander::get_fri_stateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rokon_commander::get_fri_stateResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rokon_commander::get_fri_stateRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct get_fri_stateRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rokon_commander::get_fri_stateResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.state);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct get_fri_stateResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<rokon_commander::get_fri_state> {
  static const char* value() 
  {
    return "7a2f37ef2ba405f0c7a15cc72663d6f0";
  }

  static const char* value(const rokon_commander::get_fri_state&) { return value(); } 
};

template<>
struct DataType<rokon_commander::get_fri_state> {
  static const char* value() 
  {
    return "rokon_commander/get_fri_state";
  }

  static const char* value(const rokon_commander::get_fri_state&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rokon_commander::get_fri_stateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7a2f37ef2ba405f0c7a15cc72663d6f0";
  }

  static const char* value(const rokon_commander::get_fri_stateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rokon_commander::get_fri_stateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_fri_state";
  }

  static const char* value(const rokon_commander::get_fri_stateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rokon_commander::get_fri_stateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7a2f37ef2ba405f0c7a15cc72663d6f0";
  }

  static const char* value(const rokon_commander::get_fri_stateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rokon_commander::get_fri_stateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_fri_state";
  }

  static const char* value(const rokon_commander::get_fri_stateResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROKON_COMMANDER_SERVICE_GET_FRI_STATE_H

