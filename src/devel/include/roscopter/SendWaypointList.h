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
 * Auto-generated by gensrv_cpp from file /home/jay/ros/src/roscopter/srv/SendWaypointList.srv
 *
 */


#ifndef ROSCOPTER_MESSAGE_SENDWAYPOINTLIST_H
#define ROSCOPTER_MESSAGE_SENDWAYPOINTLIST_H

#include <ros/service_traits.h>


#include <roscopter/SendWaypointListRequest.h>
#include <roscopter/SendWaypointListResponse.h>


namespace roscopter
{

struct SendWaypointList
{

typedef SendWaypointListRequest Request;
typedef SendWaypointListResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SendWaypointList
} // namespace roscopter


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roscopter::SendWaypointList > {
  static const char* value()
  {
    return "9944296f2443b43e549ac358efe7dae8";
  }

  static const char* value(const ::roscopter::SendWaypointList&) { return value(); }
};

template<>
struct DataType< ::roscopter::SendWaypointList > {
  static const char* value()
  {
    return "roscopter/SendWaypointList";
  }

  static const char* value(const ::roscopter::SendWaypointList&) { return value(); }
};


// service_traits::MD5Sum< ::roscopter::SendWaypointListRequest> should match 
// service_traits::MD5Sum< ::roscopter::SendWaypointList > 
template<>
struct MD5Sum< ::roscopter::SendWaypointListRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roscopter::SendWaypointList >::value();
  }
  static const char* value(const ::roscopter::SendWaypointListRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roscopter::SendWaypointListRequest> should match 
// service_traits::DataType< ::roscopter::SendWaypointList > 
template<>
struct DataType< ::roscopter::SendWaypointListRequest>
{
  static const char* value()
  {
    return DataType< ::roscopter::SendWaypointList >::value();
  }
  static const char* value(const ::roscopter::SendWaypointListRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roscopter::SendWaypointListResponse> should match 
// service_traits::MD5Sum< ::roscopter::SendWaypointList > 
template<>
struct MD5Sum< ::roscopter::SendWaypointListResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roscopter::SendWaypointList >::value();
  }
  static const char* value(const ::roscopter::SendWaypointListResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roscopter::SendWaypointListResponse> should match 
// service_traits::DataType< ::roscopter::SendWaypointList > 
template<>
struct DataType< ::roscopter::SendWaypointListResponse>
{
  static const char* value()
  {
    return DataType< ::roscopter::SendWaypointList >::value();
  }
  static const char* value(const ::roscopter::SendWaypointListResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSCOPTER_MESSAGE_SENDWAYPOINTLIST_H