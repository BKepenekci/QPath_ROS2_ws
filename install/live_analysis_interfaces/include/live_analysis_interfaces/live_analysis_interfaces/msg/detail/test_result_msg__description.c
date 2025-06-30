// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from live_analysis_interfaces:msg/TestResultMsg.idl
// generated code does not contain a copyright notice

#include "live_analysis_interfaces/msg/detail/test_result_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
const rosidl_type_hash_t *
live_analysis_interfaces__msg__TestResultMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x8f, 0x06, 0xd6, 0x20, 0x69, 0x1c, 0x4a,
      0x71, 0xb1, 0x80, 0x80, 0x01, 0x48, 0x91, 0x3c,
      0x36, 0x39, 0x7c, 0xe7, 0xd4, 0x9f, 0x33, 0x71,
      0xb2, 0xf5, 0xc6, 0xcb, 0xc5, 0xd5, 0x00, 0xa1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "sensor_msgs/msg/detail/image__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__Image__EXPECTED_HASH = {1, {
    0xd3, 0x1d, 0x41, 0xa9, 0xa4, 0xc4, 0xbc, 0x8e,
    0xae, 0x9b, 0xe7, 0x57, 0xb0, 0xbe, 0xed, 0x30,
    0x65, 0x64, 0xf7, 0x52, 0x6c, 0x88, 0xea, 0x6a,
    0x45, 0x88, 0xfb, 0x95, 0x82, 0x52, 0x7d, 0x47,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char live_analysis_interfaces__msg__TestResultMsg__TYPE_NAME[] = "live_analysis_interfaces/msg/TestResultMsg";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sensor_msgs__msg__Image__TYPE_NAME[] = "sensor_msgs/msg/Image";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__header[] = "header";
static char live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__id[] = "id";
static char live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__total_imgs[] = "total_imgs";
static char live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__img_result_strs[] = "img_result_strs";
static char live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__img_result_confidance[] = "img_result_confidance";
static char live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__heat_maps[] = "heat_maps";
static char live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__result_imgs[] = "result_imgs";
static char live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__total_time[] = "total_time";

static rosidl_runtime_c__type_description__Field live_analysis_interfaces__msg__TestResultMsg__FIELDS[] = {
  {
    {live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__total_imgs, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__img_result_strs, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__img_result_confidance, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__heat_maps, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__result_imgs, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TestResultMsg__FIELD_NAME__total_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription live_analysis_interfaces__msg__TestResultMsg__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
live_analysis_interfaces__msg__TestResultMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {live_analysis_interfaces__msg__TestResultMsg__TYPE_NAME, 42, 42},
      {live_analysis_interfaces__msg__TestResultMsg__FIELDS, 8, 8},
    },
    {live_analysis_interfaces__msg__TestResultMsg__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# TestResultMsg.msg\n"
  "\n"
  "std_msgs/Header header\n"
  "string id\n"
  "int32 total_imgs\n"
  "string[] img_result_strs\n"
  "float32[] img_result_confidance\n"
  "sensor_msgs/Image[] heat_maps\n"
  "sensor_msgs/Image[] result_imgs\n"
  "float32 total_time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
live_analysis_interfaces__msg__TestResultMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {live_analysis_interfaces__msg__TestResultMsg__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 209, 209},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
live_analysis_interfaces__msg__TestResultMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *live_analysis_interfaces__msg__TestResultMsg__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
