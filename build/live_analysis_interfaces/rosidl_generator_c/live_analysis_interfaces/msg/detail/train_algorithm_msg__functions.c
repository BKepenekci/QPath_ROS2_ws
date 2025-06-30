// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from live_analysis_interfaces:msg/TrainAlgorithmMsg.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/train_algorithm_msg__functions.h"

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
// Member `train_set_annotations`
// Member `eval_set_annotations`
// Member `algorithm_id`
// Member `algorithm_name`
// Member `gpu`
// Member `model_path`
#include "rosidl_runtime_c/string_functions.h"
// Member `train_images`
// Member `eval_images`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
live_analysis_interfaces__msg__TrainAlgorithmMsg__init(live_analysis_interfaces__msg__TrainAlgorithmMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // model_id
  if (!rosidl_runtime_c__String__init(&msg->model_id)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // train_images
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->train_images, 0)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // eval_images
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->eval_images, 0)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // train_set_annotations
  if (!rosidl_runtime_c__String__Sequence__init(&msg->train_set_annotations, 0)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // eval_set_annotations
  if (!rosidl_runtime_c__String__Sequence__init(&msg->eval_set_annotations, 0)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // epoc
  // batchsize
  // algorithm_id
  if (!rosidl_runtime_c__String__init(&msg->algorithm_id)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // algorithm_name
  if (!rosidl_runtime_c__String__init(&msg->algorithm_name)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // gpu
  if (!rosidl_runtime_c__String__init(&msg->gpu)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // model_path
  if (!rosidl_runtime_c__String__init(&msg->model_path)) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
    return false;
  }
  // files_completed
  return true;
}

void
live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(live_analysis_interfaces__msg__TrainAlgorithmMsg * msg)
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
  // train_images
  sensor_msgs__msg__Image__Sequence__fini(&msg->train_images);
  // eval_images
  sensor_msgs__msg__Image__Sequence__fini(&msg->eval_images);
  // train_set_annotations
  rosidl_runtime_c__String__Sequence__fini(&msg->train_set_annotations);
  // eval_set_annotations
  rosidl_runtime_c__String__Sequence__fini(&msg->eval_set_annotations);
  // epoc
  // batchsize
  // algorithm_id
  rosidl_runtime_c__String__fini(&msg->algorithm_id);
  // algorithm_name
  rosidl_runtime_c__String__fini(&msg->algorithm_name);
  // gpu
  rosidl_runtime_c__String__fini(&msg->gpu);
  // model_path
  rosidl_runtime_c__String__fini(&msg->model_path);
  // files_completed
}

bool
live_analysis_interfaces__msg__TrainAlgorithmMsg__are_equal(const live_analysis_interfaces__msg__TrainAlgorithmMsg * lhs, const live_analysis_interfaces__msg__TrainAlgorithmMsg * rhs)
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
  // train_images
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->train_images), &(rhs->train_images)))
  {
    return false;
  }
  // eval_images
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->eval_images), &(rhs->eval_images)))
  {
    return false;
  }
  // train_set_annotations
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->train_set_annotations), &(rhs->train_set_annotations)))
  {
    return false;
  }
  // eval_set_annotations
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->eval_set_annotations), &(rhs->eval_set_annotations)))
  {
    return false;
  }
  // epoc
  if (lhs->epoc != rhs->epoc) {
    return false;
  }
  // batchsize
  if (lhs->batchsize != rhs->batchsize) {
    return false;
  }
  // algorithm_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->algorithm_id), &(rhs->algorithm_id)))
  {
    return false;
  }
  // algorithm_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->algorithm_name), &(rhs->algorithm_name)))
  {
    return false;
  }
  // gpu
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gpu), &(rhs->gpu)))
  {
    return false;
  }
  // model_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_path), &(rhs->model_path)))
  {
    return false;
  }
  // files_completed
  if (lhs->files_completed != rhs->files_completed) {
    return false;
  }
  return true;
}

bool
live_analysis_interfaces__msg__TrainAlgorithmMsg__copy(
  const live_analysis_interfaces__msg__TrainAlgorithmMsg * input,
  live_analysis_interfaces__msg__TrainAlgorithmMsg * output)
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
  // train_images
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->train_images), &(output->train_images)))
  {
    return false;
  }
  // eval_images
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->eval_images), &(output->eval_images)))
  {
    return false;
  }
  // train_set_annotations
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->train_set_annotations), &(output->train_set_annotations)))
  {
    return false;
  }
  // eval_set_annotations
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->eval_set_annotations), &(output->eval_set_annotations)))
  {
    return false;
  }
  // epoc
  output->epoc = input->epoc;
  // batchsize
  output->batchsize = input->batchsize;
  // algorithm_id
  if (!rosidl_runtime_c__String__copy(
      &(input->algorithm_id), &(output->algorithm_id)))
  {
    return false;
  }
  // algorithm_name
  if (!rosidl_runtime_c__String__copy(
      &(input->algorithm_name), &(output->algorithm_name)))
  {
    return false;
  }
  // gpu
  if (!rosidl_runtime_c__String__copy(
      &(input->gpu), &(output->gpu)))
  {
    return false;
  }
  // model_path
  if (!rosidl_runtime_c__String__copy(
      &(input->model_path), &(output->model_path)))
  {
    return false;
  }
  // files_completed
  output->files_completed = input->files_completed;
  return true;
}

live_analysis_interfaces__msg__TrainAlgorithmMsg *
live_analysis_interfaces__msg__TrainAlgorithmMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TrainAlgorithmMsg * msg = (live_analysis_interfaces__msg__TrainAlgorithmMsg *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TrainAlgorithmMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(live_analysis_interfaces__msg__TrainAlgorithmMsg));
  bool success = live_analysis_interfaces__msg__TrainAlgorithmMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
live_analysis_interfaces__msg__TrainAlgorithmMsg__destroy(live_analysis_interfaces__msg__TrainAlgorithmMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence__init(live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TrainAlgorithmMsg * data = NULL;

  if (size) {
    data = (live_analysis_interfaces__msg__TrainAlgorithmMsg *)allocator.zero_allocate(size, sizeof(live_analysis_interfaces__msg__TrainAlgorithmMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = live_analysis_interfaces__msg__TrainAlgorithmMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(&data[i - 1]);
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
live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence__fini(live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence * array)
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
      live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(&array->data[i]);
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

live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence *
live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence * array = (live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence__destroy(live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence__are_equal(const live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence * lhs, const live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!live_analysis_interfaces__msg__TrainAlgorithmMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence__copy(
  const live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence * input,
  live_analysis_interfaces__msg__TrainAlgorithmMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(live_analysis_interfaces__msg__TrainAlgorithmMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    live_analysis_interfaces__msg__TrainAlgorithmMsg * data =
      (live_analysis_interfaces__msg__TrainAlgorithmMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!live_analysis_interfaces__msg__TrainAlgorithmMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          live_analysis_interfaces__msg__TrainAlgorithmMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!live_analysis_interfaces__msg__TrainAlgorithmMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
