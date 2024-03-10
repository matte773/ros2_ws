// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_msgs:action/GoTo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__ACTION__DETAIL__GO_TO__STRUCT_H_
#define ROS2_MSGS__ACTION__DETAIL__GO_TO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'place'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/GoTo in the package ros2_msgs.
typedef struct ros2_msgs__action__GoTo_Goal
{
  rosidl_runtime_c__String place;
} ros2_msgs__action__GoTo_Goal;

// Struct for a sequence of ros2_msgs__action__GoTo_Goal.
typedef struct ros2_msgs__action__GoTo_Goal__Sequence
{
  ros2_msgs__action__GoTo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__GoTo_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/GoTo in the package ros2_msgs.
typedef struct ros2_msgs__action__GoTo_Result
{
  bool success;
  rosidl_runtime_c__String message;
} ros2_msgs__action__GoTo_Result;

// Struct for a sequence of ros2_msgs__action__GoTo_Result.
typedef struct ros2_msgs__action__GoTo_Result__Sequence
{
  ros2_msgs__action__GoTo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__GoTo_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GoTo in the package ros2_msgs.
typedef struct ros2_msgs__action__GoTo_Feedback
{
  float percent_complete;
} ros2_msgs__action__GoTo_Feedback;

// Struct for a sequence of ros2_msgs__action__GoTo_Feedback.
typedef struct ros2_msgs__action__GoTo_Feedback__Sequence
{
  ros2_msgs__action__GoTo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__GoTo_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros2_msgs/action/detail/go_to__struct.h"

/// Struct defined in action/GoTo in the package ros2_msgs.
typedef struct ros2_msgs__action__GoTo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_msgs__action__GoTo_Goal goal;
} ros2_msgs__action__GoTo_SendGoal_Request;

// Struct for a sequence of ros2_msgs__action__GoTo_SendGoal_Request.
typedef struct ros2_msgs__action__GoTo_SendGoal_Request__Sequence
{
  ros2_msgs__action__GoTo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__GoTo_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GoTo in the package ros2_msgs.
typedef struct ros2_msgs__action__GoTo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros2_msgs__action__GoTo_SendGoal_Response;

// Struct for a sequence of ros2_msgs__action__GoTo_SendGoal_Response.
typedef struct ros2_msgs__action__GoTo_SendGoal_Response__Sequence
{
  ros2_msgs__action__GoTo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__GoTo_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GoTo in the package ros2_msgs.
typedef struct ros2_msgs__action__GoTo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros2_msgs__action__GoTo_GetResult_Request;

// Struct for a sequence of ros2_msgs__action__GoTo_GetResult_Request.
typedef struct ros2_msgs__action__GoTo_GetResult_Request__Sequence
{
  ros2_msgs__action__GoTo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__GoTo_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_msgs/action/detail/go_to__struct.h"

/// Struct defined in action/GoTo in the package ros2_msgs.
typedef struct ros2_msgs__action__GoTo_GetResult_Response
{
  int8_t status;
  ros2_msgs__action__GoTo_Result result;
} ros2_msgs__action__GoTo_GetResult_Response;

// Struct for a sequence of ros2_msgs__action__GoTo_GetResult_Response.
typedef struct ros2_msgs__action__GoTo_GetResult_Response__Sequence
{
  ros2_msgs__action__GoTo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__GoTo_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros2_msgs/action/detail/go_to__struct.h"

/// Struct defined in action/GoTo in the package ros2_msgs.
typedef struct ros2_msgs__action__GoTo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_msgs__action__GoTo_Feedback feedback;
} ros2_msgs__action__GoTo_FeedbackMessage;

// Struct for a sequence of ros2_msgs__action__GoTo_FeedbackMessage.
typedef struct ros2_msgs__action__GoTo_FeedbackMessage__Sequence
{
  ros2_msgs__action__GoTo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__GoTo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_MSGS__ACTION__DETAIL__GO_TO__STRUCT_H_
