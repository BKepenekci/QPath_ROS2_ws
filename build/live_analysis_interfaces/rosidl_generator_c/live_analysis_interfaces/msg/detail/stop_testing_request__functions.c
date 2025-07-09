// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from live_analysis_interfaces:msg/StopTestingRequest.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/stop_testing_request__functions.h"

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
// Member `test_id`
#include "rosidl_runtime_c/string_functions.h"

bool
live_analysis_interfaces__msg__StopTestingRequest__init(live_analysis_interfaces__msg__StopTestingRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    live_analysis_interfaces__msg__StopTestingRequest__fini(msg);
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__init(&msg->user_id)) {
    live_analysis_interfaces__msg__StopTestingRequest__fini(msg);
    return false;
  }
  // model_id
  if (!rosidl_runtime_c__String__init(&msg->model_id)) {
    live_analysis_interfaces__msg__StopTestingRequest__fini(msg);
    return false;
  }
  // test_id
  if (!rosidl_runtime_c__String__init(&msg->test_id)) {
    live_analysis_interfaces__msg__StopTestingRequest__fini(msg);
    return false;
  }
  return true;
}

void
live_analysis_interfaces__msg__StopTestingRequest__fini(live_analysis_interfaces__msg__StopTestingRequest * msg)
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
  // test_id
  rosidl_runtime_c__String__fini(&msg->test_id);
}

live_analysis_interfaces__msg__StopTestingRequest *
live_analysis_interfaces__msg__StopTestingRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__StopTestingRequest * msg = (live_analysis_interfaces__msg__StopTestingRequest *)allocator.allocate(sizeof(live_analysis_interfaces__msg__StopTestingRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(live_analysis_interfaces__msg__StopTestingRequest));
  bool success = live_analysis_interfaces__msg__StopTestingRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
live_analysis_interfaces__msg__StopTestingRequest__destroy(live_analysis_interfaces__msg__StopTestingRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    live_analysis_interfaces__msg__StopTestingRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
live_analysis_interfaces__msg__StopTestingRequest__Sequence__init(live_analysis_interfaces__msg__StopTestingRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__StopTestingRequest * data = NULL;

  if (size) {
    data = (live_analysis_interfaces__msg__StopTestingRequest *)allocator.zero_allocate(size, sizeof(live_analysis_interfaces__msg__StopTestingRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = live_analysis_interfaces__msg__StopTestingRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        live_analysis_interfaces__msg__StopTestingRequest__fini(&data[i - 1]);
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
live_analysis_interfaces__msg__StopTestingRequest__Sequence__fini(live_analysis_interfaces__msg__StopTestingRequest__Sequence * array)
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
      live_analysis_interfaces__msg__StopTestingRequest__fini(&array->data[i]);
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

live_analysis_interfaces__msg__StopTestingRequest__Sequence *
live_analysis_interfaces__msg__StopTestingRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__StopTestingRequest__Sequence * array = (live_analysis_interfaces__msg__StopTestingRequest__Sequence *)allocator.allocate(sizeof(live_analysis_interfaces__msg__StopTestingRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = live_analysis_interfaces__msg__StopTestingRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
live_analysis_interfaces__msg__StopTestingRequest__Sequence__destroy(live_analysis_interfaces__msg__StopTestingRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    live_analysis_interfaces__msg__StopTestingRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
