// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_msgs:srv/Load.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__SRV__DETAIL__LOAD__BUILDER_HPP_
#define ROS2_MSGS__SRV__DETAIL__LOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_msgs/srv/detail/load__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_Load_Request_filename
{
public:
  Init_Load_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::srv::Load_Request filename(::ros2_msgs::srv::Load_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::srv::Load_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::srv::Load_Request>()
{
  return ros2_msgs::srv::builder::Init_Load_Request_filename();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_Load_Response_success
{
public:
  Init_Load_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::srv::Load_Response success(::ros2_msgs::srv::Load_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::srv::Load_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::srv::Load_Response>()
{
  return ros2_msgs::srv::builder::Init_Load_Response_success();
}

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__SRV__DETAIL__LOAD__BUILDER_HPP_
