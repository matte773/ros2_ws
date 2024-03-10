// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_msgs:action/Patrol.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__ACTION__DETAIL__PATROL__BUILDER_HPP_
#define ROS2_MSGS__ACTION__DETAIL__PATROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_msgs/action/detail/patrol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_Goal_goal
{
public:
  Init_Patrol_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::action::Patrol_Goal goal(::ros2_msgs::action::Patrol_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Patrol_Goal>()
{
  return ros2_msgs::action::builder::Init_Patrol_Goal_goal();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_Result_message
{
public:
  explicit Init_Patrol_Result_message(::ros2_msgs::action::Patrol_Result & msg)
  : msg_(msg)
  {}
  ::ros2_msgs::action::Patrol_Result message(::ros2_msgs::action::Patrol_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_Result msg_;
};

class Init_Patrol_Result_success
{
public:
  Init_Patrol_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_Result_message success(::ros2_msgs::action::Patrol_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Patrol_Result_message(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Patrol_Result>()
{
  return ros2_msgs::action::builder::Init_Patrol_Result_success();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Patrol_Feedback>()
{
  return ::ros2_msgs::action::Patrol_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_SendGoal_Request_goal
{
public:
  explicit Init_Patrol_SendGoal_Request_goal(::ros2_msgs::action::Patrol_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2_msgs::action::Patrol_SendGoal_Request goal(::ros2_msgs::action::Patrol_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_SendGoal_Request msg_;
};

class Init_Patrol_SendGoal_Request_goal_id
{
public:
  Init_Patrol_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_SendGoal_Request_goal goal_id(::ros2_msgs::action::Patrol_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Patrol_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Patrol_SendGoal_Request>()
{
  return ros2_msgs::action::builder::Init_Patrol_SendGoal_Request_goal_id();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_SendGoal_Response_stamp
{
public:
  explicit Init_Patrol_SendGoal_Response_stamp(::ros2_msgs::action::Patrol_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2_msgs::action::Patrol_SendGoal_Response stamp(::ros2_msgs::action::Patrol_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_SendGoal_Response msg_;
};

class Init_Patrol_SendGoal_Response_accepted
{
public:
  Init_Patrol_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_SendGoal_Response_stamp accepted(::ros2_msgs::action::Patrol_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Patrol_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Patrol_SendGoal_Response>()
{
  return ros2_msgs::action::builder::Init_Patrol_SendGoal_Response_accepted();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_GetResult_Request_goal_id
{
public:
  Init_Patrol_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_msgs::action::Patrol_GetResult_Request goal_id(::ros2_msgs::action::Patrol_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Patrol_GetResult_Request>()
{
  return ros2_msgs::action::builder::Init_Patrol_GetResult_Request_goal_id();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_GetResult_Response_result
{
public:
  explicit Init_Patrol_GetResult_Response_result(::ros2_msgs::action::Patrol_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2_msgs::action::Patrol_GetResult_Response result(::ros2_msgs::action::Patrol_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_GetResult_Response msg_;
};

class Init_Patrol_GetResult_Response_status
{
public:
  Init_Patrol_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_GetResult_Response_result status(::ros2_msgs::action::Patrol_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Patrol_GetResult_Response_result(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Patrol_GetResult_Response>()
{
  return ros2_msgs::action::builder::Init_Patrol_GetResult_Response_status();
}

}  // namespace ros2_msgs


namespace ros2_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_FeedbackMessage_feedback
{
public:
  explicit Init_Patrol_FeedbackMessage_feedback(::ros2_msgs::action::Patrol_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2_msgs::action::Patrol_FeedbackMessage feedback(::ros2_msgs::action::Patrol_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_FeedbackMessage msg_;
};

class Init_Patrol_FeedbackMessage_goal_id
{
public:
  Init_Patrol_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_FeedbackMessage_feedback goal_id(::ros2_msgs::action::Patrol_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Patrol_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2_msgs::action::Patrol_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msgs::action::Patrol_FeedbackMessage>()
{
  return ros2_msgs::action::builder::Init_Patrol_FeedbackMessage_goal_id();
}

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__ACTION__DETAIL__PATROL__BUILDER_HPP_
