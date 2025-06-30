// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from live_analysis_interfaces:msg/TestResultMsg.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/test_result_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
// Member `img_result_strs`
#include "rosidl_runtime_c/string_functions.h"
// Member `img_result_confidance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `heat_maps`
// Member `result_imgs`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
live_analysis_interfaces__msg__TestResultMsg__init(live_analysis_interfaces__msg__TestResultMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    live_analysis_interfaces__msg__TestResultMsg__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    live_analysis_interfaces__msg__TestResultMsg__fini(msg);
    return false;
  }
  // total_imgs
  // img_result_strs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->img_result_strs, 0)) {
    live_analysis_interfaces__msg__TestResultMsg__fini(msg);
    return false;
  }
  // img_result_confidance
  if (!rosidl_runtime_c__float__Sequence__init(&msg->img_result_confidance, 0)) {
    live_analysis_interfaces__msg__TestResultMsg__fini(msg);
    return false;
  }
  // heat_maps
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->heat_maps, 0)) {
    live_analysis_interfaces__msg__TestResultMsg__fini(msg);
    return false;
  }
  // result_imgs
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->result_imgs, 0)) {
    live_analysis_interfaces__msg__TestResultMsg__fini(msg);
    return false;
  }
  // total_time
  return true;
}

void
live_analysis_interfaces__msg__TestResultMsg__fini(live_analysis_interfaces__msg__TestResultMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // total_imgs
  // img_result_strs
  rosidl_runtime_c__String__Sequence__fini(&msg->img_result_strs);
  // img_result_confidance
  rosidl_runtime_c__float__Sequence__fini(&msg->img_result_confidance);
  // heat_maps
  sensor_msgs__msg__Image__Sequence__fini(&msg->heat_maps);
  // result_imgs
  sensor_msgs__msg__Image__Sequence__fini(&msg->result_imgs);
  // total_time
}

bool
live_analysis_interfaces__msg__TestResultMsg__are_equal(const live_analysis_interfaces__msg__TestResultMsg * lhs, const live_analysis_interfaces__msg__TestResultMsg * rhs)
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
  // total_imgs
  if (lhs->total_imgs != rhs->total_imgs) {
    return false;
  }
  // img_result_strs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->img_result_strs), &(rhs->img_result_strs)))
  {
    return false;
  }
  // img_result_confidance
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->img_result_confidance), &(rhs->img_result_confidance)))
  {
    return false;
  }
  // heat_maps
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->heat_maps), &(rhs->heat_maps)))
  {
    return false;
  }
  // result_imgs
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->result_imgs), &(rhs->result_imgs)))
  {
    return false;
  }
  // total_time
  if (lhs->total_time != rhs->total_time) {
    return false;
  }
  return true;
}

bool
live_analysis_interfaces__msg__TestResultMsg__copy(
  const live_analysis_interfaces__msg__TestResultMsg * input,
  live_analysis_interfaces__msg__TestResultMsg * output)
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
  // total_imgs
  output->total_imgs = input->total_imgs;
  // img_result_strs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->img_result_strs), &(output->img_result_strs)))
  {
    return false;
  }
  // img_result_confidance
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->img_result_confidance), &(output->img_result_confidance)))
  {
    return false;
  }
  // heat_maps
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->heat_maps), &(output->heat_maps)))
  {
    return false;
  }
  // result_imgs
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->result_imgs), &(output->result_imgs)))
  {
    return false;
  }
  // total_time
  output->total_time = input->total_time;
  return true;
}

live_analysis_interfaces__msg__TestResultMsg *
live_analysis_interfaces__msg__TestResultMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestResultMsg * msg = (live_analysis_interfaces__msg__TestResultMsg *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TestResultMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(live_analysis_interfaces__msg__TestResultMsg));
  bool success = live_analysis_interfaces__msg__TestResultMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
live_analysis_interfaces__msg__TestResultMsg__destroy(live_analysis_interfaces__msg__TestResultMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    live_analysis_interfaces__msg__TestResultMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
live_analysis_interfaces__msg__TestResultMsg__Sequence__init(live_analysis_interfaces__msg__TestResultMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestResultMsg * data = NULL;

  if (size) {
    data = (live_analysis_interfaces__msg__TestResultMsg *)allocator.zero_allocate(size, sizeof(live_analysis_interfaces__msg__TestResultMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = live_analysis_interfaces__msg__TestResultMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        live_analysis_interfaces__msg__TestResultMsg__fini(&data[i - 1]);
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
live_analysis_interfaces__msg__TestResultMsg__Sequence__fini(live_analysis_interfaces__msg__TestResultMsg__Sequence * array)
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
      live_analysis_interfaces__msg__TestResultMsg__fini(&array->data[i]);
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

live_analysis_interfaces__msg__TestResultMsg__Sequence *
live_analysis_interfaces__msg__TestResultMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestResultMsg__Sequence * array = (live_analysis_interfaces__msg__TestResultMsg__Sequence *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TestResultMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = live_analysis_interfaces__msg__TestResultMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
live_analysis_interfaces__msg__TestResultMsg__Sequence__destroy(live_analysis_interfaces__msg__TestResultMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    live_analysis_interfaces__msg__TestResultMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
live_analysis_interfaces__msg__TestResultMsg__Sequence__are_equal(const live_analysis_interfaces__msg__TestResultMsg__Sequence * lhs, const live_analysis_interfaces__msg__TestResultMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!live_analysis_interfaces__msg__TestResultMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
live_analysis_interfaces__msg__TestResultMsg__Sequence__copy(
  const live_analysis_interfaces__msg__TestResultMsg__Sequence * input,
  live_analysis_interfaces__msg__TestResultMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(live_analysis_interfaces__msg__TestResultMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    live_analysis_interfaces__msg__TestResultMsg * data =
      (live_analysis_interfaces__msg__TestResultMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!live_analysis_interfaces__msg__TestResultMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          live_analysis_interfaces__msg__TestResultMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!live_analysis_interfaces__msg__TestResultMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
