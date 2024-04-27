// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trajectory_op:srv/Saver.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_OP__SRV__DETAIL__SAVER__STRUCT_H_
#define TRAJECTORY_OP__SRV__DETAIL__SAVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Saver in the package trajectory_op.
typedef struct trajectory_op__srv__Saver_Request
{
  int64_t duration;
} trajectory_op__srv__Saver_Request;

// Struct for a sequence of trajectory_op__srv__Saver_Request.
typedef struct trajectory_op__srv__Saver_Request__Sequence
{
  trajectory_op__srv__Saver_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_op__srv__Saver_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Saver in the package trajectory_op.
typedef struct trajectory_op__srv__Saver_Response
{
  bool result;
} trajectory_op__srv__Saver_Response;

// Struct for a sequence of trajectory_op__srv__Saver_Response.
typedef struct trajectory_op__srv__Saver_Response__Sequence
{
  trajectory_op__srv__Saver_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_op__srv__Saver_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_OP__SRV__DETAIL__SAVER__STRUCT_H_
