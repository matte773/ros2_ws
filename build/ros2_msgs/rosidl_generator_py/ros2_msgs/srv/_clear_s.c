// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_msgs:srv/Clear.idl
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
#include "ros2_msgs/srv/detail/clear__struct.h"
#include "ros2_msgs/srv/detail/clear__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_msgs__srv__clear__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("ros2_msgs.srv._clear.Clear_Request", full_classname_dest, 34) == 0);
  }
  ros2_msgs__srv__Clear_Request * ros_message = _ros_message;
  {  // reset
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_msgs__srv__clear__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Clear_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_msgs.srv._clear");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Clear_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_msgs__srv__Clear_Request * ros_message = (ros2_msgs__srv__Clear_Request *)raw_ros_message;
  {  // reset
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "ros2_msgs/srv/detail/clear__struct.h"
// already included above
// #include "ros2_msgs/srv/detail/clear__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_msgs__srv__clear__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("ros2_msgs.srv._clear.Clear_Response", full_classname_dest, 35) == 0);
  }
  ros2_msgs__srv__Clear_Response * ros_message = _ros_message;
  {  // done
    PyObject * field = PyObject_GetAttrString(_pymsg, "done");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->done = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_msgs__srv__clear__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Clear_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_msgs.srv._clear");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Clear_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_msgs__srv__Clear_Response * ros_message = (ros2_msgs__srv__Clear_Response *)raw_ros_message;
  {  // done
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->done ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "done", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
