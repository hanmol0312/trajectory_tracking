// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trajectory_op:srv/Saver.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_OP__SRV__DETAIL__SAVER__TRAITS_HPP_
#define TRAJECTORY_OP__SRV__DETAIL__SAVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "trajectory_op/srv/detail/saver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace trajectory_op
{

namespace srv
{

inline void to_flow_style_yaml(
  const Saver_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Saver_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Saver_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace trajectory_op

namespace rosidl_generator_traits
{

[[deprecated("use trajectory_op::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const trajectory_op::srv::Saver_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  trajectory_op::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use trajectory_op::srv::to_yaml() instead")]]
inline std::string to_yaml(const trajectory_op::srv::Saver_Request & msg)
{
  return trajectory_op::srv::to_yaml(msg);
}

template<>
inline const char * data_type<trajectory_op::srv::Saver_Request>()
{
  return "trajectory_op::srv::Saver_Request";
}

template<>
inline const char * name<trajectory_op::srv::Saver_Request>()
{
  return "trajectory_op/srv/Saver_Request";
}

template<>
struct has_fixed_size<trajectory_op::srv::Saver_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<trajectory_op::srv::Saver_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<trajectory_op::srv::Saver_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace trajectory_op
{

namespace srv
{

inline void to_flow_style_yaml(
  const Saver_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Saver_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Saver_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace trajectory_op

namespace rosidl_generator_traits
{

[[deprecated("use trajectory_op::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const trajectory_op::srv::Saver_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  trajectory_op::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use trajectory_op::srv::to_yaml() instead")]]
inline std::string to_yaml(const trajectory_op::srv::Saver_Response & msg)
{
  return trajectory_op::srv::to_yaml(msg);
}

template<>
inline const char * data_type<trajectory_op::srv::Saver_Response>()
{
  return "trajectory_op::srv::Saver_Response";
}

template<>
inline const char * name<trajectory_op::srv::Saver_Response>()
{
  return "trajectory_op/srv/Saver_Response";
}

template<>
struct has_fixed_size<trajectory_op::srv::Saver_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<trajectory_op::srv::Saver_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<trajectory_op::srv::Saver_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<trajectory_op::srv::Saver>()
{
  return "trajectory_op::srv::Saver";
}

template<>
inline const char * name<trajectory_op::srv::Saver>()
{
  return "trajectory_op/srv/Saver";
}

template<>
struct has_fixed_size<trajectory_op::srv::Saver>
  : std::integral_constant<
    bool,
    has_fixed_size<trajectory_op::srv::Saver_Request>::value &&
    has_fixed_size<trajectory_op::srv::Saver_Response>::value
  >
{
};

template<>
struct has_bounded_size<trajectory_op::srv::Saver>
  : std::integral_constant<
    bool,
    has_bounded_size<trajectory_op::srv::Saver_Request>::value &&
    has_bounded_size<trajectory_op::srv::Saver_Response>::value
  >
{
};

template<>
struct is_service<trajectory_op::srv::Saver>
  : std::true_type
{
};

template<>
struct is_service_request<trajectory_op::srv::Saver_Request>
  : std::true_type
{
};

template<>
struct is_service_response<trajectory_op::srv::Saver_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TRAJECTORY_OP__SRV__DETAIL__SAVER__TRAITS_HPP_
