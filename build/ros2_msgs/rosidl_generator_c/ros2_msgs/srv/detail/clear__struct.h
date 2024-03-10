// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_msgs:srv/Clear.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__SRV__DETAIL__CLEAR__STRUCT_H_
#define ROS2_MSGS__SRV__DETAIL__CLEAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Clear in the package ros2_msgs.
typedef struct ros2_msgs__srv__Clear_Request
{
  bool reset;
} ros2_msgs__srv__Clear_Request;

// Struct for a sequence of ros2_msgs__srv__Clear_Request.
typedef struct ros2_msgs__srv__Clear_Request__Sequence
{
  ros2_msgs__srv__Clear_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__srv__Clear_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Clear in the package ros2_msgs.
typedef struct ros2_msgs__srv__Clear_Response
{
  bool done;
} ros2_msgs__srv__Clear_Response;

// Struct for a sequence of ros2_msgs__srv__Clear_Response.
typedef struct ros2_msgs__srv__Clear_Response__Sequence
{
  ros2_msgs__srv__Clear_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__srv__Clear_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_MSGS__SRV__DETAIL__CLEAR__STRUCT_H_
