// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_msgs:srv/Save.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__SRV__DETAIL__SAVE__BUILDER_HPP_
#define ROS2_MSGS__SRV__DETAIL__SAVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_msgs/srv/detail/save__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_Save_Request_filename
{
public:
  Init_Save_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::srv::Save_Request filename(::ros2_msgs::srv::Save_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::srv::Save_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::srv::Save_Request>()
{
  return ros2_msgs::srv::builder::Init_Save_Request_filename();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_Save_Response_success
{
public:
  Init_Save_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::srv::Save_Response success(::ros2_msgs::srv::Save_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::srv::Save_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::srv::Save_Response>()
{
  return ros2_msgs::srv::builder::Init_Save_Response_success();
}

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__SRV__DETAIL__SAVE__BUILDER_HPP_
