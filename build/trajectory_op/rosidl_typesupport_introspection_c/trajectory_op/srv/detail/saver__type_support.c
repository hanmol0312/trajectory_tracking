// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from trajectory_op:srv/Saver.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "trajectory_op/srv/detail/saver__rosidl_typesupport_introspection_c.h"
#include "trajectory_op/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "trajectory_op/srv/detail/saver__functions.h"
#include "trajectory_op/srv/detail/saver__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trajectory_op__srv__Saver_Request__init(message_memory);
}

void trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_fini_function(void * message_memory)
{
  trajectory_op__srv__Saver_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_message_member_array[1] = {
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_op__srv__Saver_Request, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_message_members = {
  "trajectory_op__srv",  // message namespace
  "Saver_Request",  // message name
  1,  // number of fields
  sizeof(trajectory_op__srv__Saver_Request),
  trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_message_member_array,  // message members
  trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_message_type_support_handle = {
  0,
  &trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trajectory_op
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_op, srv, Saver_Request)() {
  if (!trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_message_type_support_handle.typesupport_identifier) {
    trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &trajectory_op__srv__Saver_Request__rosidl_typesupport_introspection_c__Saver_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "trajectory_op/srv/detail/saver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "trajectory_op/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "trajectory_op/srv/detail/saver__functions.h"
// already included above
// #include "trajectory_op/srv/detail/saver__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trajectory_op__srv__Saver_Response__init(message_memory);
}

void trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_fini_function(void * message_memory)
{
  trajectory_op__srv__Saver_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_op__srv__Saver_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_message_members = {
  "trajectory_op__srv",  // message namespace
  "Saver_Response",  // message name
  1,  // number of fields
  sizeof(trajectory_op__srv__Saver_Response),
  trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_message_member_array,  // message members
  trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_message_type_support_handle = {
  0,
  &trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trajectory_op
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_op, srv, Saver_Response)() {
  if (!trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_message_type_support_handle.typesupport_identifier) {
    trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &trajectory_op__srv__Saver_Response__rosidl_typesupport_introspection_c__Saver_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "trajectory_op/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "trajectory_op/srv/detail/saver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers trajectory_op__srv__detail__saver__rosidl_typesupport_introspection_c__Saver_service_members = {
  "trajectory_op__srv",  // service namespace
  "Saver",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // trajectory_op__srv__detail__saver__rosidl_typesupport_introspection_c__Saver_Request_message_type_support_handle,
  NULL  // response message
  // trajectory_op__srv__detail__saver__rosidl_typesupport_introspection_c__Saver_Response_message_type_support_handle
};

static rosidl_service_type_support_t trajectory_op__srv__detail__saver__rosidl_typesupport_introspection_c__Saver_service_type_support_handle = {
  0,
  &trajectory_op__srv__detail__saver__rosidl_typesupport_introspection_c__Saver_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_op, srv, Saver_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_op, srv, Saver_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trajectory_op
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_op, srv, Saver)() {
  if (!trajectory_op__srv__detail__saver__rosidl_typesupport_introspection_c__Saver_service_type_support_handle.typesupport_identifier) {
    trajectory_op__srv__detail__saver__rosidl_typesupport_introspection_c__Saver_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)trajectory_op__srv__detail__saver__rosidl_typesupport_introspection_c__Saver_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_op, srv, Saver_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_op, srv, Saver_Response)()->data;
  }

  return &trajectory_op__srv__detail__saver__rosidl_typesupport_introspection_c__Saver_service_type_support_handle;
}
