// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_msgs:msg/LocationName.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__TRAITS_HPP_
#define ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_msgs/msg/detail/location_name__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocationName & msg,
  std::ostream & out)
{
  out << "{";
  // member: location_name
  {
    out << "location_name: ";
    rosidl_generator_traits::value_to_yaml(msg.location_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocationName & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: location_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location_name: ";
    rosidl_generator_traits::value_to_yaml(msg.location_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocationName & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::msg::LocationName & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::msg::LocationName & msg)
{
  return ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::msg::LocationName>()
{
  return "ros2_msgs::msg::LocationName";
}

template<>
inline const char * name<ros2_msgs::msg::LocationName>()
{
  return "ros2_msgs/msg/LocationName";
}

template<>
struct has_fixed_size<ros2_msgs::msg::LocationName>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_msgs::msg::LocationName>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_msgs::msg::LocationName>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__TRAITS_HPP_
