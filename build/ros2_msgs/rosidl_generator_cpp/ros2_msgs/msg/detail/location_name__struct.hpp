// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_msgs:msg/LocationName.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__STRUCT_HPP_
#define ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_msgs__msg__LocationName __attribute__((deprecated))
#else
# define DEPRECATED__ros2_msgs__msg__LocationName __declspec(deprecated)
#endif

namespace ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocationName_
{
  using Type = LocationName_<ContainerAllocator>;

  explicit LocationName_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location_name = "";
    }
  }

  explicit LocationName_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location_name = "";
    }
  }

  // field types and members
  using _location_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _location_name_type location_name;

  // setters for named parameter idiom
  Type & set__location_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->location_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_msgs::msg::LocationName_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_msgs::msg::LocationName_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_msgs::msg::LocationName_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_msgs::msg::LocationName_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_msgs::msg::LocationName_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_msgs::msg::LocationName_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_msgs::msg::LocationName_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_msgs::msg::LocationName_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_msgs::msg::LocationName_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_msgs::msg::LocationName_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_msgs__msg__LocationName
    std::shared_ptr<ros2_msgs::msg::LocationName_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_msgs__msg__LocationName
    std::shared_ptr<ros2_msgs::msg::LocationName_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocationName_ & other) const
  {
    if (this->location_name != other.location_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocationName_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocationName_

// alias to use template instance with default allocator
using LocationName =
  ros2_msgs::msg::LocationName_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_msgs

#endif  // ROS2_MSGS__MSG__DETAIL__LOCATION_NAME__STRUCT_HPP_
