// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trajectory_op:srv/Saver.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_OP__SRV__DETAIL__SAVER__BUILDER_HPP_
#define TRAJECTORY_OP__SRV__DETAIL__SAVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "trajectory_op/srv/detail/saver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace trajectory_op
{

namespace srv
{

namespace builder
{

class Init_Saver_Request_duration
{
public:
  Init_Saver_Request_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::trajectory_op::srv::Saver_Request duration(::trajectory_op::srv::Saver_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trajectory_op::srv::Saver_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trajectory_op::srv::Saver_Request>()
{
  return trajectory_op::srv::builder::Init_Saver_Request_duration();
}

}  // namespace trajectory_op


namespace trajectory_op
{

namespace srv
{

namespace builder
{

class Init_Saver_Response_result
{
public:
  Init_Saver_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::trajectory_op::srv::Saver_Response result(::trajectory_op::srv::Saver_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trajectory_op::srv::Saver_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trajectory_op::srv::Saver_Response>()
{
  return trajectory_op::srv::builder::Init_Saver_Response_result();
}

}  // namespace trajectory_op

#endif  // TRAJECTORY_OP__SRV__DETAIL__SAVER__BUILDER_HPP_
