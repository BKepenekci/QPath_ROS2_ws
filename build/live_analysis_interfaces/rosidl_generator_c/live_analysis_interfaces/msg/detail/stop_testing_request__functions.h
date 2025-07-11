// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from live_analysis_interfaces:msg/StopTestingRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TESTING_REQUEST__FUNCTIONS_H_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TESTING_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "live_analysis_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "live_analysis_interfaces/msg/detail/stop_testing_request__struct.h"

/// Initialize msg/StopTestingRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * live_analysis_interfaces__msg__StopTestingRequest
 * )) before or use
 * live_analysis_interfaces__msg__StopTestingRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
bool
live_analysis_interfaces__msg__StopTestingRequest__init(live_analysis_interfaces__msg__StopTestingRequest * msg);

/// Finalize msg/StopTestingRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
void
live_analysis_interfaces__msg__StopTestingRequest__fini(live_analysis_interfaces__msg__StopTestingRequest * msg);

/// Create msg/StopTestingRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * live_analysis_interfaces__msg__StopTestingRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
live_analysis_interfaces__msg__StopTestingRequest *
live_analysis_interfaces__msg__StopTestingRequest__create();

/// Destroy msg/StopTestingRequest message.
/**
 * It calls
 * live_analysis_interfaces__msg__StopTestingRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
void
live_analysis_interfaces__msg__StopTestingRequest__destroy(live_analysis_interfaces__msg__StopTestingRequest * msg);


/// Initialize array of msg/StopTestingRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * live_analysis_interfaces__msg__StopTestingRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
bool
live_analysis_interfaces__msg__StopTestingRequest__Sequence__init(live_analysis_interfaces__msg__StopTestingRequest__Sequence * array, size_t size);

/// Finalize array of msg/StopTestingRequest messages.
/**
 * It calls
 * live_analysis_interfaces__msg__StopTestingRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
void
live_analysis_interfaces__msg__StopTestingRequest__Sequence__fini(live_analysis_interfaces__msg__StopTestingRequest__Sequence * array);

/// Create array of msg/StopTestingRequest messages.
/**
 * It allocates the memory for the array and calls
 * live_analysis_interfaces__msg__StopTestingRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
live_analysis_interfaces__msg__StopTestingRequest__Sequence *
live_analysis_interfaces__msg__StopTestingRequest__Sequence__create(size_t size);

/// Destroy array of msg/StopTestingRequest messages.
/**
 * It calls
 * live_analysis_interfaces__msg__StopTestingRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
void
live_analysis_interfaces__msg__StopTestingRequest__Sequence__destroy(live_analysis_interfaces__msg__StopTestingRequest__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__STOP_TESTING_REQUEST__FUNCTIONS_H_
