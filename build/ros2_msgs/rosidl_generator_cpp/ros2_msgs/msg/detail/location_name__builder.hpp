// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_msgs:msg/LocationName.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__BUILDER_HPP_
#define ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_msgs/msg/detail/location_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_LocationName_location_name
{
public:
  Init_LocationName_location_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::msg::LocationName location_name(::ros2_msgs::msg::LocationName::_location_name_type arg)
  {
    msg_.location_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::msg::LocationName msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::msg::LocationName>()
{
  return ros2_msgs::msg::builder::Init_LocationName_location_name();
}

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__BUILDER_HPP_
