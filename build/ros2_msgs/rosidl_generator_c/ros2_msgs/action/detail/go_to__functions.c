// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_msgs:action/GoTo.idl
// generated code does not contain a copyright notice
#include "ros2_msgs/action/detail/go_to__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `place`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_msgs__action__GoTo_Goal__init(ros2_msgs__action__GoTo_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // place
  if (!rosidl_runtime_c__String__init(&msg->place)) {
    ros2_msgs__action__GoTo_Goal__fini(msg);
    return false;
  }
  return true;
}

void
ros2_msgs__action__GoTo_Goal__fini(ros2_msgs__action__GoTo_Goal * msg)
{
  if (!msg) {
    return;
  }
  // place
  rosidl_runtime_c__String__fini(&msg->place);
}

bool
ros2_msgs__action__GoTo_Goal__are_equal(const ros2_msgs__action__GoTo_Goal * lhs, const ros2_msgs__action__GoTo_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // place
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->place), &(rhs->place)))
  {
    return false;
  }
  return true;
}

bool
ros2_msgs__action__GoTo_Goal__copy(
  const ros2_msgs__action__GoTo_Goal * input,
  ros2_msgs__action__GoTo_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // place
  if (!rosidl_runtime_c__String__copy(
      &(input->place), &(output->place)))
  {
    return false;
  }
  return true;
}

ros2_msgs__action__GoTo_Goal *
ros2_msgs__action__GoTo_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_Goal * msg = (ros2_msgs__action__GoTo_Goal *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_msgs__action__GoTo_Goal));
  bool success = ros2_msgs__action__GoTo_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_msgs__action__GoTo_Goal__destroy(ros2_msgs__action__GoTo_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_msgs__action__GoTo_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_msgs__action__GoTo_Goal__Sequence__init(ros2_msgs__action__GoTo_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_Goal * data = NULL;

  if (size) {
    data = (ros2_msgs__action__GoTo_Goal *)allocator.zero_allocate(size, sizeof(ros2_msgs__action__GoTo_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_msgs__action__GoTo_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_msgs__action__GoTo_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_msgs__action__GoTo_Goal__Sequence__fini(ros2_msgs__action__GoTo_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_msgs__action__GoTo_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_msgs__action__GoTo_Goal__Sequence *
ros2_msgs__action__GoTo_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_Goal__Sequence * array = (ros2_msgs__action__GoTo_Goal__Sequence *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_msgs__action__GoTo_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_msgs__action__GoTo_Goal__Sequence__destroy(ros2_msgs__action__GoTo_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_msgs__action__GoTo_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_msgs__action__GoTo_Goal__Sequence__are_equal(const ros2_msgs__action__GoTo_Goal__Sequence * lhs, const ros2_msgs__action__GoTo_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_msgs__action__GoTo_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_msgs__action__GoTo_Goal__Sequence__copy(
  const ros2_msgs__action__GoTo_Goal__Sequence * input,
  ros2_msgs__action__GoTo_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_msgs__action__GoTo_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_msgs__action__GoTo_Goal * data =
      (ros2_msgs__action__GoTo_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_msgs__action__GoTo_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_msgs__action__GoTo_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_msgs__action__GoTo_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ros2_msgs__action__GoTo_Result__init(ros2_msgs__action__GoTo_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ros2_msgs__action__GoTo_Result__fini(msg);
    return false;
  }
  return true;
}

void
ros2_msgs__action__GoTo_Result__fini(ros2_msgs__action__GoTo_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
ros2_msgs__action__GoTo_Result__are_equal(const ros2_msgs__action__GoTo_Result * lhs, const ros2_msgs__action__GoTo_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
ros2_msgs__action__GoTo_Result__copy(
  const ros2_msgs__action__GoTo_Result * input,
  ros2_msgs__action__GoTo_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

ros2_msgs__action__GoTo_Result *
ros2_msgs__action__GoTo_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_Result * msg = (ros2_msgs__action__GoTo_Result *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_msgs__action__GoTo_Result));
  bool success = ros2_msgs__action__GoTo_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_msgs__action__GoTo_Result__destroy(ros2_msgs__action__GoTo_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_msgs__action__GoTo_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_msgs__action__GoTo_Result__Sequence__init(ros2_msgs__action__GoTo_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_Result * data = NULL;

  if (size) {
    data = (ros2_msgs__action__GoTo_Result *)allocator.zero_allocate(size, sizeof(ros2_msgs__action__GoTo_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_msgs__action__GoTo_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_msgs__action__GoTo_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_msgs__action__GoTo_Result__Sequence__fini(ros2_msgs__action__GoTo_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_msgs__action__GoTo_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_msgs__action__GoTo_Result__Sequence *
ros2_msgs__action__GoTo_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_Result__Sequence * array = (ros2_msgs__action__GoTo_Result__Sequence *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_msgs__action__GoTo_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_msgs__action__GoTo_Result__Sequence__destroy(ros2_msgs__action__GoTo_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_msgs__action__GoTo_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_msgs__action__GoTo_Result__Sequence__are_equal(const ros2_msgs__action__GoTo_Result__Sequence * lhs, const ros2_msgs__action__GoTo_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_msgs__action__GoTo_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_msgs__action__GoTo_Result__Sequence__copy(
  const ros2_msgs__action__GoTo_Result__Sequence * input,
  ros2_msgs__action__GoTo_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_msgs__action__GoTo_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_msgs__action__GoTo_Result * data =
      (ros2_msgs__action__GoTo_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_msgs__action__GoTo_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_msgs__action__GoTo_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_msgs__action__GoTo_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ros2_msgs__action__GoTo_Feedback__init(ros2_msgs__action__GoTo_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // percent_complete
  return true;
}

void
ros2_msgs__action__GoTo_Feedback__fini(ros2_msgs__action__GoTo_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // percent_complete
}

bool
ros2_msgs__action__GoTo_Feedback__are_equal(const ros2_msgs__action__GoTo_Feedback * lhs, const ros2_msgs__action__GoTo_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // percent_complete
  if (lhs->percent_complete != rhs->percent_complete) {
    return false;
  }
  return true;
}

bool
ros2_msgs__action__GoTo_Feedback__copy(
  const ros2_msgs__action__GoTo_Feedback * input,
  ros2_msgs__action__GoTo_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // percent_complete
  output->percent_complete = input->percent_complete;
  return true;
}

ros2_msgs__action__GoTo_Feedback *
ros2_msgs__action__GoTo_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_Feedback * msg = (ros2_msgs__action__GoTo_Feedback *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_msgs__action__GoTo_Feedback));
  bool success = ros2_msgs__action__GoTo_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_msgs__action__GoTo_Feedback__destroy(ros2_msgs__action__GoTo_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_msgs__action__GoTo_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_msgs__action__GoTo_Feedback__Sequence__init(ros2_msgs__action__GoTo_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_Feedback * data = NULL;

  if (size) {
    data = (ros2_msgs__action__GoTo_Feedback *)allocator.zero_allocate(size, sizeof(ros2_msgs__action__GoTo_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_msgs__action__GoTo_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_msgs__action__GoTo_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_msgs__action__GoTo_Feedback__Sequence__fini(ros2_msgs__action__GoTo_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_msgs__action__GoTo_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_msgs__action__GoTo_Feedback__Sequence *
ros2_msgs__action__GoTo_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_Feedback__Sequence * array = (ros2_msgs__action__GoTo_Feedback__Sequence *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_msgs__action__GoTo_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_msgs__action__GoTo_Feedback__Sequence__destroy(ros2_msgs__action__GoTo_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_msgs__action__GoTo_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_msgs__action__GoTo_Feedback__Sequence__are_equal(const ros2_msgs__action__GoTo_Feedback__Sequence * lhs, const ros2_msgs__action__GoTo_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_msgs__action__GoTo_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_msgs__action__GoTo_Feedback__Sequence__copy(
  const ros2_msgs__action__GoTo_Feedback__Sequence * input,
  ros2_msgs__action__GoTo_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_msgs__action__GoTo_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_msgs__action__GoTo_Feedback * data =
      (ros2_msgs__action__GoTo_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_msgs__action__GoTo_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_msgs__action__GoTo_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_msgs__action__GoTo_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ros2_msgs/action/detail/go_to__functions.h"

bool
ros2_msgs__action__GoTo_SendGoal_Request__init(ros2_msgs__action__GoTo_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2_msgs__action__GoTo_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ros2_msgs__action__GoTo_Goal__init(&msg->goal)) {
    ros2_msgs__action__GoTo_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros2_msgs__action__GoTo_SendGoal_Request__fini(ros2_msgs__action__GoTo_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ros2_msgs__action__GoTo_Goal__fini(&msg->goal);
}

bool
ros2_msgs__action__GoTo_SendGoal_Request__are_equal(const ros2_msgs__action__GoTo_SendGoal_Request * lhs, const ros2_msgs__action__GoTo_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ros2_msgs__action__GoTo_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ros2_msgs__action__GoTo_SendGoal_Request__copy(
  const ros2_msgs__action__GoTo_SendGoal_Request * input,
  ros2_msgs__action__GoTo_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ros2_msgs__action__GoTo_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ros2_msgs__action__GoTo_SendGoal_Request *
ros2_msgs__action__GoTo_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_SendGoal_Request * msg = (ros2_msgs__action__GoTo_SendGoal_Request *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_msgs__action__GoTo_SendGoal_Request));
  bool success = ros2_msgs__action__GoTo_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_msgs__action__GoTo_SendGoal_Request__destroy(ros2_msgs__action__GoTo_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_msgs__action__GoTo_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_msgs__action__GoTo_SendGoal_Request__Sequence__init(ros2_msgs__action__GoTo_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_SendGoal_Request * data = NULL;

  if (size) {
    data = (ros2_msgs__action__GoTo_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ros2_msgs__action__GoTo_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_msgs__action__GoTo_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_msgs__action__GoTo_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_msgs__action__GoTo_SendGoal_Request__Sequence__fini(ros2_msgs__action__GoTo_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_msgs__action__GoTo_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_msgs__action__GoTo_SendGoal_Request__Sequence *
ros2_msgs__action__GoTo_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_SendGoal_Request__Sequence * array = (ros2_msgs__action__GoTo_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_msgs__action__GoTo_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_msgs__action__GoTo_SendGoal_Request__Sequence__destroy(ros2_msgs__action__GoTo_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_msgs__action__GoTo_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_msgs__action__GoTo_SendGoal_Request__Sequence__are_equal(const ros2_msgs__action__GoTo_SendGoal_Request__Sequence * lhs, const ros2_msgs__action__GoTo_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_msgs__action__GoTo_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_msgs__action__GoTo_SendGoal_Request__Sequence__copy(
  const ros2_msgs__action__GoTo_SendGoal_Request__Sequence * input,
  ros2_msgs__action__GoTo_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_msgs__action__GoTo_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_msgs__action__GoTo_SendGoal_Request * data =
      (ros2_msgs__action__GoTo_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_msgs__action__GoTo_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_msgs__action__GoTo_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_msgs__action__GoTo_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ros2_msgs__action__GoTo_SendGoal_Response__init(ros2_msgs__action__GoTo_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ros2_msgs__action__GoTo_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros2_msgs__action__GoTo_SendGoal_Response__fini(ros2_msgs__action__GoTo_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ros2_msgs__action__GoTo_SendGoal_Response__are_equal(const ros2_msgs__action__GoTo_SendGoal_Response * lhs, const ros2_msgs__action__GoTo_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ros2_msgs__action__GoTo_SendGoal_Response__copy(
  const ros2_msgs__action__GoTo_SendGoal_Response * input,
  ros2_msgs__action__GoTo_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ros2_msgs__action__GoTo_SendGoal_Response *
ros2_msgs__action__GoTo_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_SendGoal_Response * msg = (ros2_msgs__action__GoTo_SendGoal_Response *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_msgs__action__GoTo_SendGoal_Response));
  bool success = ros2_msgs__action__GoTo_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_msgs__action__GoTo_SendGoal_Response__destroy(ros2_msgs__action__GoTo_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_msgs__action__GoTo_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_msgs__action__GoTo_SendGoal_Response__Sequence__init(ros2_msgs__action__GoTo_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_SendGoal_Response * data = NULL;

  if (size) {
    data = (ros2_msgs__action__GoTo_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ros2_msgs__action__GoTo_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_msgs__action__GoTo_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_msgs__action__GoTo_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_msgs__action__GoTo_SendGoal_Response__Sequence__fini(ros2_msgs__action__GoTo_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_msgs__action__GoTo_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_msgs__action__GoTo_SendGoal_Response__Sequence *
ros2_msgs__action__GoTo_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_SendGoal_Response__Sequence * array = (ros2_msgs__action__GoTo_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_msgs__action__GoTo_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_msgs__action__GoTo_SendGoal_Response__Sequence__destroy(ros2_msgs__action__GoTo_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_msgs__action__GoTo_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_msgs__action__GoTo_SendGoal_Response__Sequence__are_equal(const ros2_msgs__action__GoTo_SendGoal_Response__Sequence * lhs, const ros2_msgs__action__GoTo_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_msgs__action__GoTo_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_msgs__action__GoTo_SendGoal_Response__Sequence__copy(
  const ros2_msgs__action__GoTo_SendGoal_Response__Sequence * input,
  ros2_msgs__action__GoTo_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_msgs__action__GoTo_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_msgs__action__GoTo_SendGoal_Response * data =
      (ros2_msgs__action__GoTo_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_msgs__action__GoTo_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_msgs__action__GoTo_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_msgs__action__GoTo_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ros2_msgs__action__GoTo_GetResult_Request__init(ros2_msgs__action__GoTo_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2_msgs__action__GoTo_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros2_msgs__action__GoTo_GetResult_Request__fini(ros2_msgs__action__GoTo_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ros2_msgs__action__GoTo_GetResult_Request__are_equal(const ros2_msgs__action__GoTo_GetResult_Request * lhs, const ros2_msgs__action__GoTo_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ros2_msgs__action__GoTo_GetResult_Request__copy(
  const ros2_msgs__action__GoTo_GetResult_Request * input,
  ros2_msgs__action__GoTo_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ros2_msgs__action__GoTo_GetResult_Request *
ros2_msgs__action__GoTo_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_GetResult_Request * msg = (ros2_msgs__action__GoTo_GetResult_Request *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_msgs__action__GoTo_GetResult_Request));
  bool success = ros2_msgs__action__GoTo_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_msgs__action__GoTo_GetResult_Request__destroy(ros2_msgs__action__GoTo_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_msgs__action__GoTo_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_msgs__action__GoTo_GetResult_Request__Sequence__init(ros2_msgs__action__GoTo_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_GetResult_Request * data = NULL;

  if (size) {
    data = (ros2_msgs__action__GoTo_GetResult_Request *)allocator.zero_allocate(size, sizeof(ros2_msgs__action__GoTo_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_msgs__action__GoTo_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_msgs__action__GoTo_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_msgs__action__GoTo_GetResult_Request__Sequence__fini(ros2_msgs__action__GoTo_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_msgs__action__GoTo_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_msgs__action__GoTo_GetResult_Request__Sequence *
ros2_msgs__action__GoTo_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_GetResult_Request__Sequence * array = (ros2_msgs__action__GoTo_GetResult_Request__Sequence *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_msgs__action__GoTo_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_msgs__action__GoTo_GetResult_Request__Sequence__destroy(ros2_msgs__action__GoTo_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_msgs__action__GoTo_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_msgs__action__GoTo_GetResult_Request__Sequence__are_equal(const ros2_msgs__action__GoTo_GetResult_Request__Sequence * lhs, const ros2_msgs__action__GoTo_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_msgs__action__GoTo_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_msgs__action__GoTo_GetResult_Request__Sequence__copy(
  const ros2_msgs__action__GoTo_GetResult_Request__Sequence * input,
  ros2_msgs__action__GoTo_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_msgs__action__GoTo_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_msgs__action__GoTo_GetResult_Request * data =
      (ros2_msgs__action__GoTo_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_msgs__action__GoTo_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_msgs__action__GoTo_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_msgs__action__GoTo_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ros2_msgs/action/detail/go_to__functions.h"

bool
ros2_msgs__action__GoTo_GetResult_Response__init(ros2_msgs__action__GoTo_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ros2_msgs__action__GoTo_Result__init(&msg->result)) {
    ros2_msgs__action__GoTo_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros2_msgs__action__GoTo_GetResult_Response__fini(ros2_msgs__action__GoTo_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ros2_msgs__action__GoTo_Result__fini(&msg->result);
}

bool
ros2_msgs__action__GoTo_GetResult_Response__are_equal(const ros2_msgs__action__GoTo_GetResult_Response * lhs, const ros2_msgs__action__GoTo_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ros2_msgs__action__GoTo_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ros2_msgs__action__GoTo_GetResult_Response__copy(
  const ros2_msgs__action__GoTo_GetResult_Response * input,
  ros2_msgs__action__GoTo_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ros2_msgs__action__GoTo_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ros2_msgs__action__GoTo_GetResult_Response *
ros2_msgs__action__GoTo_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_GetResult_Response * msg = (ros2_msgs__action__GoTo_GetResult_Response *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_msgs__action__GoTo_GetResult_Response));
  bool success = ros2_msgs__action__GoTo_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_msgs__action__GoTo_GetResult_Response__destroy(ros2_msgs__action__GoTo_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_msgs__action__GoTo_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_msgs__action__GoTo_GetResult_Response__Sequence__init(ros2_msgs__action__GoTo_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_GetResult_Response * data = NULL;

  if (size) {
    data = (ros2_msgs__action__GoTo_GetResult_Response *)allocator.zero_allocate(size, sizeof(ros2_msgs__action__GoTo_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_msgs__action__GoTo_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_msgs__action__GoTo_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_msgs__action__GoTo_GetResult_Response__Sequence__fini(ros2_msgs__action__GoTo_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_msgs__action__GoTo_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_msgs__action__GoTo_GetResult_Response__Sequence *
ros2_msgs__action__GoTo_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_GetResult_Response__Sequence * array = (ros2_msgs__action__GoTo_GetResult_Response__Sequence *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_msgs__action__GoTo_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_msgs__action__GoTo_GetResult_Response__Sequence__destroy(ros2_msgs__action__GoTo_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_msgs__action__GoTo_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_msgs__action__GoTo_GetResult_Response__Sequence__are_equal(const ros2_msgs__action__GoTo_GetResult_Response__Sequence * lhs, const ros2_msgs__action__GoTo_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_msgs__action__GoTo_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_msgs__action__GoTo_GetResult_Response__Sequence__copy(
  const ros2_msgs__action__GoTo_GetResult_Response__Sequence * input,
  ros2_msgs__action__GoTo_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_msgs__action__GoTo_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_msgs__action__GoTo_GetResult_Response * data =
      (ros2_msgs__action__GoTo_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_msgs__action__GoTo_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_msgs__action__GoTo_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_msgs__action__GoTo_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ros2_msgs/action/detail/go_to__functions.h"

bool
ros2_msgs__action__GoTo_FeedbackMessage__init(ros2_msgs__action__GoTo_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2_msgs__action__GoTo_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ros2_msgs__action__GoTo_Feedback__init(&msg->feedback)) {
    ros2_msgs__action__GoTo_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ros2_msgs__action__GoTo_FeedbackMessage__fini(ros2_msgs__action__GoTo_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ros2_msgs__action__GoTo_Feedback__fini(&msg->feedback);
}

bool
ros2_msgs__action__GoTo_FeedbackMessage__are_equal(const ros2_msgs__action__GoTo_FeedbackMessage * lhs, const ros2_msgs__action__GoTo_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ros2_msgs__action__GoTo_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ros2_msgs__action__GoTo_FeedbackMessage__copy(
  const ros2_msgs__action__GoTo_FeedbackMessage * input,
  ros2_msgs__action__GoTo_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ros2_msgs__action__GoTo_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ros2_msgs__action__GoTo_FeedbackMessage *
ros2_msgs__action__GoTo_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_FeedbackMessage * msg = (ros2_msgs__action__GoTo_FeedbackMessage *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_msgs__action__GoTo_FeedbackMessage));
  bool success = ros2_msgs__action__GoTo_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_msgs__action__GoTo_FeedbackMessage__destroy(ros2_msgs__action__GoTo_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_msgs__action__GoTo_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_msgs__action__GoTo_FeedbackMessage__Sequence__init(ros2_msgs__action__GoTo_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_FeedbackMessage * data = NULL;

  if (size) {
    data = (ros2_msgs__action__GoTo_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ros2_msgs__action__GoTo_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_msgs__action__GoTo_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_msgs__action__GoTo_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_msgs__action__GoTo_FeedbackMessage__Sequence__fini(ros2_msgs__action__GoTo_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_msgs__action__GoTo_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_msgs__action__GoTo_FeedbackMessage__Sequence *
ros2_msgs__action__GoTo_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_msgs__action__GoTo_FeedbackMessage__Sequence * array = (ros2_msgs__action__GoTo_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ros2_msgs__action__GoTo_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_msgs__action__GoTo_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_msgs__action__GoTo_FeedbackMessage__Sequence__destroy(ros2_msgs__action__GoTo_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_msgs__action__GoTo_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_msgs__action__GoTo_FeedbackMessage__Sequence__are_equal(const ros2_msgs__action__GoTo_FeedbackMessage__Sequence * lhs, const ros2_msgs__action__GoTo_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_msgs__action__GoTo_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_msgs__action__GoTo_FeedbackMessage__Sequence__copy(
  const ros2_msgs__action__GoTo_FeedbackMessage__Sequence * input,
  ros2_msgs__action__GoTo_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_msgs__action__GoTo_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_msgs__action__GoTo_FeedbackMessage * data =
      (ros2_msgs__action__GoTo_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_msgs__action__GoTo_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_msgs__action__GoTo_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_msgs__action__GoTo_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}