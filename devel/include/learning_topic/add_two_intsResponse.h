// Generated by gencpp from file learning_topic/add_two_intsResponse.msg
// DO NOT EDIT!


#ifndef LEARNING_TOPIC_MESSAGE_ADD_TWO_INTSRESPONSE_H
#define LEARNING_TOPIC_MESSAGE_ADD_TWO_INTSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace learning_topic
{
template <class ContainerAllocator>
struct add_two_intsResponse_
{
  typedef add_two_intsResponse_<ContainerAllocator> Type;

  add_two_intsResponse_()
    : sum(0)  {
    }
  add_two_intsResponse_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int64_t _sum_type;
  _sum_type sum;





  typedef boost::shared_ptr< ::learning_topic::add_two_intsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::learning_topic::add_two_intsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct add_two_intsResponse_

typedef ::learning_topic::add_two_intsResponse_<std::allocator<void> > add_two_intsResponse;

typedef boost::shared_ptr< ::learning_topic::add_two_intsResponse > add_two_intsResponsePtr;
typedef boost::shared_ptr< ::learning_topic::add_two_intsResponse const> add_two_intsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::learning_topic::add_two_intsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::learning_topic::add_two_intsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace learning_topic

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'learning_topic': ['/home/yiluzhang/code/catkin_ws/src/learning_communication/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::learning_topic::add_two_intsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::learning_topic::add_two_intsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learning_topic::add_two_intsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learning_topic::add_two_intsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learning_topic::add_two_intsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learning_topic::add_two_intsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::learning_topic::add_two_intsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b88405221c77b1878a3cbbfff53428d7";
  }

  static const char* value(const ::learning_topic::add_two_intsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb88405221c77b187ULL;
  static const uint64_t static_value2 = 0x8a3cbbfff53428d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::learning_topic::add_two_intsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "learning_topic/add_two_intsResponse";
  }

  static const char* value(const ::learning_topic::add_two_intsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::learning_topic::add_two_intsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 sum\n\
";
  }

  static const char* value(const ::learning_topic::add_two_intsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::learning_topic::add_two_intsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct add_two_intsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::learning_topic::add_two_intsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::learning_topic::add_two_intsResponse_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int64_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LEARNING_TOPIC_MESSAGE_ADD_TWO_INTSRESPONSE_H
