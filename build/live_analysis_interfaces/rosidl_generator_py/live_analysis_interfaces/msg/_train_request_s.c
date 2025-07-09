// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from live_analysis_interfaces:msg/TrainRequest.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "live_analysis_interfaces/msg/detail/train_request__struct.h"
#include "live_analysis_interfaces/msg/detail/train_request__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool live_analysis_interfaces__msg__train_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("live_analysis_interfaces.msg._train_request.TrainRequest", full_classname_dest, 56) == 0);
  }
  live_analysis_interfaces__msg__TrainRequest * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // user_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->user_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // algorithm_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "algorithm_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->algorithm_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // model_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "model_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->model_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // epochs
    PyObject * field = PyObject_GetAttrString(_pymsg, "epochs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epochs = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // min_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // batch_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "batch_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->batch_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gpu
    PyObject * field = PyObject_GetAttrString(_pymsg, "gpu");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->gpu, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sample_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "sample_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sample_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // use_detection
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_detection");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_detection = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_label
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_label");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_label = (Py_True == field);
    Py_DECREF(field);
  }
  {  // data_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_class");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->data_class, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * live_analysis_interfaces__msg__train_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrainRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("live_analysis_interfaces.msg._train_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrainRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  live_analysis_interfaces__msg__TrainRequest * ros_message = (live_analysis_interfaces__msg__TrainRequest *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->user_id.data,
      strlen(ros_message->user_id.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // algorithm_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->algorithm_id.data,
      strlen(ros_message->algorithm_id.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "algorithm_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // model_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->model_id.data,
      strlen(ros_message->model_id.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "model_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epochs
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->epochs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epochs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batch_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->batch_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batch_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gpu
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->gpu.data,
      strlen(ros_message->gpu.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gpu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sample_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sample_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sample_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_detection
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_detection ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_detection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_label
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_label ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_class
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->data_class.data,
      strlen(ros_message->data_class.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
