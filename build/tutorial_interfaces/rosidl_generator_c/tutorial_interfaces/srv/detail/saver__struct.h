// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/Saver.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SAVER__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SAVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Saver in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__Saver_Request
{
  int64_t duration;
} tutorial_interfaces__srv__Saver_Request;

// Struct for a sequence of tutorial_interfaces__srv__Saver_Request.
typedef struct tutorial_interfaces__srv__Saver_Request__Sequence
{
  tutorial_interfaces__srv__Saver_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__Saver_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Saver in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__Saver_Response
{
  bool result;
} tutorial_interfaces__srv__Saver_Response;

// Struct for a sequence of tutorial_interfaces__srv__Saver_Response.
typedef struct tutorial_interfaces__srv__Saver_Response__Sequence
{
  tutorial_interfaces__srv__Saver_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__Saver_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SAVER__STRUCT_H_
