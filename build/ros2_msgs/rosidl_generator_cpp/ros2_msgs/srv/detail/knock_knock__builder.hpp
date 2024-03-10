// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_msgs:srv/KnockKnock.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__SRV__DETAIL__KNOCK_KNOCK__BUILDER_HPP_
#define ROS2_MSGS__SRV__DETAIL__KNOCK_KNOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_msgs/srv/detail/knock_knock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_KnockKnock_Request_request
{
public:
  Init_KnockKnock_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::srv::KnockKnock_Request request(::ros2_msgs::srv::KnockKnock_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::srv::KnockKnock_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::srv::KnockKnock_Request>()
{
  return ros2_msgs::srv::builder::Init_KnockKnock_Request_request();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_KnockKnock_Response_response
{
public:
  Init_KnockKnock_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::srv::KnockKnock_Response response(::ros2_msgs::srv::KnockKnock_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::srv::KnockKnock_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::srv::KnockKnock_Response>()
{
  return ros2_msgs::srv::builder::Init_KnockKnock_Response_response();
}

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__SRV__DETAIL__KNOCK_KNOCK__BUILDER_HPP_
