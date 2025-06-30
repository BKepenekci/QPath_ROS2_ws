// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from live_analysis_interfaces:msg/TestModelMsg.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/test_model_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
// Member `model_id`
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `images`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
live_analysis_interfaces__msg__TestModelMsg__init(live_analysis_interfaces__msg__TestModelMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    live_analysis_interfaces__msg__TestModelMsg__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    live_analysis_interfaces__msg__TestModelMsg__fini(msg);
    return false;
  }
  // model_id
  if (!rosidl_runtime_c__String__init(&msg->model_id)) {
    live_analysis_interfaces__msg__TestModelMsg__fini(msg);
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    live_analysis_interfaces__msg__TestModelMsg__fini(msg);
    return false;
  }
  // with_bounding_box
  // gpu
  // area_th
  // confidance_th
  // images
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->images, 0)) {
    live_analysis_interfaces__msg__TestModelMsg__fini(msg);
    return false;
  }
  return true;
}

void
live_analysis_interfaces__msg__TestModelMsg__fini(live_analysis_interfaces__msg__TestModelMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // model_id
  rosidl_runtime_c__String__fini(&msg->model_id);
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // with_bounding_box
  // gpu
  // area_th
  // confidance_th
  // images
  sensor_msgs__msg__Image__Sequence__fini(&msg->images);
}

bool
live_analysis_interfaces__msg__TestModelMsg__are_equal(const live_analysis_interfaces__msg__TestModelMsg * lhs, const live_analysis_interfaces__msg__TestModelMsg * rhs)
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
  // model_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_id), &(rhs->model_id)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_name), &(rhs->model_name)))
  {
    return false;
  }
  // with_bounding_box
  if (lhs->with_bounding_box != rhs->with_bounding_box) {
    return false;
  }
  // gpu
  if (lhs->gpu != rhs->gpu) {
    return false;
  }
  // area_th
  if (lhs->area_th != rhs->area_th) {
    return false;
  }
  // confidance_th
  if (lhs->confidance_th != rhs->confidance_th) {
    return false;
  }
  // images
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->images), &(rhs->images)))
  {
    return false;
  }
  return true;
}

bool
live_analysis_interfaces__msg__TestModelMsg__copy(
  const live_analysis_interfaces__msg__TestModelMsg * input,
  live_analysis_interfaces__msg__TestModelMsg * output)
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
  // model_id
  if (!rosidl_runtime_c__String__copy(
      &(input->model_id), &(output->model_id)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model_name), &(output->model_name)))
  {
    return false;
  }
  // with_bounding_box
  output->with_bounding_box = input->with_bounding_box;
  // gpu
  output->gpu = input->gpu;
  // area_th
  output->area_th = input->area_th;
  // confidance_th
  output->confidance_th = input->confidance_th;
  // images
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->images), &(output->images)))
  {
    return false;
  }
  return true;
}

live_analysis_interfaces__msg__TestModelMsg *
live_analysis_interfaces__msg__TestModelMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestModelMsg * msg = (live_analysis_interfaces__msg__TestModelMsg *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TestModelMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(live_analysis_interfaces__msg__TestModelMsg));
  bool success = live_analysis_interfaces__msg__TestModelMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
live_analysis_interfaces__msg__TestModelMsg__destroy(live_analysis_interfaces__msg__TestModelMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    live_analysis_interfaces__msg__TestModelMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
live_analysis_interfaces__msg__TestModelMsg__Sequence__init(live_analysis_interfaces__msg__TestModelMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestModelMsg * data = NULL;

  if (size) {
    data = (live_analysis_interfaces__msg__TestModelMsg *)allocator.zero_allocate(size, sizeof(live_analysis_interfaces__msg__TestModelMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = live_analysis_interfaces__msg__TestModelMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        live_analysis_interfaces__msg__TestModelMsg__fini(&data[i - 1]);
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
live_analysis_interfaces__msg__TestModelMsg__Sequence__fini(live_analysis_interfaces__msg__TestModelMsg__Sequence * array)
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
      live_analysis_interfaces__msg__TestModelMsg__fini(&array->data[i]);
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

live_analysis_interfaces__msg__TestModelMsg__Sequence *
live_analysis_interfaces__msg__TestModelMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestModelMsg__Sequence * array = (live_analysis_interfaces__msg__TestModelMsg__Sequence *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TestModelMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = live_analysis_interfaces__msg__TestModelMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
live_analysis_interfaces__msg__TestModelMsg__Sequence__destroy(live_analysis_interfaces__msg__TestModelMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    live_analysis_interfaces__msg__TestModelMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
live_analysis_interfaces__msg__TestModelMsg__Sequence__are_equal(const live_analysis_interfaces__msg__TestModelMsg__Sequence * lhs, const live_analysis_interfaces__msg__TestModelMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!live_analysis_interfaces__msg__TestModelMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
live_analysis_interfaces__msg__TestModelMsg__Sequence__copy(
  const live_analysis_interfaces__msg__TestModelMsg__Sequence * input,
  live_analysis_interfaces__msg__TestModelMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(live_analysis_interfaces__msg__TestModelMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    live_analysis_interfaces__msg__TestModelMsg * data =
      (live_analysis_interfaces__msg__TestModelMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!live_analysis_interfaces__msg__TestModelMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          live_analysis_interfaces__msg__TestModelMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!live_analysis_interfaces__msg__TestModelMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
