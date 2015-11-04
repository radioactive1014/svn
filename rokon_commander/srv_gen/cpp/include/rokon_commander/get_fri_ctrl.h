/* Auto-generated by genmsg_cpp for file /home/intelligentrobotics/ws/orocos/rokon_commander/srv/get_fri_ctrl.srv */
#ifndef ROKON_COMMANDER_SERVICE_GET_FRI_CTRL_H
#define ROKON_COMMANDER_SERVICE_GET_FRI_CTRL_H
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
struct get_fri_ctrlRequest_ {
  typedef get_fri_ctrlRequest_<ContainerAllocator> Type;

  get_fri_ctrlRequest_()
  {
  }

  get_fri_ctrlRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct get_fri_ctrlRequest
typedef  ::rokon_commander::get_fri_ctrlRequest_<std::allocator<void> > get_fri_ctrlRequest;

typedef boost::shared_ptr< ::rokon_commander::get_fri_ctrlRequest> get_fri_ctrlRequestPtr;
typedef boost::shared_ptr< ::rokon_commander::get_fri_ctrlRequest const> get_fri_ctrlRequestConstPtr;



template <class ContainerAllocator>
struct get_fri_ctrlResponse_ {
  typedef get_fri_ctrlResponse_<ContainerAllocator> Type;

  get_fri_ctrlResponse_()
  : control(0)
  {
  }

  get_fri_ctrlResponse_(const ContainerAllocator& _alloc)
  : control(0)
  {
  }

  typedef int32_t _control_type;
  int32_t control;


  typedef boost::shared_ptr< ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct get_fri_ctrlResponse
typedef  ::rokon_commander::get_fri_ctrlResponse_<std::allocator<void> > get_fri_ctrlResponse;

typedef boost::shared_ptr< ::rokon_commander::get_fri_ctrlResponse> get_fri_ctrlResponsePtr;
typedef boost::shared_ptr< ::rokon_commander::get_fri_ctrlResponse const> get_fri_ctrlResponseConstPtr;


struct get_fri_ctrl
{

typedef get_fri_ctrlRequest Request;
typedef get_fri_ctrlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct get_fri_ctrl
} // namespace rokon_commander

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_fri_ctrlRequest";
  }

  static const char* value(const  ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "752a7f29a25507b46ad2ec5188eb7e10";
  }

  static const char* value(const  ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x752a7f29a25507b4ULL;
  static const uint64_t static_value2 = 0x6ad2ec5188eb7e10ULL;
};

template<class ContainerAllocator>
struct DataType< ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_fri_ctrlResponse";
  }

  static const char* value(const  ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 control\n\
\n\
";
  }

  static const char* value(const  ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct get_fri_ctrlRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.control);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct get_fri_ctrlResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<rokon_commander::get_fri_ctrl> {
  static const char* value() 
  {
    return "752a7f29a25507b46ad2ec5188eb7e10";
  }

  static const char* value(const rokon_commander::get_fri_ctrl&) { return value(); } 
};

template<>
struct DataType<rokon_commander::get_fri_ctrl> {
  static const char* value() 
  {
    return "rokon_commander/get_fri_ctrl";
  }

  static const char* value(const rokon_commander::get_fri_ctrl&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "752a7f29a25507b46ad2ec5188eb7e10";
  }

  static const char* value(const rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_fri_ctrl";
  }

  static const char* value(const rokon_commander::get_fri_ctrlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "752a7f29a25507b46ad2ec5188eb7e10";
  }

  static const char* value(const rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_fri_ctrl";
  }

  static const char* value(const rokon_commander::get_fri_ctrlResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROKON_COMMANDER_SERVICE_GET_FRI_CTRL_H

