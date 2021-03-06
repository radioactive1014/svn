/* Auto-generated by genmsg_cpp for file /home/intelligentrobotics/ws/orocos/KUKACommander/srv/set_bool.srv */
#ifndef KUKACOMMANDER_SERVICE_SET_BOOL_H
#define KUKACOMMANDER_SERVICE_SET_BOOL_H
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
struct set_boolRequest_ {
  typedef set_boolRequest_<ContainerAllocator> Type;

  set_boolRequest_()
  : activate(false)
  {
  }

  set_boolRequest_(const ContainerAllocator& _alloc)
  : activate(false)
  {
  }

  typedef uint8_t _activate_type;
  uint8_t activate;


  typedef boost::shared_ptr< ::KUKACommander::set_boolRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::KUKACommander::set_boolRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct set_boolRequest
typedef  ::KUKACommander::set_boolRequest_<std::allocator<void> > set_boolRequest;

typedef boost::shared_ptr< ::KUKACommander::set_boolRequest> set_boolRequestPtr;
typedef boost::shared_ptr< ::KUKACommander::set_boolRequest const> set_boolRequestConstPtr;



template <class ContainerAllocator>
struct set_boolResponse_ {
  typedef set_boolResponse_<ContainerAllocator> Type;

  set_boolResponse_()
  {
  }

  set_boolResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::KUKACommander::set_boolResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::KUKACommander::set_boolResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct set_boolResponse
typedef  ::KUKACommander::set_boolResponse_<std::allocator<void> > set_boolResponse;

typedef boost::shared_ptr< ::KUKACommander::set_boolResponse> set_boolResponsePtr;
typedef boost::shared_ptr< ::KUKACommander::set_boolResponse const> set_boolResponseConstPtr;


struct set_bool
{

typedef set_boolRequest Request;
typedef set_boolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct set_bool
} // namespace KUKACommander

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::KUKACommander::set_boolRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::KUKACommander::set_boolRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::KUKACommander::set_boolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b15627a984ebdd591b2ee87ce75c4d06";
  }

  static const char* value(const  ::KUKACommander::set_boolRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb15627a984ebdd59ULL;
  static const uint64_t static_value2 = 0x1b2ee87ce75c4d06ULL;
};

template<class ContainerAllocator>
struct DataType< ::KUKACommander::set_boolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "KUKACommander/set_boolRequest";
  }

  static const char* value(const  ::KUKACommander::set_boolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::KUKACommander::set_boolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool activate\n\
\n\
";
  }

  static const char* value(const  ::KUKACommander::set_boolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::KUKACommander::set_boolRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::KUKACommander::set_boolResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::KUKACommander::set_boolResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::KUKACommander::set_boolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::KUKACommander::set_boolResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::KUKACommander::set_boolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "KUKACommander/set_boolResponse";
  }

  static const char* value(const  ::KUKACommander::set_boolResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::KUKACommander::set_boolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::KUKACommander::set_boolResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::KUKACommander::set_boolResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::KUKACommander::set_boolRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.activate);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct set_boolRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::KUKACommander::set_boolResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct set_boolResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<KUKACommander::set_bool> {
  static const char* value() 
  {
    return "b15627a984ebdd591b2ee87ce75c4d06";
  }

  static const char* value(const KUKACommander::set_bool&) { return value(); } 
};

template<>
struct DataType<KUKACommander::set_bool> {
  static const char* value() 
  {
    return "KUKACommander/set_bool";
  }

  static const char* value(const KUKACommander::set_bool&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<KUKACommander::set_boolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b15627a984ebdd591b2ee87ce75c4d06";
  }

  static const char* value(const KUKACommander::set_boolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<KUKACommander::set_boolRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "KUKACommander/set_bool";
  }

  static const char* value(const KUKACommander::set_boolRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<KUKACommander::set_boolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b15627a984ebdd591b2ee87ce75c4d06";
  }

  static const char* value(const KUKACommander::set_boolResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<KUKACommander::set_boolResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "KUKACommander/set_bool";
  }

  static const char* value(const KUKACommander::set_boolResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // KUKACOMMANDER_SERVICE_SET_BOOL_H

