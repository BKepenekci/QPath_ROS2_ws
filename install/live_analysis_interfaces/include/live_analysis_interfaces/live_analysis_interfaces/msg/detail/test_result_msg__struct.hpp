// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from live_analysis_interfaces:msg/TestResultMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/test_result_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__STRUCT_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__STRUCT_HPP_

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
// Member 'heat_maps'
// Member 'result_imgs'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__live_analysis_interfaces__msg__TestResultMsg __attribute__((deprecated))
#else
# define DEPRECATED__live_analysis_interfaces__msg__TestResultMsg __declspec(deprecated)
#endif

namespace live_analysis_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestResultMsg_
{
  using Type = TestResultMsg_<ContainerAllocator>;

  explicit TestResultMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->total_imgs = 0l;
      this->total_time = 0.0f;
    }
  }

  explicit TestResultMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->total_imgs = 0l;
      this->total_time = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _total_imgs_type =
    int32_t;
  _total_imgs_type total_imgs;
  using _img_result_strs_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _img_result_strs_type img_result_strs;
  using _img_result_confidance_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _img_result_confidance_type img_result_confidance;
  using _heat_maps_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _heat_maps_type heat_maps;
  using _result_imgs_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _result_imgs_type result_imgs;
  using _total_time_type =
    float;
  _total_time_type total_time;

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
  Type & set__total_imgs(
    const int32_t & _arg)
  {
    this->total_imgs = _arg;
    return *this;
  }
  Type & set__img_result_strs(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->img_result_strs = _arg;
    return *this;
  }
  Type & set__img_result_confidance(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->img_result_confidance = _arg;
    return *this;
  }
  Type & set__heat_maps(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->heat_maps = _arg;
    return *this;
  }
  Type & set__result_imgs(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->result_imgs = _arg;
    return *this;
  }
  Type & set__total_time(
    const float & _arg)
  {
    this->total_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__live_analysis_interfaces__msg__TestResultMsg
    std::shared_ptr<live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__live_analysis_interfaces__msg__TestResultMsg
    std::shared_ptr<live_analysis_interfaces::msg::TestResultMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestResultMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->total_imgs != other.total_imgs) {
      return false;
    }
    if (this->img_result_strs != other.img_result_strs) {
      return false;
    }
    if (this->img_result_confidance != other.img_result_confidance) {
      return false;
    }
    if (this->heat_maps != other.heat_maps) {
      return false;
    }
    if (this->result_imgs != other.result_imgs) {
      return false;
    }
    if (this->total_time != other.total_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestResultMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestResultMsg_

// alias to use template instance with default allocator
using TestResultMsg =
  live_analysis_interfaces::msg::TestResultMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_RESULT_MSG__STRUCT_HPP_
