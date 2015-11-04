/* Auto-generated by genmsg_cpp for file /home/intelligentrobotics/ws/orocos/rokon_commander/srv/get_bool.srv */
#ifndef ROKON_COMMANDER_SERVICE_GET_BOOL_H
#define ROKON_COMMANDER_SERVICE_GET_BOOL_H
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
struct get_boolRequest_ {
  typedef get_boolRequest_<ContainerAllocator> Type;

  get_boolRequest_()
  {
  }

  get_boolRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::rokon_commander::get_boolRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokon_commander::get_boolRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct get_boolRequest
typedef  ::rokon_commander::get_boolRequest_<std::allocator<void> > get_boolRequest;

typedef boost::shared_ptr< ::rokon_commander::get_boolRequest> get_boolRequestPtr;
typedef boost::shared_ptr< ::rokon_commander::get_boolRequest const> get_boolRequestConstPtr;



template <class ContainerAllocator>
struct get_boolResponse_ {
  typedef get_boolResponse_<ContainerAllocator> Type;

  get_boolResponse_()
  : answer(false)
  {
  }

  get_boolResponse_(const ContainerAllocator& _alloc)
  : answer(false)
  {
  }

  typedef uint8_t _answer_type;
  uint8_t answer;


  typedef boost::shared_ptr< ::rokon_commander::get_boolResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rokon_commander::get_boolResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct get_boolResponse
typedef  ::rokon_commander::get_boolResponse_<std::allocator<void> > get_boolResponse;

typedef boost::shared_ptr< ::rokon_commander::get_boolResponse> get_boolResponsePtr;
typedef boost::shared_ptr< ::rokon_commander::get_boolResponse const> get_boolResponseConstPtr;


struct get_bool
{

typedef get_boolRequest Request;
typedef get_boolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct get_bool
} // namespace rokon_commander

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_boolRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_boolRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rokon_commander::get_boolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::rokon_commander::get_boolRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rokon_commander::get_boolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_boolRequest";
  }

  static const char* value(const  ::rokon_commander::get_boolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rokon_commander::get_boolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::rokon_commander::get_boolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rokon_commander::get_boolRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_boolResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rokon_commander::get_boolResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rokon_commander::get_boolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "00a50c1bd863054691f197c515f4e922";
  }

  static const char* value(const  ::rokon_commander::get_boolResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x00a50c1bd8630546ULL;
  static const uint64_t static_value2 = 0x91f197c515f4e922ULL;
};

template<class ContainerAllocator>
struct DataType< ::rokon_commander::get_boolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_boolResponse";
  }

  static const char* value(const  ::rokon_commander::get_boolResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rokon_commander::get_boolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool answer\n\
\n\
";
  }

  static const char* value(const  ::rokon_commander::get_boolResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rokon_commander::get_boolResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rokon_commander::get_boolRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct get_boolRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rokon_commander::get_boolResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.answer);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct get_boolResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<rokon_commander::get_bool> {
  static const char* value() 
  {
    return "00a50c1bd863054691f197c515f4e922";
  }

  static const char* value(const rokon_commander::get_bool&) { return value(); } 
};

template<>
struct DataType<rokon_commander::get_bool> {
  static const char* value() 
  {
    return "rokon_commander/get_bool";
  }

  static const char* value(const rokon_commander::get_bool&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rokon_commander::get_boolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "00a50c1bd863054691f197c515f4e922";
  }

  static const char* value(const rokon_commander::get_boolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rokon_commander::get_boolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_bool";
  }

  static const char* value(const rokon_commander::get_boolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rokon_commander::get_boolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "00a50c1bd863054691f197c515f4e922";
  }

  static const char* value(const rokon_commander::get_boolResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rokon_commander::get_boolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rokon_commander/get_bool";
  }

  static const char* value(const rokon_commander::get_boolResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROKON_COMMANDER_SERVICE_GET_BOOL_H

