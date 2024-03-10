// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_msgs:srv/Save.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__SRV__DETAIL__SAVE__STRUCT_HPP_
#define ROS2_MSGS__SRV__DETAIL__SAVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_msgs__srv__Save_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_msgs__srv__Save_Request __declspec(deprecated)
#endif

namespace ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Save_Request_
{
  using Type = Save_Request_<ContainerAllocator>;

  explicit Save_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  explicit Save_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filename_type filename;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filename = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_msgs::srv::Save_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_msgs::srv::Save_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_msgs::srv::Save_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_msgs::srv::Save_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_msgs::srv::Save_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_msgs::srv::Save_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_msgs::srv::Save_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_msgs::srv::Save_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_msgs::srv::Save_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_msgs::srv::Save_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_msgs__srv__Save_Request
    std::shared_ptr<ros2_msgs::srv::Save_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_msgs__srv__Save_Request
    std::shared_ptr<ros2_msgs::srv::Save_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Save_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    return true;
  }
  bool operator!=(const Save_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Save_Request_

// alias to use template instance with default allocator
using Save_Request =
  ros2_msgs::srv::Save_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_msgs


#ifndef _WIN32
# define DEPRECATED__ros2_msgs__srv__Save_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_msgs__srv__Save_Response __declspec(deprecated)
#endif

namespace ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Save_Response_
{
  using Type = Save_Response_<ContainerAllocator>;

  explicit Save_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Save_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_msgs::srv::Save_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_msgs::srv::Save_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_msgs::srv::Save_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_msgs::srv::Save_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_msgs::srv::Save_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_msgs::srv::Save_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_msgs::srv::Save_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_msgs::srv::Save_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_msgs::srv::Save_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_msgs::srv::Save_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_msgs__srv__Save_Response
    std::shared_ptr<ros2_msgs::srv::Save_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_msgs__srv__Save_Response
    std::shared_ptr<ros2_msgs::srv::Save_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Save_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Save_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Save_Response_

// alias to use template instance with default allocator
using Save_Response =
  ros2_msgs::srv::Save_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_msgs

namespace ros2_msgs
{

namespace srv
{

struct Save
{
  using Request = ros2_msgs::srv::Save_Request;
  using Response = ros2_msgs::srv::Save_Response;
};

}  // namespace srv

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__SRV__DETAIL__SAVE__STRUCT_HPP_
