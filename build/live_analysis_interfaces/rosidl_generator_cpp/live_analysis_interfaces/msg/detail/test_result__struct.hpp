// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from live_analysis_interfaces:msg/TestResult.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__STRUCT_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__STRUCT_HPP_

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
// Member 'heatmap'
// Member 'mask'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__live_analysis_interfaces__msg__TestResult __attribute__((deprecated))
#else
# define DEPRECATED__live_analysis_interfaces__msg__TestResult __declspec(deprecated)
#endif

namespace live_analysis_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestResult_
{
  using Type = TestResult_<ContainerAllocator>;

  explicit TestResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    heatmap(_init),
    mask(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->model_id = "";
      this->ok = false;
      this->image_path = "";
      this->percent_done = 0l;
    }
  }

  explicit TestResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    user_id(_alloc),
    model_id(_alloc),
    heatmap(_alloc, _init),
    mask(_alloc, _init),
    image_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->model_id = "";
      this->ok = false;
      this->image_path = "";
      this->percent_done = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _user_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_id_type user_id;
  using _model_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_id_type model_id;
  using _ok_type =
    bool;
  _ok_type ok;
  using _heatmap_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _heatmap_type heatmap;
  using _mask_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _mask_type mask;
  using _bboxes_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _bboxes_type bboxes;
  using _confidences_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _confidences_type confidences;
  using _ok_list_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _ok_list_type ok_list;
  using _image_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _image_path_type image_path;
  using _percent_done_type =
    int32_t;
  _percent_done_type percent_done;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__ok(
    const bool & _arg)
  {
    this->ok = _arg;
    return *this;
  }
  Type & set__heatmap(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->heatmap = _arg;
    return *this;
  }
  Type & set__mask(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->mask = _arg;
    return *this;
  }
  Type & set__bboxes(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->bboxes = _arg;
    return *this;
  }
  Type & set__confidences(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->confidences = _arg;
    return *this;
  }
  Type & set__ok_list(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->ok_list = _arg;
    return *this;
  }
  Type & set__image_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->image_path = _arg;
    return *this;
  }
  Type & set__percent_done(
    const int32_t & _arg)
  {
    this->percent_done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    live_analysis_interfaces::msg::TestResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const live_analysis_interfaces::msg::TestResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TestResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TestResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TestResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TestResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TestResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TestResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TestResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TestResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__live_analysis_interfaces__msg__TestResult
    std::shared_ptr<live_analysis_interfaces::msg::TestResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__live_analysis_interfaces__msg__TestResult
    std::shared_ptr<live_analysis_interfaces::msg::TestResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->user_id != other.user_id) {
      return false;
    }
    if (this->model_id != other.model_id) {
      return false;
    }
    if (this->ok != other.ok) {
      return false;
    }
    if (this->heatmap != other.heatmap) {
      return false;
    }
    if (this->mask != other.mask) {
      return false;
    }
    if (this->bboxes != other.bboxes) {
      return false;
    }
    if (this->confidences != other.confidences) {
      return false;
    }
    if (this->ok_list != other.ok_list) {
      return false;
    }
    if (this->image_path != other.image_path) {
      return false;
    }
    if (this->percent_done != other.percent_done) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestResult_

// alias to use template instance with default allocator
using TestResult =
  live_analysis_interfaces::msg::TestResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT__STRUCT_HPP_
