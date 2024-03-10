// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_msgs:srv/Clear.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__SRV__DETAIL__CLEAR__STRUCT_HPP_
#define ROS2_MSGS__SRV__DETAIL__CLEAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_msgs__srv__Clear_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_msgs__srv__Clear_Request __declspec(deprecated)
#endif

namespace ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Clear_Request_
{
  using Type = Clear_Request_<ContainerAllocator>;

  explicit Clear_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset = false;
    }
  }

  explicit Clear_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset = false;
    }
  }

  // field types and members
  using _reset_type =
    bool;
  _reset_type reset;

  // setters for named parameter idiom
  Type & set__reset(
    const bool & _arg)
  {
    this->reset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_msgs::srv::Clear_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_msgs::srv::Clear_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_msgs::srv::Clear_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_msgs::srv::Clear_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_msgs::srv::Clear_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_msgs::srv::Clear_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_msgs::srv::Clear_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_msgs::srv::Clear_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_msgs::srv::Clear_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_msgs::srv::Clear_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_msgs__srv__Clear_Request
    std::shared_ptr<ros2_msgs::srv::Clear_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_msgs__srv__Clear_Request
    std::shared_ptr<ros2_msgs::srv::Clear_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Clear_Request_ & other) const
  {
    if (this->reset != other.reset) {
      return false;
    }
    return true;
  }
  bool operator!=(const Clear_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Clear_Request_

// alias to use template instance with default allocator
using Clear_Request =
  ros2_msgs::srv::Clear_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_msgs


#ifndef _WIN32
# define DEPRECATED__ros2_msgs__srv__Clear_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_msgs__srv__Clear_Response __declspec(deprecated)
#endif

namespace ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Clear_Response_
{
  using Type = Clear_Response_<ContainerAllocator>;

  explicit Clear_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  explicit Clear_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  // field types and members
  using _done_type =
    bool;
  _done_type done;

  // setters for named parameter idiom
  Type & set__done(
    const bool & _arg)
  {
    this->done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_msgs::srv::Clear_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_msgs::srv::Clear_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_msgs::srv::Clear_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_msgs::srv::Clear_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_msgs::srv::Clear_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_msgs::srv::Clear_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_msgs::srv::Clear_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_msgs::srv::Clear_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_msgs::srv::Clear_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_msgs::srv::Clear_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_msgs__srv__Clear_Response
    std::shared_ptr<ros2_msgs::srv::Clear_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_msgs__srv__Clear_Response
    std::shared_ptr<ros2_msgs::srv::Clear_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Clear_Response_ & other) const
  {
    if (this->done != other.done) {
      return false;
    }
    return true;
  }
  bool operator!=(const Clear_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Clear_Response_

// alias to use template instance with default allocator
using Clear_Response =
  ros2_msgs::srv::Clear_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_msgs

namespace ros2_msgs
{

namespace srv
{

struct Clear
{
  using Request = ros2_msgs::srv::Clear_Request;
  using Response = ros2_msgs::srv::Clear_Response;
};

}  // namespace srv

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__SRV__DETAIL__CLEAR__STRUCT_HPP_
