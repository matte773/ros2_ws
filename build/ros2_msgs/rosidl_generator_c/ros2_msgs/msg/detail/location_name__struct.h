// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_msgs:msg/LocationName.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__STRUCT_H_
#define ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'location_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LocationName in the package ros2_msgs.
typedef struct ros2_msgs__msg__LocationName
{
  rosidl_runtime_c__String location_name;
} ros2_msgs__msg__LocationName;

// Struct for a sequence of ros2_msgs__msg__LocationName.
typedef struct ros2_msgs__msg__LocationName__Sequence
{
  ros2_msgs__msg__LocationName * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msgs__msg__LocationName__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__STRUCT_H_
