// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from live_analysis_interfaces:msg/TestProgress.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_PROGRESS__STRUCT_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_PROGRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__live_analysis_interfaces__msg__TestProgress __attribute__((deprecated))
#else
# define DEPRECATED__live_analysis_interfaces__msg__TestProgress __declspec(deprecated)
#endif

namespace live_analysis_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestProgress_
{
  using Type = TestProgress_<ContainerAllocator>;

  explicit TestProgress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TestProgress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    live_analysis_interfaces::msg::TestProgress_<ContainerAllocator> *;
  using ConstRawPtr =
    const live_analysis_interfaces::msg::TestProgress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TestProgress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TestProgress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TestProgress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TestProgress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TestProgress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TestProgress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TestProgress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TestProgress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__live_analysis_interfaces__msg__TestProgress
    std::shared_ptr<live_analysis_interfaces::msg::TestProgress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__live_analysis_interfaces__msg__TestProgress
    std::shared_ptr<live_analysis_interfaces::msg::TestProgress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestProgress_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestProgress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestProgress_

// alias to use template instance with default allocator
using TestProgress =
  live_analysis_interfaces::msg::TestProgress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_PROGRESS__STRUCT_HPP_
