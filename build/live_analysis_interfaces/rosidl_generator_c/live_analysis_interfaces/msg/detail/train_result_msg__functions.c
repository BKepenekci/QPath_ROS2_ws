// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from live_analysis_interfaces:msg/TrainResultMsg.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/train_result_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
// Member `model_name`
// Member `model_id`
// Member `model_path`
#include "rosidl_runtime_c/string_functions.h"

bool
live_analysis_interfaces__msg__TrainResultMsg__init(live_analysis_interfaces__msg__TrainResultMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    live_analysis_interfaces__msg__TrainResultMsg__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    live_analysis_interfaces__msg__TrainResultMsg__fini(msg);
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    live_analysis_interfaces__msg__TrainResultMsg__fini(msg);
    return false;
  }
  // model_id
  if (!rosidl_runtime_c__String__init(&msg->model_id)) {
    live_analysis_interfaces__msg__TrainResultMsg__fini(msg);
    return false;
  }
  // total_time
  // total_train_imgs
  // total_eval_imgs
  // m_ap
  // duration
  // model_path
  if (!rosidl_runtime_c__String__init(&msg->model_path)) {
    live_analysis_interfaces__msg__TrainResultMsg__fini(msg);
    return false;
  }
  // training_completed
  // epoc
  // current_epoc
  return true;
}

void
live_analysis_interfaces__msg__TrainResultMsg__fini(live_analysis_interfaces__msg__TrainResultMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // model_id
  rosidl_runtime_c__String__fini(&msg->model_id);
  // total_time
  // total_train_imgs
  // total_eval_imgs
  // m_ap
  // duration
  // model_path
  rosidl_runtime_c__String__fini(&msg->model_path);
  // training_completed
  // epoc
  // current_epoc
}

bool
live_analysis_interfaces__msg__TrainResultMsg__are_equal(const live_analysis_interfaces__msg__TrainResultMsg * lhs, const live_analysis_interfaces__msg__TrainResultMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_name), &(rhs->model_name)))
  {
    return false;
  }
  // model_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_id), &(rhs->model_id)))
  {
    return false;
  }
  // total_time
  if (lhs->total_time != rhs->total_time) {
    return false;
  }
  // total_train_imgs
  if (lhs->total_train_imgs != rhs->total_train_imgs) {
    return false;
  }
  // total_eval_imgs
  if (lhs->total_eval_imgs != rhs->total_eval_imgs) {
    return false;
  }
  // m_ap
  if (lhs->m_ap != rhs->m_ap) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // model_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_path), &(rhs->model_path)))
  {
    return false;
  }
  // training_completed
  if (lhs->training_completed != rhs->training_completed) {
    return false;
  }
  // epoc
  if (lhs->epoc != rhs->epoc) {
    return false;
  }
  // current_epoc
  if (lhs->current_epoc != rhs->current_epoc) {
    return false;
  }
  return true;
}

bool
live_analysis_interfaces__msg__TrainResultMsg__copy(
  const live_analysis_interfaces__msg__TrainResultMsg * input,
  live_analysis_interfaces__msg__TrainResultMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model_name), &(output->model_name)))
  {
    return false;
  }
  // model_id
  if (!rosidl_runtime_c__String__copy(
      &(input->model_id), &(output->model_id)))
  {
    return false;
  }
  // total_time
  output->total_time = input->total_time;
  // total_train_imgs
  output->total_train_imgs = input->total_train_imgs;
  // total_eval_imgs
  output->total_eval_imgs = input->total_eval_imgs;
  // m_ap
  output->m_ap = input->m_ap;
  // duration
  output->duration = input->duration;
  // model_path
  if (!rosidl_runtime_c__String__copy(
      &(input->model_path), &(output->model_path)))
  {
    return false;
  }
  // training_completed
  output->training_completed = input->training_completed;
  // epoc
  output->epoc = input->epoc;
  // current_epoc
  output->current_epoc = input->current_epoc;
  return true;
}

live_analysis_interfaces__msg__TrainResultMsg *
live_analysis_interfaces__msg__TrainResultMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TrainResultMsg * msg = (live_analysis_interfaces__msg__TrainResultMsg *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TrainResultMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(live_analysis_interfaces__msg__TrainResultMsg));
  bool success = live_analysis_interfaces__msg__TrainResultMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
live_analysis_interfaces__msg__TrainResultMsg__destroy(live_analysis_interfaces__msg__TrainResultMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    live_analysis_interfaces__msg__TrainResultMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
live_analysis_interfaces__msg__TrainResultMsg__Sequence__init(live_analysis_interfaces__msg__TrainResultMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TrainResultMsg * data = NULL;

  if (size) {
    data = (live_analysis_interfaces__msg__TrainResultMsg *)allocator.zero_allocate(size, sizeof(live_analysis_interfaces__msg__TrainResultMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = live_analysis_interfaces__msg__TrainResultMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        live_analysis_interfaces__msg__TrainResultMsg__fini(&data[i - 1]);
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
live_analysis_interfaces__msg__TrainResultMsg__Sequence__fini(live_analysis_interfaces__msg__TrainResultMsg__Sequence * array)
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
      live_analysis_interfaces__msg__TrainResultMsg__fini(&array->data[i]);
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

live_analysis_interfaces__msg__TrainResultMsg__Sequence *
live_analysis_interfaces__msg__TrainResultMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TrainResultMsg__Sequence * array = (live_analysis_interfaces__msg__TrainResultMsg__Sequence *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TrainResultMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = live_analysis_interfaces__msg__TrainResultMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
live_analysis_interfaces__msg__TrainResultMsg__Sequence__destroy(live_analysis_interfaces__msg__TrainResultMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    live_analysis_interfaces__msg__TrainResultMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
live_analysis_interfaces__msg__TrainResultMsg__Sequence__are_equal(const live_analysis_interfaces__msg__TrainResultMsg__Sequence * lhs, const live_analysis_interfaces__msg__TrainResultMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!live_analysis_interfaces__msg__TrainResultMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
live_analysis_interfaces__msg__TrainResultMsg__Sequence__copy(
  const live_analysis_interfaces__msg__TrainResultMsg__Sequence * input,
  live_analysis_interfaces__msg__TrainResultMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(live_analysis_interfaces__msg__TrainResultMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    live_analysis_interfaces__msg__TrainResultMsg * data =
      (live_analysis_interfaces__msg__TrainResultMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!live_analysis_interfaces__msg__TrainResultMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          live_analysis_interfaces__msg__TrainResultMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!live_analysis_interfaces__msg__TrainResultMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
