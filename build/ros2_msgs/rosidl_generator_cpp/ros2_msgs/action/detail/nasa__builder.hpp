// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_msgs:action/Nasa.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__ACTION__DETAIL__NASA__BUILDER_HPP_
#define ROS2_MSGS__ACTION__DETAIL__NASA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_msgs/action/detail/nasa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Nasa_Goal_number
{
public:
  Init_Nasa_Goal_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::action::Nasa_Goal number(::ros2_msgs::action::Nasa_Goal::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Nasa_Goal>()
{
  return ros2_msgs::action::builder::Init_Nasa_Goal_number();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Nasa_Result_result
{
public:
  Init_Nasa_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::action::Nasa_Result result(::ros2_msgs::action::Nasa_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Nasa_Result>()
{
  return ros2_msgs::action::builder::Init_Nasa_Result_result();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Nasa_Feedback_progress
{
public:
  Init_Nasa_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::action::Nasa_Feedback progress(::ros2_msgs::action::Nasa_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Nasa_Feedback>()
{
  return ros2_msgs::action::builder::Init_Nasa_Feedback_progress();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Nasa_SendGoal_Request_goal
{
public:
  explicit Init_Nasa_SendGoal_Request_goal(::ros2_msgs::action::Nasa_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2_msgs::action::Nasa_SendGoal_Request goal(::ros2_msgs::action::Nasa_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_SendGoal_Request msg_;
};

class Init_Nasa_SendGoal_Request_goal_id
{
public:
  Init_Nasa_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nasa_SendGoal_Request_goal goal_id(::ros2_msgs::action::Nasa_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Nasa_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Nasa_SendGoal_Request>()
{
  return ros2_msgs::action::builder::Init_Nasa_SendGoal_Request_goal_id();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Nasa_SendGoal_Response_stamp
{
public:
  explicit Init_Nasa_SendGoal_Response_stamp(::ros2_msgs::action::Nasa_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2_msgs::action::Nasa_SendGoal_Response stamp(::ros2_msgs::action::Nasa_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_SendGoal_Response msg_;
};

class Init_Nasa_SendGoal_Response_accepted
{
public:
  Init_Nasa_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nasa_SendGoal_Response_stamp accepted(::ros2_msgs::action::Nasa_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Nasa_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Nasa_SendGoal_Response>()
{
  return ros2_msgs::action::builder::Init_Nasa_SendGoal_Response_accepted();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Nasa_GetResult_Request_goal_id
{
public:
  Init_Nasa_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::action::Nasa_GetResult_Request goal_id(::ros2_msgs::action::Nasa_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Nasa_GetResult_Request>()
{
  return ros2_msgs::action::builder::Init_Nasa_GetResult_Request_goal_id();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Nasa_GetResult_Response_result
{
public:
  explicit Init_Nasa_GetResult_Response_result(::ros2_msgs::action::Nasa_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2_msgs::action::Nasa_GetResult_Response result(::ros2_msgs::action::Nasa_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_GetResult_Response msg_;
};

class Init_Nasa_GetResult_Response_status
{
public:
  Init_Nasa_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nasa_GetResult_Response_result status(::ros2_msgs::action::Nasa_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Nasa_GetResult_Response_result(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Nasa_GetResult_Response>()
{
  return ros2_msgs::action::builder::Init_Nasa_GetResult_Response_status();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Nasa_FeedbackMessage_feedback
{
public:
  explicit Init_Nasa_FeedbackMessage_feedback(::ros2_msgs::action::Nasa_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2_msgs::action::Nasa_FeedbackMessage feedback(::ros2_msgs::action::Nasa_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_FeedbackMessage msg_;
};

class Init_Nasa_FeedbackMessage_goal_id
{
public:
  Init_Nasa_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nasa_FeedbackMessage_feedback goal_id(::ros2_msgs::action::Nasa_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Nasa_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2_msgs::action::Nasa_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Nasa_FeedbackMessage>()
{
  return ros2_msgs::action::builder::Init_Nasa_FeedbackMessage_goal_id();
}

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__ACTION__DETAIL__NASA__BUILDER_HPP_
