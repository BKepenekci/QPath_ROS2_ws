// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from live_analysis_interfaces:msg/TrainAlgorithmMsg.idl
// generated code does not contain a copyright notice
#include "live_analysis_interfaces/msg/detail/train_algorithm_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "live_analysis_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "live_analysis_interfaces/msg/detail/train_algorithm_msg__struct.h"
#include "live_analysis_interfaces/msg/detail/train_algorithm_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // algorithm_id, algorithm_name, eval_set_annotations, gpu, id, model_id, model_name, model_path, train_set_annotations
#include "rosidl_runtime_c/string_functions.h"  // algorithm_id, algorithm_name, eval_set_annotations, gpu, id, model_id, model_name, model_path, train_set_annotations
#include "sensor_msgs/msg/detail/image__functions.h"  // eval_images, train_images
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_serialize_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_deserialize_sensor_msgs__msg__Image(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__Image * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_serialize_key_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t get_serialized_size_key_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t max_serialized_size_key_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_live_analysis_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _TrainAlgorithmMsg__ros_msg_type = live_analysis_interfaces__msg__TrainAlgorithmMsg;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
bool cdr_serialize_live_analysis_interfaces__msg__TrainAlgorithmMsg(
  const live_analysis_interfaces__msg__TrainAlgorithmMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model_name
  {
    const rosidl_runtime_c__String * str = &ros_message->model_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model_id
  {
    const rosidl_runtime_c__String * str = &ros_message->model_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: train_images
  {
    size_t size = ros_message->train_images.size;
    auto array_ptr = ros_message->train_images.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_sensor_msgs__msg__Image(
        &array_ptr[i], cdr);
    }
  }

  // Field name: eval_images
  {
    size_t size = ros_message->eval_images.size;
    auto array_ptr = ros_message->eval_images.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_sensor_msgs__msg__Image(
        &array_ptr[i], cdr);
    }
  }

  // Field name: train_set_annotations
  {
    size_t size = ros_message->train_set_annotations.size;
    auto array_ptr = ros_message->train_set_annotations.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: eval_set_annotations
  {
    size_t size = ros_message->eval_set_annotations.size;
    auto array_ptr = ros_message->eval_set_annotations.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: epoc
  {
    cdr << ros_message->epoc;
  }

  // Field name: batchsize
  {
    cdr << ros_message->batchsize;
  }

  // Field name: algorithm_id
  {
    const rosidl_runtime_c__String * str = &ros_message->algorithm_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: algorithm_name
  {
    const rosidl_runtime_c__String * str = &ros_message->algorithm_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: gpu
  {
    const rosidl_runtime_c__String * str = &ros_message->gpu;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model_path
  {
    const rosidl_runtime_c__String * str = &ros_message->model_path;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: files_completed
  {
    cdr << (ros_message->files_completed ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
bool cdr_deserialize_live_analysis_interfaces__msg__TrainAlgorithmMsg(
  eprosima::fastcdr::Cdr & cdr,
  live_analysis_interfaces__msg__TrainAlgorithmMsg * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: model_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model_name.data) {
      rosidl_runtime_c__String__init(&ros_message->model_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model_name'\n");
      return false;
    }
  }

  // Field name: model_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model_id.data) {
      rosidl_runtime_c__String__init(&ros_message->model_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model_id'\n");
      return false;
    }
  }

  // Field name: train_images
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->train_images.data) {
      sensor_msgs__msg__Image__Sequence__fini(&ros_message->train_images);
    }
    if (!sensor_msgs__msg__Image__Sequence__init(&ros_message->train_images, size)) {
      fprintf(stderr, "failed to create array for field 'train_images'");
      return false;
    }
    auto array_ptr = ros_message->train_images.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_sensor_msgs__msg__Image(cdr, &array_ptr[i]);
    }
  }

  // Field name: eval_images
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->eval_images.data) {
      sensor_msgs__msg__Image__Sequence__fini(&ros_message->eval_images);
    }
    if (!sensor_msgs__msg__Image__Sequence__init(&ros_message->eval_images, size)) {
      fprintf(stderr, "failed to create array for field 'eval_images'");
      return false;
    }
    auto array_ptr = ros_message->eval_images.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_sensor_msgs__msg__Image(cdr, &array_ptr[i]);
    }
  }

  // Field name: train_set_annotations
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->train_set_annotations.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->train_set_annotations);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->train_set_annotations, size)) {
      fprintf(stderr, "failed to create array for field 'train_set_annotations'");
      return false;
    }
    auto array_ptr = ros_message->train_set_annotations.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'train_set_annotations'\n");
        return false;
      }
    }
  }

  // Field name: eval_set_annotations
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->eval_set_annotations.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->eval_set_annotations);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->eval_set_annotations, size)) {
      fprintf(stderr, "failed to create array for field 'eval_set_annotations'");
      return false;
    }
    auto array_ptr = ros_message->eval_set_annotations.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'eval_set_annotations'\n");
        return false;
      }
    }
  }

  // Field name: epoc
  {
    cdr >> ros_message->epoc;
  }

  // Field name: batchsize
  {
    cdr >> ros_message->batchsize;
  }

  // Field name: algorithm_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->algorithm_id.data) {
      rosidl_runtime_c__String__init(&ros_message->algorithm_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->algorithm_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'algorithm_id'\n");
      return false;
    }
  }

  // Field name: algorithm_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->algorithm_name.data) {
      rosidl_runtime_c__String__init(&ros_message->algorithm_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->algorithm_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'algorithm_name'\n");
      return false;
    }
  }

  // Field name: gpu
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gpu.data) {
      rosidl_runtime_c__String__init(&ros_message->gpu);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gpu,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gpu'\n");
      return false;
    }
  }

  // Field name: model_path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model_path.data) {
      rosidl_runtime_c__String__init(&ros_message->model_path);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model_path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model_path'\n");
      return false;
    }
  }

  // Field name: files_completed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->files_completed = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t get_serialized_size_live_analysis_interfaces__msg__TrainAlgorithmMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrainAlgorithmMsg__ros_msg_type * ros_message = static_cast<const _TrainAlgorithmMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);

  // Field name: model_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_name.size + 1);

  // Field name: model_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_id.size + 1);

  // Field name: train_images
  {
    size_t array_size = ros_message->train_images.size;
    auto array_ptr = ros_message->train_images.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sensor_msgs__msg__Image(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: eval_images
  {
    size_t array_size = ros_message->eval_images.size;
    auto array_ptr = ros_message->eval_images.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sensor_msgs__msg__Image(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: train_set_annotations
  {
    size_t array_size = ros_message->train_set_annotations.size;
    auto array_ptr = ros_message->train_set_annotations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: eval_set_annotations
  {
    size_t array_size = ros_message->eval_set_annotations.size;
    auto array_ptr = ros_message->eval_set_annotations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: epoc
  {
    size_t item_size = sizeof(ros_message->epoc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: batchsize
  {
    size_t item_size = sizeof(ros_message->batchsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: algorithm_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->algorithm_id.size + 1);

  // Field name: algorithm_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->algorithm_name.size + 1);

  // Field name: gpu
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gpu.size + 1);

  // Field name: model_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_path.size + 1);

  // Field name: files_completed
  {
    size_t item_size = sizeof(ros_message->files_completed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t max_serialized_size_live_analysis_interfaces__msg__TrainAlgorithmMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: model_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: model_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: train_images
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: eval_images
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: train_set_annotations
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: eval_set_annotations
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: epoc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: batchsize
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: algorithm_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: algorithm_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: gpu
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: model_path
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: files_completed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = live_analysis_interfaces__msg__TrainAlgorithmMsg;
    is_plain =
      (
      offsetof(DataType, files_completed) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
bool cdr_serialize_key_live_analysis_interfaces__msg__TrainAlgorithmMsg(
  const live_analysis_interfaces__msg__TrainAlgorithmMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model_name
  {
    const rosidl_runtime_c__String * str = &ros_message->model_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model_id
  {
    const rosidl_runtime_c__String * str = &ros_message->model_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: train_images
  {
    size_t size = ros_message->train_images.size;
    auto array_ptr = ros_message->train_images.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_sensor_msgs__msg__Image(
        &array_ptr[i], cdr);
    }
  }

  // Field name: eval_images
  {
    size_t size = ros_message->eval_images.size;
    auto array_ptr = ros_message->eval_images.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_sensor_msgs__msg__Image(
        &array_ptr[i], cdr);
    }
  }

  // Field name: train_set_annotations
  {
    size_t size = ros_message->train_set_annotations.size;
    auto array_ptr = ros_message->train_set_annotations.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: eval_set_annotations
  {
    size_t size = ros_message->eval_set_annotations.size;
    auto array_ptr = ros_message->eval_set_annotations.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: epoc
  {
    cdr << ros_message->epoc;
  }

  // Field name: batchsize
  {
    cdr << ros_message->batchsize;
  }

  // Field name: algorithm_id
  {
    const rosidl_runtime_c__String * str = &ros_message->algorithm_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: algorithm_name
  {
    const rosidl_runtime_c__String * str = &ros_message->algorithm_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: gpu
  {
    const rosidl_runtime_c__String * str = &ros_message->gpu;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model_path
  {
    const rosidl_runtime_c__String * str = &ros_message->model_path;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: files_completed
  {
    cdr << (ros_message->files_completed ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t get_serialized_size_key_live_analysis_interfaces__msg__TrainAlgorithmMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrainAlgorithmMsg__ros_msg_type * ros_message = static_cast<const _TrainAlgorithmMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);

  // Field name: model_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_name.size + 1);

  // Field name: model_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_id.size + 1);

  // Field name: train_images
  {
    size_t array_size = ros_message->train_images.size;
    auto array_ptr = ros_message->train_images.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_sensor_msgs__msg__Image(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: eval_images
  {
    size_t array_size = ros_message->eval_images.size;
    auto array_ptr = ros_message->eval_images.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_sensor_msgs__msg__Image(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: train_set_annotations
  {
    size_t array_size = ros_message->train_set_annotations.size;
    auto array_ptr = ros_message->train_set_annotations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: eval_set_annotations
  {
    size_t array_size = ros_message->eval_set_annotations.size;
    auto array_ptr = ros_message->eval_set_annotations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: epoc
  {
    size_t item_size = sizeof(ros_message->epoc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: batchsize
  {
    size_t item_size = sizeof(ros_message->batchsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: algorithm_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->algorithm_id.size + 1);

  // Field name: algorithm_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->algorithm_name.size + 1);

  // Field name: gpu
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gpu.size + 1);

  // Field name: model_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_path.size + 1);

  // Field name: files_completed
  {
    size_t item_size = sizeof(ros_message->files_completed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_live_analysis_interfaces
size_t max_serialized_size_key_live_analysis_interfaces__msg__TrainAlgorithmMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: model_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: model_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: train_images
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: eval_images
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: train_set_annotations
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: eval_set_annotations
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: epoc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: batchsize
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: algorithm_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: algorithm_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: gpu
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: model_path
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: files_completed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = live_analysis_interfaces__msg__TrainAlgorithmMsg;
    is_plain =
      (
      offsetof(DataType, files_completed) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TrainAlgorithmMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const live_analysis_interfaces__msg__TrainAlgorithmMsg * ros_message = static_cast<const live_analysis_interfaces__msg__TrainAlgorithmMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_live_analysis_interfaces__msg__TrainAlgorithmMsg(ros_message, cdr);
}

static bool _TrainAlgorithmMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  live_analysis_interfaces__msg__TrainAlgorithmMsg * ros_message = static_cast<live_analysis_interfaces__msg__TrainAlgorithmMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_live_analysis_interfaces__msg__TrainAlgorithmMsg(cdr, ros_message);
}

static uint32_t _TrainAlgorithmMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_live_analysis_interfaces__msg__TrainAlgorithmMsg(
      untyped_ros_message, 0));
}

static size_t _TrainAlgorithmMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_live_analysis_interfaces__msg__TrainAlgorithmMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrainAlgorithmMsg = {
  "live_analysis_interfaces::msg",
  "TrainAlgorithmMsg",
  _TrainAlgorithmMsg__cdr_serialize,
  _TrainAlgorithmMsg__cdr_deserialize,
  _TrainAlgorithmMsg__get_serialized_size,
  _TrainAlgorithmMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TrainAlgorithmMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrainAlgorithmMsg,
  get_message_typesupport_handle_function,
  &live_analysis_interfaces__msg__TrainAlgorithmMsg__get_type_hash,
  &live_analysis_interfaces__msg__TrainAlgorithmMsg__get_type_description,
  &live_analysis_interfaces__msg__TrainAlgorithmMsg__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, live_analysis_interfaces, msg, TrainAlgorithmMsg)() {
  return &_TrainAlgorithmMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
