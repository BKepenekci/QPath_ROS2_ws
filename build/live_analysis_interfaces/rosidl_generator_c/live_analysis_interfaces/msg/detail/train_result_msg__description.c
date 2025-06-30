// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from live_analysis_interfaces:msg/TrainResultMsg.idl
// generated code does not contain a copyright notice

#include "live_analysis_interfaces/msg/detail/train_result_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_live_analysis_interfaces
const rosidl_type_hash_t *
live_analysis_interfaces__msg__TrainResultMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x58, 0x67, 0x06, 0xfc, 0x4e, 0x10, 0xb5,
      0x93, 0x19, 0xa6, 0xb8, 0xc7, 0xf2, 0x64, 0x09,
      0xef, 0xaa, 0x82, 0x47, 0xf8, 0xdf, 0x55, 0xa4,
      0xae, 0xca, 0x2b, 0x1b, 0xd1, 0xda, 0xb4, 0xcd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char live_analysis_interfaces__msg__TrainResultMsg__TYPE_NAME[] = "live_analysis_interfaces/msg/TrainResultMsg";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__header[] = "header";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__id[] = "id";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__model_name[] = "model_name";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__model_id[] = "model_id";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__total_time[] = "total_time";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__total_train_imgs[] = "total_train_imgs";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__total_eval_imgs[] = "total_eval_imgs";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__m_ap[] = "m_ap";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__duration[] = "duration";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__model_path[] = "model_path";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__training_completed[] = "training_completed";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__epoc[] = "epoc";
static char live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__current_epoc[] = "current_epoc";

static rosidl_runtime_c__type_description__Field live_analysis_interfaces__msg__TrainResultMsg__FIELDS[] = {
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__model_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__model_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__total_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__total_train_imgs, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__total_eval_imgs, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__m_ap, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__model_path, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__training_completed, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__epoc, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {live_analysis_interfaces__msg__TrainResultMsg__FIELD_NAME__current_epoc, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription live_analysis_interfaces__msg__TrainResultMsg__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
live_analysis_interfaces__msg__TrainResultMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {live_analysis_interfaces__msg__TrainResultMsg__TYPE_NAME, 43, 43},
      {live_analysis_interfaces__msg__TrainResultMsg__FIELDS, 13, 13},
    },
    {live_analysis_interfaces__msg__TrainResultMsg__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "string id\n"
  "string model_name\n"
  "string model_id\n"
  "float32 total_time\n"
  "int32 total_train_imgs\n"
  "int32 total_eval_imgs\n"
  "float32 m_ap\n"
  "float32 duration\n"
  "string model_path\n"
  "bool training_completed\n"
  "int32 epoc\n"
  "int32 current_epoc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
live_analysis_interfaces__msg__TrainResultMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {live_analysis_interfaces__msg__TrainResultMsg__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 233, 233},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
live_analysis_interfaces__msg__TrainResultMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *live_analysis_interfaces__msg__TrainResultMsg__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
