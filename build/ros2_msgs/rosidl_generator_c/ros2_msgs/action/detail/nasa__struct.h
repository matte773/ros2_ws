// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_msgs:action/Nasa.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__ACTION__DETAIL__NASA__STRUCT_H_
#define ROS2_MSGS__ACTION__DETAIL__NASA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Nasa in the package ros2_msgs.
typedef struct ros2_msgs__action__Nasa_Goal
{
  int64_t number;
} ros2_msgs__action__Nasa_Goal;

// Struct for a sequence of ros2_msgs__action__Nasa_Goal.
typedef struct ros2_msgs__action__Nasa_Goal__Sequence
{
  ros2_msgs__action__Nasa_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__Nasa_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Nasa in the package ros2_msgs.
typedef struct ros2_msgs__action__Nasa_Result
{
  rosidl_runtime_c__String result;
} ros2_msgs__action__Nasa_Result;

// Struct for a sequence of ros2_msgs__action__Nasa_Result.
typedef struct ros2_msgs__action__Nasa_Result__Sequence
{
  ros2_msgs__action__Nasa_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__Nasa_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Nasa in the package ros2_msgs.
typedef struct ros2_msgs__action__Nasa_Feedback
{
  int64_t progress;
} ros2_msgs__action__Nasa_Feedback;

// Struct for a sequence of ros2_msgs__action__Nasa_Feedback.
typedef struct ros2_msgs__action__Nasa_Feedback__Sequence
{
  ros2_msgs__action__Nasa_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__Nasa_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros2_msgs/action/detail/nasa__struct.h"

/// Struct defined in action/Nasa in the package ros2_msgs.
typedef struct ros2_msgs__action__Nasa_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_msgs__action__Nasa_Goal goal;
} ros2_msgs__action__Nasa_SendGoal_Request;

// Struct for a sequence of ros2_msgs__action__Nasa_SendGoal_Request.
typedef struct ros2_msgs__action__Nasa_SendGoal_Request__Sequence
{
  ros2_msgs__action__Nasa_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__Nasa_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Nasa in the package ros2_msgs.
typedef struct ros2_msgs__action__Nasa_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros2_msgs__action__Nasa_SendGoal_Response;

// Struct for a sequence of ros2_msgs__action__Nasa_SendGoal_Response.
typedef struct ros2_msgs__action__Nasa_SendGoal_Response__Sequence
{
  ros2_msgs__action__Nasa_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__Nasa_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Nasa in the package ros2_msgs.
typedef struct ros2_msgs__action__Nasa_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros2_msgs__action__Nasa_GetResult_Request;

// Struct for a sequence of ros2_msgs__action__Nasa_GetResult_Request.
typedef struct ros2_msgs__action__Nasa_GetResult_Request__Sequence
{
  ros2_msgs__action__Nasa_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__Nasa_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_msgs/action/detail/nasa__struct.h"

/// Struct defined in action/Nasa in the package ros2_msgs.
typedef struct ros2_msgs__action__Nasa_GetResult_Response
{
  int8_t status;
  ros2_msgs__action__Nasa_Result result;
} ros2_msgs__action__Nasa_GetResult_Response;

// Struct for a sequence of ros2_msgs__action__Nasa_GetResult_Response.
typedef struct ros2_msgs__action__Nasa_GetResult_Response__Sequence
{
  ros2_msgs__action__Nasa_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__Nasa_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros2_msgs/action/detail/nasa__struct.h"

/// Struct defined in action/Nasa in the package ros2_msgs.
typedef struct ros2_msgs__action__Nasa_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_msgs__action__Nasa_Feedback feedback;
} ros2_msgs__action__Nasa_FeedbackMessage;

// Struct for a sequence of ros2_msgs__action__Nasa_FeedbackMessage.
typedef struct ros2_msgs__action__Nasa_FeedbackMessage__Sequence
{
  ros2_msgs__action__Nasa_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__action__Nasa_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_MSGS__ACTION__DETAIL__NASA__STRUCT_H_
