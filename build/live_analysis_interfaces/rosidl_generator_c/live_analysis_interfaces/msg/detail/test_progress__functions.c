// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from live_analysis_interfaces:msg/TestProgress.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/test_progress__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
live_analysis_interfaces__msg__TestProgress__init(live_analysis_interfaces__msg__TestProgress * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
live_analysis_interfaces__msg__TestProgress__fini(live_analysis_interfaces__msg__TestProgress * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

live_analysis_interfaces__msg__TestProgress *
live_analysis_interfaces__msg__TestProgress__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestProgress * msg = (live_analysis_interfaces__msg__TestProgress *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TestProgress), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(live_analysis_interfaces__msg__TestProgress));
  bool success = live_analysis_interfaces__msg__TestProgress__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
live_analysis_interfaces__msg__TestProgress__destroy(live_analysis_interfaces__msg__TestProgress * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    live_analysis_interfaces__msg__TestProgress__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
live_analysis_interfaces__msg__TestProgress__Sequence__init(live_analysis_interfaces__msg__TestProgress__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestProgress * data = NULL;

  if (size) {
    data = (live_analysis_interfaces__msg__TestProgress *)allocator.zero_allocate(size, sizeof(live_analysis_interfaces__msg__TestProgress), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = live_analysis_interfaces__msg__TestProgress__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        live_analysis_interfaces__msg__TestProgress__fini(&data[i - 1]);
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
live_analysis_interfaces__msg__TestProgress__Sequence__fini(live_analysis_interfaces__msg__TestProgress__Sequence * array)
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
      live_analysis_interfaces__msg__TestProgress__fini(&array->data[i]);
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

live_analysis_interfaces__msg__TestProgress__Sequence *
live_analysis_interfaces__msg__TestProgress__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  live_analysis_interfaces__msg__TestProgress__Sequence * array = (live_analysis_interfaces__msg__TestProgress__Sequence *)allocator.allocate(sizeof(live_analysis_interfaces__msg__TestProgress__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = live_analysis_interfaces__msg__TestProgress__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
live_analysis_interfaces__msg__TestProgress__Sequence__destroy(live_analysis_interfaces__msg__TestProgress__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    live_analysis_interfaces__msg__TestProgress__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
