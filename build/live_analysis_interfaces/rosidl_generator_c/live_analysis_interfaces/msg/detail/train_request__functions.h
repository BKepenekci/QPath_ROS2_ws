// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from live_analysis_interfaces:msg/TrainRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__FUNCTIONS_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "live_analysis_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "live_analysis_interfaces/msg/detail/train_request__struct.h"

/// Initialize msg/TrainRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * live_analysis_interfaces__msg__TrainRequest
 * )) before or use
 * live_analysis_interfaces__msg__TrainRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
bool
live_analysis_interfaces__msg__TrainRequest__init(live_analysis_interfaces__msg__TrainRequest * msg);

/// Finalize msg/TrainRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
void
live_analysis_interfaces__msg__TrainRequest__fini(live_analysis_interfaces__msg__TrainRequest * msg);

/// Create msg/TrainRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * live_analysis_interfaces__msg__TrainRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
live_analysis_interfaces__msg__TrainRequest *
live_analysis_interfaces__msg__TrainRequest__create();

/// Destroy msg/TrainRequest message.
/**
 * It calls
 * live_analysis_interfaces__msg__TrainRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
void
live_analysis_interfaces__msg__TrainRequest__destroy(live_analysis_interfaces__msg__TrainRequest * msg);


/// Initialize array of msg/TrainRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * live_analysis_interfaces__msg__TrainRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
bool
live_analysis_interfaces__msg__TrainRequest__Sequence__init(live_analysis_interfaces__msg__TrainRequest__Sequence * array, size_t size);

/// Finalize array of msg/TrainRequest messages.
/**
 * It calls
 * live_analysis_interfaces__msg__TrainRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
void
live_analysis_interfaces__msg__TrainRequest__Sequence__fini(live_analysis_interfaces__msg__TrainRequest__Sequence * array);

/// Create array of msg/TrainRequest messages.
/**
 * It allocates the memory for the array and calls
 * live_analysis_interfaces__msg__TrainRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
live_analysis_interfaces__msg__TrainRequest__Sequence *
live_analysis_interfaces__msg__TrainRequest__Sequence__create(size_t size);

/// Destroy array of msg/TrainRequest messages.
/**
 * It calls
 * live_analysis_interfaces__msg__TrainRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
void
live_analysis_interfaces__msg__TrainRequest__Sequence__destroy(live_analysis_interfaces__msg__TrainRequest__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST__FUNCTIONS_H_
