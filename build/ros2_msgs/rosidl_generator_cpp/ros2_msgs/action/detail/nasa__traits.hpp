// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_msgs:action/Nasa.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__ACTION__DETAIL__NASA__TRAITS_HPP_
#define ROS2_MSGS__ACTION__DETAIL__NASA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_msgs/action/detail/nasa__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Nasa_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nasa_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nasa_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::action::Nasa_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::action::Nasa_Goal & msg)
{
  return ros2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::action::Nasa_Goal>()
{
  return "ros2_msgs::action::Nasa_Goal";
}

template<>
inline const char * name<ros2_msgs::action::Nasa_Goal>()
{
  return "ros2_msgs/action/Nasa_Goal";
}

template<>
struct has_fixed_size<ros2_msgs::action::Nasa_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_msgs::action::Nasa_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_msgs::action::Nasa_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Nasa_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nasa_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nasa_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::action::Nasa_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::action::Nasa_Result & msg)
{
  return ros2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::action::Nasa_Result>()
{
  return "ros2_msgs::action::Nasa_Result";
}

template<>
inline const char * name<ros2_msgs::action::Nasa_Result>()
{
  return "ros2_msgs/action/Nasa_Result";
}

template<>
struct has_fixed_size<ros2_msgs::action::Nasa_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_msgs::action::Nasa_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_msgs::action::Nasa_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Nasa_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nasa_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nasa_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::action::Nasa_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::action::Nasa_Feedback & msg)
{
  return ros2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::action::Nasa_Feedback>()
{
  return "ros2_msgs::action::Nasa_Feedback";
}

template<>
inline const char * name<ros2_msgs::action::Nasa_Feedback>()
{
  return "ros2_msgs/action/Nasa_Feedback";
}

template<>
struct has_fixed_size<ros2_msgs::action::Nasa_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_msgs::action::Nasa_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_msgs::action::Nasa_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ros2_msgs/action/detail/nasa__traits.hpp"

namespace ros2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Nasa_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nasa_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nasa_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::action::Nasa_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::action::Nasa_SendGoal_Request & msg)
{
  return ros2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::action::Nasa_SendGoal_Request>()
{
  return "ros2_msgs::action::Nasa_SendGoal_Request";
}

template<>
inline const char * name<ros2_msgs::action::Nasa_SendGoal_Request>()
{
  return "ros2_msgs/action/Nasa_SendGoal_Request";
}

template<>
struct has_fixed_size<ros2_msgs::action::Nasa_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ros2_msgs::action::Nasa_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_msgs::action::Nasa_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ros2_msgs::action::Nasa_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_msgs::action::Nasa_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ros2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Nasa_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nasa_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nasa_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::action::Nasa_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::action::Nasa_SendGoal_Response & msg)
{
  return ros2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::action::Nasa_SendGoal_Response>()
{
  return "ros2_msgs::action::Nasa_SendGoal_Response";
}

template<>
inline const char * name<ros2_msgs::action::Nasa_SendGoal_Response>()
{
  return "ros2_msgs/action/Nasa_SendGoal_Response";
}

template<>
struct has_fixed_size<ros2_msgs::action::Nasa_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ros2_msgs::action::Nasa_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ros2_msgs::action::Nasa_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_msgs::action::Nasa_SendGoal>()
{
  return "ros2_msgs::action::Nasa_SendGoal";
}

template<>
inline const char * name<ros2_msgs::action::Nasa_SendGoal>()
{
  return "ros2_msgs/action/Nasa_SendGoal";
}

template<>
struct has_fixed_size<ros2_msgs::action::Nasa_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_msgs::action::Nasa_SendGoal_Request>::value &&
    has_fixed_size<ros2_msgs::action::Nasa_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_msgs::action::Nasa_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_msgs::action::Nasa_SendGoal_Request>::value &&
    has_bounded_size<ros2_msgs::action::Nasa_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ros2_msgs::action::Nasa_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_msgs::action::Nasa_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_msgs::action::Nasa_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ros2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Nasa_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nasa_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nasa_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::action::Nasa_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::action::Nasa_GetResult_Request & msg)
{
  return ros2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::action::Nasa_GetResult_Request>()
{
  return "ros2_msgs::action::Nasa_GetResult_Request";
}

template<>
inline const char * name<ros2_msgs::action::Nasa_GetResult_Request>()
{
  return "ros2_msgs/action/Nasa_GetResult_Request";
}

template<>
struct has_fixed_size<ros2_msgs::action::Nasa_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_msgs::action::Nasa_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_msgs::action::Nasa_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_msgs/action/detail/nasa__traits.hpp"

namespace ros2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Nasa_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nasa_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nasa_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::action::Nasa_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::action::Nasa_GetResult_Response & msg)
{
  return ros2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::action::Nasa_GetResult_Response>()
{
  return "ros2_msgs::action::Nasa_GetResult_Response";
}

template<>
inline const char * name<ros2_msgs::action::Nasa_GetResult_Response>()
{
  return "ros2_msgs/action/Nasa_GetResult_Response";
}

template<>
struct has_fixed_size<ros2_msgs::action::Nasa_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ros2_msgs::action::Nasa_Result>::value> {};

template<>
struct has_bounded_size<ros2_msgs::action::Nasa_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ros2_msgs::action::Nasa_Result>::value> {};

template<>
struct is_message<ros2_msgs::action::Nasa_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_msgs::action::Nasa_GetResult>()
{
  return "ros2_msgs::action::Nasa_GetResult";
}

template<>
inline const char * name<ros2_msgs::action::Nasa_GetResult>()
{
  return "ros2_msgs/action/Nasa_GetResult";
}

template<>
struct has_fixed_size<ros2_msgs::action::Nasa_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_msgs::action::Nasa_GetResult_Request>::value &&
    has_fixed_size<ros2_msgs::action::Nasa_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_msgs::action::Nasa_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_msgs::action::Nasa_GetResult_Request>::value &&
    has_bounded_size<ros2_msgs::action::Nasa_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ros2_msgs::action::Nasa_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_msgs::action::Nasa_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_msgs::action::Nasa_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ros2_msgs/action/detail/nasa__traits.hpp"

namespace ros2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Nasa_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nasa_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nasa_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msgs::action::Nasa_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msgs::action::Nasa_FeedbackMessage & msg)
{
  return ros2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msgs::action::Nasa_FeedbackMessage>()
{
  return "ros2_msgs::action::Nasa_FeedbackMessage";
}

template<>
inline const char * name<ros2_msgs::action::Nasa_FeedbackMessage>()
{
  return "ros2_msgs/action/Nasa_FeedbackMessage";
}

template<>
struct has_fixed_size<ros2_msgs::action::Nasa_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ros2_msgs::action::Nasa_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_msgs::action::Nasa_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ros2_msgs::action::Nasa_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_msgs::action::Nasa_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ros2_msgs::action::Nasa>
  : std::true_type
{
};

template<>
struct is_action_goal<ros2_msgs::action::Nasa_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ros2_msgs::action::Nasa_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ros2_msgs::action::Nasa_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROS2_MSGS__ACTION__DETAIL__NASA__TRAITS_HPP_