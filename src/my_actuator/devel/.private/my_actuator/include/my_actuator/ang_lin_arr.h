// Generated by gencpp from file my_actuator/ang_lin_arr.msg
// DO NOT EDIT!


#ifndef MY_ACTUATOR_MESSAGE_ANG_LIN_ARR_H
#define MY_ACTUATOR_MESSAGE_ANG_LIN_ARR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_actuator
{
template <class ContainerAllocator>
struct ang_lin_arr_
{
  typedef ang_lin_arr_<ContainerAllocator> Type;

  ang_lin_arr_()
    : data()  {
      data.assign(0.0);
  }
  ang_lin_arr_(const ContainerAllocator& _alloc)
    : data()  {
  (void)_alloc;
      data.assign(0.0);
  }



   typedef boost::array<float, 4>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::my_actuator::ang_lin_arr_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_actuator::ang_lin_arr_<ContainerAllocator> const> ConstPtr;

}; // struct ang_lin_arr_

typedef ::my_actuator::ang_lin_arr_<std::allocator<void> > ang_lin_arr;

typedef boost::shared_ptr< ::my_actuator::ang_lin_arr > ang_lin_arrPtr;
typedef boost::shared_ptr< ::my_actuator::ang_lin_arr const> ang_lin_arrConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_actuator::ang_lin_arr_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_actuator::ang_lin_arr_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_actuator::ang_lin_arr_<ContainerAllocator1> & lhs, const ::my_actuator::ang_lin_arr_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_actuator::ang_lin_arr_<ContainerAllocator1> & lhs, const ::my_actuator::ang_lin_arr_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_actuator

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::my_actuator::ang_lin_arr_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_actuator::ang_lin_arr_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_actuator::ang_lin_arr_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_actuator::ang_lin_arr_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_actuator::ang_lin_arr_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_actuator::ang_lin_arr_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_actuator::ang_lin_arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f75759a84c93e4f482e59ca4ad2da4b7";
  }

  static const char* value(const ::my_actuator::ang_lin_arr_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf75759a84c93e4f4ULL;
  static const uint64_t static_value2 = 0x82e59ca4ad2da4b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_actuator::ang_lin_arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_actuator/ang_lin_arr";
  }

  static const char* value(const ::my_actuator::ang_lin_arr_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_actuator::ang_lin_arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[4] data\n"
;
  }

  static const char* value(const ::my_actuator::ang_lin_arr_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_actuator::ang_lin_arr_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ang_lin_arr_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_actuator::ang_lin_arr_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_actuator::ang_lin_arr_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_ACTUATOR_MESSAGE_ANG_LIN_ARR_H
