// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_msgs:srv/KnockKnock.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__SRV__DETAIL__KNOCK_KNOCK__STRUCT_H_
#define ROS2_MSGS__SRV__DETAIL__KNOCK_KNOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/KnockKnock in the package ros2_msgs.
typedef struct ros2_msgs__srv__KnockKnock_Request
{
  rosidl_runtime_c__String request;
} ros2_msgs__srv__KnockKnock_Request;

// Struct for a sequence of ros2_msgs__srv__KnockKnock_Request.
typedef struct ros2_msgs__srv__KnockKnock_Request__Sequence
{
  ros2_msgs__srv__KnockKnock_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__srv__KnockKnock_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/KnockKnock in the package ros2_msgs.
typedef struct ros2_msgs__srv__KnockKnock_Response
{
  rosidl_runtime_c__String response;
} ros2_msgs__srv__KnockKnock_Response;

// Struct for a sequence of ros2_msgs__srv__KnockKnock_Response.
typedef struct ros2_msgs__srv__KnockKnock_Response__Sequence
{
  ros2_msgs__srv__KnockKnock_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__srv__KnockKnock_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_MSGS__SRV__DETAIL__KNOCK_KNOCK__STRUCT_H_
