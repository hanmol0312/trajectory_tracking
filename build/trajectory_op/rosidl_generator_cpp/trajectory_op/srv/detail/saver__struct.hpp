// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from trajectory_op:srv/Saver.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_OP__SRV__DETAIL__SAVER__STRUCT_HPP_
#define TRAJECTORY_OP__SRV__DETAIL__SAVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__trajectory_op__srv__Saver_Request __attribute__((deprecated))
#else
# define DEPRECATED__trajectory_op__srv__Saver_Request __declspec(deprecated)
#endif

namespace trajectory_op
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Saver_Request_
{
  using Type = Saver_Request_<ContainerAllocator>;

  explicit Saver_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0ll;
    }
  }

  explicit Saver_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0ll;
    }
  }

  // field types and members
  using _duration_type =
    int64_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__duration(
    const int64_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trajectory_op::srv::Saver_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const trajectory_op::srv::Saver_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trajectory_op::srv::Saver_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trajectory_op::srv::Saver_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trajectory_op::srv::Saver_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trajectory_op::srv::Saver_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trajectory_op::srv::Saver_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trajectory_op::srv::Saver_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trajectory_op::srv::Saver_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trajectory_op::srv::Saver_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trajectory_op__srv__Saver_Request
    std::shared_ptr<trajectory_op::srv::Saver_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trajectory_op__srv__Saver_Request
    std::shared_ptr<trajectory_op::srv::Saver_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Saver_Request_ & other) const
  {
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Saver_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Saver_Request_

// alias to use template instance with default allocator
using Saver_Request =
  trajectory_op::srv::Saver_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace trajectory_op


#ifndef _WIN32
# define DEPRECATED__trajectory_op__srv__Saver_Response __attribute__((deprecated))
#else
# define DEPRECATED__trajectory_op__srv__Saver_Response __declspec(deprecated)
#endif

namespace trajectory_op
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Saver_Response_
{
  using Type = Saver_Response_<ContainerAllocator>;

  explicit Saver_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit Saver_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trajectory_op::srv::Saver_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const trajectory_op::srv::Saver_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trajectory_op::srv::Saver_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trajectory_op::srv::Saver_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trajectory_op::srv::Saver_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trajectory_op::srv::Saver_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trajectory_op::srv::Saver_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trajectory_op::srv::Saver_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trajectory_op::srv::Saver_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trajectory_op::srv::Saver_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trajectory_op__srv__Saver_Response
    std::shared_ptr<trajectory_op::srv::Saver_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trajectory_op__srv__Saver_Response
    std::shared_ptr<trajectory_op::srv::Saver_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Saver_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Saver_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Saver_Response_

// alias to use template instance with default allocator
using Saver_Response =
  trajectory_op::srv::Saver_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace trajectory_op

namespace trajectory_op
{

namespace srv
{

struct Saver
{
  using Request = trajectory_op::srv::Saver_Request;
  using Response = trajectory_op::srv::Saver_Response;
};

}  // namespace srv

}  // namespace trajectory_op

#endif  // TRAJECTORY_OP__SRV__DETAIL__SAVER__STRUCT_HPP_
