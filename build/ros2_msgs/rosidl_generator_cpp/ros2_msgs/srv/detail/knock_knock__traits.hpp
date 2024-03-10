// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_msgs:srv/KnockKnock.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__SRV__DETAIL__KNOCK_KNOCK__TRAITS_HPP_
#define ROS2_MSGS__SRV__DETAIL__KNOCK_KNOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_msgs/srv/detail/knock_knock__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const KnockKnock_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KnockKnock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KnockKnock_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::srv::KnockKnock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::srv::KnockKnock_Request & msg)
{
  return ros2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::srv::KnockKnock_Request>()
{
  return "ros2_msgs::srv::KnockKnock_Request";
}

template<>
inline const char * name<ros2_msgs::srv::KnockKnock_Request>()
{
  return "ros2_msgs/srv/KnockKnock_Request";
}

template<>
struct has_fixed_size<ros2_msgs::srv::KnockKnock_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_msgs::srv::KnockKnock_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_msgs::srv::KnockKnock_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const KnockKnock_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KnockKnock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KnockKnock_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::srv::KnockKnock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::srv::KnockKnock_Response & msg)
{
  return ros2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::srv::KnockKnock_Response>()
{
  return "ros2_msgs::srv::KnockKnock_Response";
}

template<>
inline const char * name<ros2_msgs::srv::KnockKnock_Response>()
{
  return "ros2_msgs/srv/KnockKnock_Response";
}

template<>
struct has_fixed_size<ros2_msgs::srv::KnockKnock_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_msgs::srv::KnockKnock_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_msgs::srv::KnockKnock_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_msgs::srv::KnockKnock>()
{
  return "ros2_msgs::srv::KnockKnock";
}

template<>
inline const char * name<ros2_msgs::srv::KnockKnock>()
{
  return "ros2_msgs/srv/KnockKnock";
}

template<>
struct has_fixed_size<ros2_msgs::srv::KnockKnock>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_msgs::srv::KnockKnock_Request>::value &&
    has_fixed_size<ros2_msgs::srv::KnockKnock_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_msgs::srv::KnockKnock>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_msgs::srv::KnockKnock_Request>::value &&
    has_bounded_size<ros2_msgs::srv::KnockKnock_Response>::value
  >
{
};

template<>
struct is_service<ros2_msgs::srv::KnockKnock>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_msgs::srv::KnockKnock_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_msgs::srv::KnockKnock_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS2_MSGS__SRV__DETAIL__KNOCK_KNOCK__TRAITS_HPP_
