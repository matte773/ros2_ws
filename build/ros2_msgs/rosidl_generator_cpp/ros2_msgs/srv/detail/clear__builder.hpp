// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_msgs:srv/Clear.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__SRV__DETAIL__CLEAR__BUILDER_HPP_
#define ROS2_MSGS__SRV__DETAIL__CLEAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_msgs/srv/detail/clear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_Clear_Request_reset
{
public:
  Init_Clear_Request_reset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::srv::Clear_Request reset(::ros2_msgs::srv::Clear_Request::_reset_type arg)
  {
    msg_.reset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::srv::Clear_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::srv::Clear_Request>()
{
  return ros2_msgs::srv::builder::Init_Clear_Request_reset();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_Clear_Response_done
{
public:
  Init_Clear_Response_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::srv::Clear_Response done(::ros2_msgs::srv::Clear_Response::_done_type arg)
  {
    msg_.done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::srv::Clear_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::srv::Clear_Response>()
{
  return ros2_msgs::srv::builder::Init_Clear_Response_done();
}

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__SRV__DETAIL__CLEAR__BUILDER_HPP_
