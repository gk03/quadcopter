// Generated by gencpp from file height/state.msg
// DO NOT EDIT!


#ifndef HEIGHT_MESSAGE_STATE_H
#define HEIGHT_MESSAGE_STATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <height/Attitude.h>

namespace height
{
template <class ContainerAllocator>
struct state_
{
  typedef state_<ContainerAllocator> Type;

  state_()
    : header()
    , attitude()
    , x(0.0)
    , y(0.0)
    , vx(0.0)
    , vy(0.0)
    , quality(0)  {
    }
  state_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , attitude(_alloc)
    , x(0.0)
    , y(0.0)
    , vx(0.0)
    , vy(0.0)
    , quality(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::height::Attitude_<ContainerAllocator>  _attitude_type;
  _attitude_type attitude;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _vx_type;
  _vx_type vx;

   typedef double _vy_type;
  _vy_type vy;

   typedef int8_t _quality_type;
  _quality_type quality;




  typedef boost::shared_ptr< ::height::state_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::height::state_<ContainerAllocator> const> ConstPtr;

}; // struct state_

typedef ::height::state_<std::allocator<void> > state;

typedef boost::shared_ptr< ::height::state > statePtr;
typedef boost::shared_ptr< ::height::state const> stateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::height::state_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::height::state_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace height

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'mavros_msgs': ['/opt/ros/indigo/share/mavros_msgs/cmake/../msg'], 'height': ['/home/pedro/catkin/src/height/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::height::state_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::height::state_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::height::state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::height::state_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::height::state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::height::state_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::height::state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b9b433aa82e5650478ff80fb4e33969f";
  }

  static const char* value(const ::height::state_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb9b433aa82e56504ULL;
  static const uint64_t static_value2 = 0x78ff80fb4e33969fULL;
};

template<class ContainerAllocator>
struct DataType< ::height::state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "height/state";
  }

  static const char* value(const ::height::state_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::height::state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
Attitude attitude\n\
float64 x\n\
float64 y\n\
float64 vx\n\
float64 vy\n\
int8 quality\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: height/Attitude\n\
float64 yaw\n\
float64 pitch\n\
float64 roll\n\
";
  }

  static const char* value(const ::height::state_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::height::state_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.attitude);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.vx);
      stream.next(m.vy);
      stream.next(m.quality);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct state_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::height::state_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::height::state_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "attitude: ";
    s << std::endl;
    Printer< ::height::Attitude_<ContainerAllocator> >::stream(s, indent + "  ", v.attitude);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "vx: ";
    Printer<double>::stream(s, indent + "  ", v.vx);
    s << indent << "vy: ";
    Printer<double>::stream(s, indent + "  ", v.vy);
    s << indent << "quality: ";
    Printer<int8_t>::stream(s, indent + "  ", v.quality);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HEIGHT_MESSAGE_STATE_H
