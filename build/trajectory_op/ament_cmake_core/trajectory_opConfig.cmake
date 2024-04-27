# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_trajectory_op_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED trajectory_op_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(trajectory_op_FOUND FALSE)
  elseif(NOT trajectory_op_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(trajectory_op_FOUND FALSE)
  endif()
  return()
endif()
set(_trajectory_op_CONFIG_INCLUDED TRUE)

# output package information
if(NOT trajectory_op_FIND_QUIETLY)
  message(STATUS "Found trajectory_op: 0.0.0 (${trajectory_op_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'trajectory_op' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${trajectory_op_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(trajectory_op_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${trajectory_op_DIR}/${_extra}")
endforeach()
