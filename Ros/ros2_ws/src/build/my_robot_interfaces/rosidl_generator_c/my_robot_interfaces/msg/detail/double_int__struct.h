// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/DoubleINT.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__DOUBLE_INT__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__DOUBLE_INT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DoubleINT in the package my_robot_interfaces.
typedef struct my_robot_interfaces__msg__DoubleINT
{
  int64_t x;
  int64_t y;
} my_robot_interfaces__msg__DoubleINT;

// Struct for a sequence of my_robot_interfaces__msg__DoubleINT.
typedef struct my_robot_interfaces__msg__DoubleINT__Sequence
{
  my_robot_interfaces__msg__DoubleINT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__DoubleINT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__DOUBLE_INT__STRUCT_H_
