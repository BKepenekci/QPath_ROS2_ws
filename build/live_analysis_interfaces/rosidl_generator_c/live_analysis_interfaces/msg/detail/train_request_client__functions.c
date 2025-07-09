// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from live_analysis_interfaces:msg/TrainRequestClient.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/train_request_client__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `user_id`
// Member `algorithm_id`
// Member `model_id`
// Member `data_class`
// Member `class_labels`
#include "rosidl_runtime_c/string_functions.h"
// Member `train_images`
// Member `eval_images`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `rectangles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
live_analysis_interfaces__msg__TrainRequestClient__init(live_analysis_interfaces__msg__TrainRequestClient * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    live_analysis_interfaces__msg__TrainRequestClient__fini(msg);
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__init(&msg->user_id)) {
    live_analysis_interfaces__msg__TrainRequestClient__fini(msg);
    return false;
  }
  // algorithm_id
  if (!rosidl_runtime_c__String__init(&msg->algorithm_id)) {
    live_analysis_interfaces__msg__TrainRequestClient__fini(msg);
    return false;
  }
  // model_id
  if (!rosidl_runtime_c__String__init(&msg->model_id)) {
    live_analysis_interfaces__msg__TrainRequestClient__fini(msg);
    return false;
  }
  // epochs
  // min_accuracy
  // batch_size
  // use_detection
  // use_label
  // data_class
  if (!rosidl_runtime_c__String__init(&msg->data_class)) {
    live_analysis_interfaces__msg__TrainRequestClient__fini(msg);
    return false;
  }
  // train_images
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->train_images, 0)) {
    live_analysis_interfaces__msg__TrainRequestClient__fini(msg);
    return false;
  }
  // eval_images
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->eval_images, 0)) {
    live_analysis_interfaces__msg__TrainRequestClient__fini(msg);
    return false;
  }
  // class_labels
  if (!rosidl_runtime_c__String__Sequence__init(&msg->class_labels, 0)) {
    live_analysis_interfaces__msg__TrainRequestClient__fini(msg);
    return false;
  }
  // rectangles
  if (!rosidl_runtime_c__float__Sequence__init(&msg->rectangles, 0)) {
    live_analysis_interfaces__msg__TrainRequestClient__fini(msg);
    return false;
  }
  // files_completed
  // seq_no
  return true;
}

void
live_analysis_interfaces__msg__TrainRequestClient__fini(live_analysis_interfaces__msg__TrainRequestClient * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // user_id
  rosidl_runtime_c__String__fini(&msg->user_id);
  // algorithm_id
  rosidl_runtime_c__String__fini(&msg->algorithm_id);
  // model_id
  rosidl_runtime_c__String__fini(&msg->model_id);
  // epochs
  // min_accuracy
  // batch_size
  // use_detection
  // use_label
  // data_class
  rosidl_runtime_c__String__fini(&msg->data_class);
  // train_images
  sensor_msgs__msg__Image__Sequence__fini(&msg->train_images);
  // eval_images
  sensor_msgs__msg__Image__Sequence__fini(&msg->eval_images);
  // class_labels
  rosidl_runtime_c__String__Sequence__fini(&msg->class_labels);
  // rectangles
  rosidl_runtime_c__float__Sequence__fini(&msg->rectangles);
  // files_completed
  // seq_no
}

live_analysis_interfaces__msg__TrainRequestClient *
live_analysis_interfaces__msg__TrainRequestClient__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TrainRequestClient * msg = (live_analysis_interfaces__msg__TrainRequestClient *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TrainRequestClient), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(live_analysis_interfaces__msg__TrainRequestClient));
  bool success = live_analysis_interfaces__msg__TrainRequestClient__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
live_analysis_interfaces__msg__TrainRequestClient__destroy(live_analysis_interfaces__msg__TrainRequestClient * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    live_analysis_interfaces__msg__TrainRequestClient__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
live_analysis_interfaces__msg__TrainRequestClient__Sequence__init(live_analysis_interfaces__msg__TrainRequestClient__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TrainRequestClient * data = NULL;

  if (size) {
    data = (live_analysis_interfaces__msg__TrainRequestClient *)allocator.zero_allocate(size, sizeof(live_analysis_interfaces__msg__TrainRequestClient), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = live_analysis_interfaces__msg__TrainRequestClient__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        live_analysis_interfaces__msg__TrainRequestClient__fini(&data[i - 1]);
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
live_analysis_interfaces__msg__TrainRequestClient__Sequence__fini(live_analysis_interfaces__msg__TrainRequestClient__Sequence * array)
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
      live_analysis_interfaces__msg__TrainRequestClient__fini(&array->data[i]);
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

live_analysis_interfaces__msg__TrainRequestClient__Sequence *
live_analysis_interfaces__msg__TrainRequestClient__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TrainRequestClient__Sequence * array = (live_analysis_interfaces__msg__TrainRequestClient__Sequence *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TrainRequestClient__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = live_analysis_interfaces__msg__TrainRequestClient__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
live_analysis_interfaces__msg__TrainRequestClient__Sequence__destroy(live_analysis_interfaces__msg__TrainRequestClient__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    live_analysis_interfaces__msg__TrainRequestClient__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
