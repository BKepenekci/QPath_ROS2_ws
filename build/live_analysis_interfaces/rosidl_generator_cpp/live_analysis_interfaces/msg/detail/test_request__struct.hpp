// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from live_analysis_interfaces:msg/TestRequest.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST__STRUCT_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__live_analysis_interfaces__msg__TestRequest __attribute__((deprecated))
#else
# define DEPRECATED__live_analysis_interfaces__msg__TestRequest __declspec(deprecated)
#endif

namespace live_analysis_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestRequest_
{
  using Type = TestRequest_<ContainerAllocator>;

  explicit TestRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->user_id = "";
      this->model_id = "";
      this->with_bounding_box = false;
      this->gpu = 0ul;
      this->area_th = 0.0f;
      this->confidance_th = 0.0f;
    }
  }

  explicit TestRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc),
    user_id(_alloc),
    model_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->user_id = "";
      this->model_id = "";
      this->with_bounding_box = false;
      this->gpu = 0ul;
      this->area_th = 0.0f;
      this->confidance_th = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _user_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_id_type user_id;
  using _model_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_id_type model_id;
  using _with_bounding_box_type =
    bool;
  _with_bounding_box_type with_bounding_box;
  using _gpu_type =
    uint32_t;
  _gpu_type gpu;
  using _area_th_type =
    float;
  _area_th_type area_th;
  using _confidance_th_type =
    float;
  _confidance_th_type confidance_th;
  using _image_paths_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _image_paths_type image_paths;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__user_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_id = _arg;
    return *this;
  }
  Type & set__model_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_id = _arg;
    return *this;
  }
  Type & set__with_bounding_box(
    const bool & _arg)
  {
    this->with_bounding_box = _arg;
    return *this;
  }
  Type & set__gpu(
    const uint32_t & _arg)
  {
    this->gpu = _arg;
    return *this;
  }
  Type & set__area_th(
    const float & _arg)
  {
    this->area_th = _arg;
    return *this;
  }
  Type & set__confidance_th(
    const float & _arg)
  {
    this->confidance_th = _arg;
    return *this;
  }
  Type & set__image_paths(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->image_paths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    live_analysis_interfaces::msg::TestRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const live_analysis_interfaces::msg::TestRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TestRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TestRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TestRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TestRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TestRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TestRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TestRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TestRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__live_analysis_interfaces__msg__TestRequest
    std::shared_ptr<live_analysis_interfaces::msg::TestRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__live_analysis_interfaces__msg__TestRequest
    std::shared_ptr<live_analysis_interfaces::msg::TestRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->user_id != other.user_id) {
      return false;
    }
    if (this->model_id != other.model_id) {
      return false;
    }
    if (this->with_bounding_box != other.with_bounding_box) {
      return false;
    }
    if (this->gpu != other.gpu) {
      return false;
    }
    if (this->area_th != other.area_th) {
      return false;
    }
    if (this->confidance_th != other.confidance_th) {
      return false;
    }
    if (this->image_paths != other.image_paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_

// alias to use template instance with default allocator
using TestRequest =
  live_analysis_interfaces::msg::TestRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST__STRUCT_HPP_
