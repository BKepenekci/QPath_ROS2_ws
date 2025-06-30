// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from live_analysis_interfaces:msg/TestModelMsg.idl
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
#include "live_analysis_interfaces/msg/detail/test_model_msg__struct.h"
#include "live_analysis_interfaces/msg/detail/test_model_msg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "sensor_msgs/msg/detail/image__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__image__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool live_analysis_interfaces__msg__test_model_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("live_analysis_interfaces.msg._test_model_msg.TestModelMsg", full_classname_dest, 57) == 0);
  }
  live_analysis_interfaces__msg__TestModelMsg * ros_message = _ros_message;
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
  {  // with_bounding_box
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_bounding_box");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_bounding_box = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gpu
    PyObject * field = PyObject_GetAttrString(_pymsg, "gpu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gpu = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // area_th
    PyObject * field = PyObject_GetAttrString(_pymsg, "area_th");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->area_th = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // confidance_th
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidance_th");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->confidance_th = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // images
    PyObject * field = PyObject_GetAttrString(_pymsg, "images");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'images'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!sensor_msgs__msg__Image__Sequence__init(&(ros_message->images), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create sensor_msgs__msg__Image__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    sensor_msgs__msg__Image * dest = ros_message->images.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!sensor_msgs__msg__image__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * live_analysis_interfaces__msg__test_model_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TestModelMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("live_analysis_interfaces.msg._test_model_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TestModelMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  live_analysis_interfaces__msg__TestModelMsg * ros_message = (live_analysis_interfaces__msg__TestModelMsg *)raw_ros_message;
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
  {  // with_bounding_box
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_bounding_box ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_bounding_box", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gpu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gpu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gpu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area_th
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->area_th);
    {
      int rc = PyObject_SetAttrString(_pymessage, "area_th", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidance_th
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->confidance_th);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidance_th", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // images
    PyObject * field = NULL;
    size_t size = ros_message->images.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    sensor_msgs__msg__Image * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->images.data[i]);
      PyObject * pyitem = sensor_msgs__msg__image__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "images", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
