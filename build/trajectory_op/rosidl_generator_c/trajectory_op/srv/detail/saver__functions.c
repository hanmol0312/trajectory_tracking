// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from trajectory_op:srv/Saver.idl
// generated code does not contain a copyright notice
#include "trajectory_op/srv/detail/saver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
trajectory_op__srv__Saver_Request__init(trajectory_op__srv__Saver_Request * msg)
{
  if (!msg) {
    return false;
  }
  // duration
  return true;
}

void
trajectory_op__srv__Saver_Request__fini(trajectory_op__srv__Saver_Request * msg)
{
  if (!msg) {
    return;
  }
  // duration
}

bool
trajectory_op__srv__Saver_Request__are_equal(const trajectory_op__srv__Saver_Request * lhs, const trajectory_op__srv__Saver_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
trajectory_op__srv__Saver_Request__copy(
  const trajectory_op__srv__Saver_Request * input,
  trajectory_op__srv__Saver_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // duration
  output->duration = input->duration;
  return true;
}

trajectory_op__srv__Saver_Request *
trajectory_op__srv__Saver_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trajectory_op__srv__Saver_Request * msg = (trajectory_op__srv__Saver_Request *)allocator.allocate(sizeof(trajectory_op__srv__Saver_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trajectory_op__srv__Saver_Request));
  bool success = trajectory_op__srv__Saver_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
trajectory_op__srv__Saver_Request__destroy(trajectory_op__srv__Saver_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    trajectory_op__srv__Saver_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
trajectory_op__srv__Saver_Request__Sequence__init(trajectory_op__srv__Saver_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trajectory_op__srv__Saver_Request * data = NULL;

  if (size) {
    data = (trajectory_op__srv__Saver_Request *)allocator.zero_allocate(size, sizeof(trajectory_op__srv__Saver_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trajectory_op__srv__Saver_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trajectory_op__srv__Saver_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
trajectory_op__srv__Saver_Request__Sequence__fini(trajectory_op__srv__Saver_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      trajectory_op__srv__Saver_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

trajectory_op__srv__Saver_Request__Sequence *
trajectory_op__srv__Saver_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trajectory_op__srv__Saver_Request__Sequence * array = (trajectory_op__srv__Saver_Request__Sequence *)allocator.allocate(sizeof(trajectory_op__srv__Saver_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = trajectory_op__srv__Saver_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
trajectory_op__srv__Saver_Request__Sequence__destroy(trajectory_op__srv__Saver_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    trajectory_op__srv__Saver_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
trajectory_op__srv__Saver_Request__Sequence__are_equal(const trajectory_op__srv__Saver_Request__Sequence * lhs, const trajectory_op__srv__Saver_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!trajectory_op__srv__Saver_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
trajectory_op__srv__Saver_Request__Sequence__copy(
  const trajectory_op__srv__Saver_Request__Sequence * input,
  trajectory_op__srv__Saver_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(trajectory_op__srv__Saver_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    trajectory_op__srv__Saver_Request * data =
      (trajectory_op__srv__Saver_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!trajectory_op__srv__Saver_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          trajectory_op__srv__Saver_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!trajectory_op__srv__Saver_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
trajectory_op__srv__Saver_Response__init(trajectory_op__srv__Saver_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
trajectory_op__srv__Saver_Response__fini(trajectory_op__srv__Saver_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
trajectory_op__srv__Saver_Response__are_equal(const trajectory_op__srv__Saver_Response * lhs, const trajectory_op__srv__Saver_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
trajectory_op__srv__Saver_Response__copy(
  const trajectory_op__srv__Saver_Response * input,
  trajectory_op__srv__Saver_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

trajectory_op__srv__Saver_Response *
trajectory_op__srv__Saver_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trajectory_op__srv__Saver_Response * msg = (trajectory_op__srv__Saver_Response *)allocator.allocate(sizeof(trajectory_op__srv__Saver_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trajectory_op__srv__Saver_Response));
  bool success = trajectory_op__srv__Saver_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
trajectory_op__srv__Saver_Response__destroy(trajectory_op__srv__Saver_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    trajectory_op__srv__Saver_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
trajectory_op__srv__Saver_Response__Sequence__init(trajectory_op__srv__Saver_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trajectory_op__srv__Saver_Response * data = NULL;

  if (size) {
    data = (trajectory_op__srv__Saver_Response *)allocator.zero_allocate(size, sizeof(trajectory_op__srv__Saver_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trajectory_op__srv__Saver_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trajectory_op__srv__Saver_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
trajectory_op__srv__Saver_Response__Sequence__fini(trajectory_op__srv__Saver_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      trajectory_op__srv__Saver_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

trajectory_op__srv__Saver_Response__Sequence *
trajectory_op__srv__Saver_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trajectory_op__srv__Saver_Response__Sequence * array = (trajectory_op__srv__Saver_Response__Sequence *)allocator.allocate(sizeof(trajectory_op__srv__Saver_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = trajectory_op__srv__Saver_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
trajectory_op__srv__Saver_Response__Sequence__destroy(trajectory_op__srv__Saver_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    trajectory_op__srv__Saver_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
trajectory_op__srv__Saver_Response__Sequence__are_equal(const trajectory_op__srv__Saver_Response__Sequence * lhs, const trajectory_op__srv__Saver_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!trajectory_op__srv__Saver_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
trajectory_op__srv__Saver_Response__Sequence__copy(
  const trajectory_op__srv__Saver_Response__Sequence * input,
  trajectory_op__srv__Saver_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(trajectory_op__srv__Saver_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    trajectory_op__srv__Saver_Response * data =
      (trajectory_op__srv__Saver_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!trajectory_op__srv__Saver_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          trajectory_op__srv__Saver_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!trajectory_op__srv__Saver_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
