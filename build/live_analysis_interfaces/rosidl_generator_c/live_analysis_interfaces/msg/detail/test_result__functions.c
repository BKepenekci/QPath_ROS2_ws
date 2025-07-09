// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from live_analysis_interfaces:msg/TestResult.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/test_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `user_id`
// Member `model_id`
// Member `image_path`
#include "rosidl_runtime_c/string_functions.h"
// Member `heatmap`
// Member `mask`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `bboxes`
// Member `confidences`
// Member `ok_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
live_analysis_interfaces__msg__TestResult__init(live_analysis_interfaces__msg__TestResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    live_analysis_interfaces__msg__TestResult__fini(msg);
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__init(&msg->user_id)) {
    live_analysis_interfaces__msg__TestResult__fini(msg);
    return false;
  }
  // model_id
  if (!rosidl_runtime_c__String__init(&msg->model_id)) {
    live_analysis_interfaces__msg__TestResult__fini(msg);
    return false;
  }
  // ok
  // heatmap
  if (!sensor_msgs__msg__Image__init(&msg->heatmap)) {
    live_analysis_interfaces__msg__TestResult__fini(msg);
    return false;
  }
  // mask
  if (!sensor_msgs__msg__Image__init(&msg->mask)) {
    live_analysis_interfaces__msg__TestResult__fini(msg);
    return false;
  }
  // bboxes
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->bboxes, 0)) {
    live_analysis_interfaces__msg__TestResult__fini(msg);
    return false;
  }
  // confidences
  if (!rosidl_runtime_c__float__Sequence__init(&msg->confidences, 0)) {
    live_analysis_interfaces__msg__TestResult__fini(msg);
    return false;
  }
  // ok_list
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->ok_list, 0)) {
    live_analysis_interfaces__msg__TestResult__fini(msg);
    return false;
  }
  // image_path
  if (!rosidl_runtime_c__String__init(&msg->image_path)) {
    live_analysis_interfaces__msg__TestResult__fini(msg);
    return false;
  }
  // percent_done
  return true;
}

void
live_analysis_interfaces__msg__TestResult__fini(live_analysis_interfaces__msg__TestResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // user_id
  rosidl_runtime_c__String__fini(&msg->user_id);
  // model_id
  rosidl_runtime_c__String__fini(&msg->model_id);
  // ok
  // heatmap
  sensor_msgs__msg__Image__fini(&msg->heatmap);
  // mask
  sensor_msgs__msg__Image__fini(&msg->mask);
  // bboxes
  rosidl_runtime_c__int32__Sequence__fini(&msg->bboxes);
  // confidences
  rosidl_runtime_c__float__Sequence__fini(&msg->confidences);
  // ok_list
  rosidl_runtime_c__boolean__Sequence__fini(&msg->ok_list);
  // image_path
  rosidl_runtime_c__String__fini(&msg->image_path);
  // percent_done
}

live_analysis_interfaces__msg__TestResult *
live_analysis_interfaces__msg__TestResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestResult * msg = (live_analysis_interfaces__msg__TestResult *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TestResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(live_analysis_interfaces__msg__TestResult));
  bool success = live_analysis_interfaces__msg__TestResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
live_analysis_interfaces__msg__TestResult__destroy(live_analysis_interfaces__msg__TestResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    live_analysis_interfaces__msg__TestResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
live_analysis_interfaces__msg__TestResult__Sequence__init(live_analysis_interfaces__msg__TestResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestResult * data = NULL;

  if (size) {
    data = (live_analysis_interfaces__msg__TestResult *)allocator.zero_allocate(size, sizeof(live_analysis_interfaces__msg__TestResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = live_analysis_interfaces__msg__TestResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        live_analysis_interfaces__msg__TestResult__fini(&data[i - 1]);
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
live_analysis_interfaces__msg__TestResult__Sequence__fini(live_analysis_interfaces__msg__TestResult__Sequence * array)
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
      live_analysis_interfaces__msg__TestResult__fini(&array->data[i]);
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

live_analysis_interfaces__msg__TestResult__Sequence *
live_analysis_interfaces__msg__TestResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestResult__Sequence * array = (live_analysis_interfaces__msg__TestResult__Sequence *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TestResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = live_analysis_interfaces__msg__TestResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
live_analysis_interfaces__msg__TestResult__Sequence__destroy(live_analysis_interfaces__msg__TestResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    live_analysis_interfaces__msg__TestResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
