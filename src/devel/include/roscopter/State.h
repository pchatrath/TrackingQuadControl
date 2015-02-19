/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/jay/ros/src/roscopter/msg/State.msg
 *
 */


#ifndef ROSCOPTER_MESSAGE_STATE_H
#define ROSCOPTER_MESSAGE_STATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roscopter
{
template <class ContainerAllocator>
struct State_
{
  typedef State_<ContainerAllocator> Type;

  State_()
    : armed(false)
    , guided(false)
    , mode()  {
    }
  State_(const ContainerAllocator& _alloc)
    : armed(false)
    , guided(false)
    , mode(_alloc)  {
    }



   typedef uint8_t _armed_type;
  _armed_type armed;

   typedef uint8_t _guided_type;
  _guided_type guided;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mode_type;
  _mode_type mode;




  typedef boost::shared_ptr< ::roscopter::State_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roscopter::State_<ContainerAllocator> const> ConstPtr;

}; // struct State_

typedef ::roscopter::State_<std::allocator<void> > State;

typedef boost::shared_ptr< ::roscopter::State > StatePtr;
typedef boost::shared_ptr< ::roscopter::State const> StateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roscopter::State_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roscopter::State_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roscopter

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'roscopter': ['/home/jay/ros/src/roscopter/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roscopter::State_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roscopter::State_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roscopter::State_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roscopter::State_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roscopter::State_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roscopter::State_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roscopter::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "78271f1d5e63aa48bd71dc911f0524f1";
  }

  static const char* value(const ::roscopter::State_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x78271f1d5e63aa48ULL;
  static const uint64_t static_value2 = 0xbd71dc911f0524f1ULL;
};

template<class ContainerAllocator>
struct DataType< ::roscopter::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roscopter/State";
  }

  static const char* value(const ::roscopter::State_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roscopter::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool     armed\n\
bool     guided		#true if MAV is in AUTO/RTL/LOITER/GUIDED/CIRCLE mode\n\
string   mode   	#control more\n\
";
  }

  static const char* value(const ::roscopter::State_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roscopter::State_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.armed);
      stream.next(m.guided);
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct State_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roscopter::State_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roscopter::State_<ContainerAllocator>& v)
  {
    s << indent << "armed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.armed);
    s << indent << "guided: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.guided);
    s << indent << "mode: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSCOPTER_MESSAGE_STATE_H