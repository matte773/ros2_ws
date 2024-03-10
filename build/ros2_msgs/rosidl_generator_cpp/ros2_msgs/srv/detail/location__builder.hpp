// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_msgs:srv/Location.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__SRV__DETAIL__LOCATION__BUILDER_HPP_
#define ROS2_MSGS__SRV__DETAIL__LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_msgs/srv/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_Location_Request_location_name
{
public:
  Init_Location_Request_location_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::srv::Location_Request location_name(::ros2_msgs::srv::Location_Request::_location_name_type arg)
  {
    msg_.location_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::srv::Location_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::srv::Location_Request>()
{
  return ros2_msgs::srv::builder::Init_Location_Request_location_name();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::srv::Location_Response>()
{
  return ::ros2_msgs::srv::Location_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__SRV__DETAIL__LOCATION__BUILDER_HPP_
