// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from live_analysis_interfaces:msg/TrainResultMsg.idl
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
#include "live_analysis_interfaces/msg/detail/train_result_msg__struct.h"
#include "live_analysis_interfaces/msg/detail/train_result_msg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool live_analysis_interfaces__msg__train_result_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("live_analysis_interfaces.msg._train_result_msg.TrainResultMsg", full_classname_dest, 61) == 0);
  }
  live_analysis_interfaces__msg__TrainResultMsg * ros_message = _ros_message;
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
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // model_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "model_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->model_name, PyBytes_AS_STRING(encoded_field));
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
  {  // total_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_train_imgs
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_train_imgs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_train_imgs = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // total_eval_imgs
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_eval_imgs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_eval_imgs = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // m_ap
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_ap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m_ap = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // model_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "model_path");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->model_path, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // training_completed
    PyObject * field = PyObject_GetAttrString(_pymsg, "training_completed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->training_completed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // epoc
    PyObject * field = PyObject_GetAttrString(_pymsg, "epoc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epoc = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // current_epoc
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_epoc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_epoc = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * live_analysis_interfaces__msg__train_result_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrainResultMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("live_analysis_interfaces.msg._train_result_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrainResultMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  live_analysis_interfaces__msg__TrainResultMsg * ros_message = (live_analysis_interfaces__msg__TrainResultMsg *)raw_ros_message;
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
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // model_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->model_name.data,
      strlen(ros_message->model_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "model_name", field);
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
      "replace");
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
  {  // total_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_train_imgs
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->total_train_imgs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_train_imgs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_eval_imgs
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->total_eval_imgs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_eval_imgs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_ap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m_ap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_ap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // model_path
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->model_path.data,
      strlen(ros_message->model_path.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "model_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // training_completed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->training_completed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "training_completed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epoc
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->epoc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epoc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_epoc
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_epoc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_epoc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
