/* Auto-generated by genmsg_cpp for file /home/pedro/quadcopter/ros/px-ros-pkg/px_comm/msg/OpticalFlow.msg */
#ifndef PX_COMM_MESSAGE_OPTICALFLOW_H
#define PX_COMM_MESSAGE_OPTICALFLOW_H
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

#include "std_msgs/Header.h"

namespace px_comm
{
template <class ContainerAllocator>
struct OpticalFlow_ {
  typedef OpticalFlow_<ContainerAllocator> Type;

  OpticalFlow_()
  : header()
  , ground_distance(0.0)
  , flow_x(0)
  , flow_y(0)
  , velocity_x(0.0)
  , velocity_y(0.0)
  , quality(0)
  {
  }

  OpticalFlow_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , ground_distance(0.0)
  , flow_x(0)
  , flow_y(0)
  , velocity_x(0.0)
  , velocity_y(0.0)
  , quality(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef float _ground_distance_type;
  float ground_distance;

  typedef int16_t _flow_x_type;
  int16_t flow_x;

  typedef int16_t _flow_y_type;
  int16_t flow_y;

  typedef float _velocity_x_type;
  float velocity_x;

  typedef float _velocity_y_type;
  float velocity_y;

  typedef uint8_t _quality_type;
  uint8_t quality;


  typedef boost::shared_ptr< ::px_comm::OpticalFlow_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::px_comm::OpticalFlow_<ContainerAllocator>  const> ConstPtr;
}; // struct OpticalFlow
typedef  ::px_comm::OpticalFlow_<std::allocator<void> > OpticalFlow;

typedef boost::shared_ptr< ::px_comm::OpticalFlow> OpticalFlowPtr;
typedef boost::shared_ptr< ::px_comm::OpticalFlow const> OpticalFlowConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::px_comm::OpticalFlow_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::px_comm::OpticalFlow_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace px_comm

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::px_comm::OpticalFlow_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::px_comm::OpticalFlow_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::px_comm::OpticalFlow_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6705fe0e94fea14978a508d00cf97427";
  }

  static const char* value(const  ::px_comm::OpticalFlow_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6705fe0e94fea149ULL;
  static const uint64_t static_value2 = 0x78a508d00cf97427ULL;
};

template<class ContainerAllocator>
struct DataType< ::px_comm::OpticalFlow_<ContainerAllocator> > {
  static const char* value() 
  {
    return "px_comm/OpticalFlow";
  }

  static const char* value(const  ::px_comm::OpticalFlow_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::px_comm::OpticalFlow_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
float32 ground_distance  # distance to ground in meters\n\
int16   flow_x           # x-component of optical flow in pixels\n\
int16   flow_y           # y-component of optical flow in pixels\n\
float32 velocity_x       # x-component of scaled optical flow in m/s\n\
float32 velocity_y       # y-component of scaled optical flow in m/s\n\
uint8   quality          # quality of optical flow estimate\n\
\n\
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
";
  }

  static const char* value(const  ::px_comm::OpticalFlow_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::px_comm::OpticalFlow_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::px_comm::OpticalFlow_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::px_comm::OpticalFlow_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.ground_distance);
    stream.next(m.flow_x);
    stream.next(m.flow_y);
    stream.next(m.velocity_x);
    stream.next(m.velocity_y);
    stream.next(m.quality);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct OpticalFlow_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::px_comm::OpticalFlow_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::px_comm::OpticalFlow_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ground_distance: ";
    Printer<float>::stream(s, indent + "  ", v.ground_distance);
    s << indent << "flow_x: ";
    Printer<int16_t>::stream(s, indent + "  ", v.flow_x);
    s << indent << "flow_y: ";
    Printer<int16_t>::stream(s, indent + "  ", v.flow_y);
    s << indent << "velocity_x: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_x);
    s << indent << "velocity_y: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_y);
    s << indent << "quality: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.quality);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PX_COMM_MESSAGE_OPTICALFLOW_H

