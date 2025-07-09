// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from live_analysis_interfaces:msg/TestRequestClient.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__STRUCT_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__STRUCT_HPP_

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
// Member 'images'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__live_analysis_interfaces__msg__TestRequestClient __attribute__((deprecated))
#else
# define DEPRECATED__live_analysis_interfaces__msg__TestRequestClient __declspec(deprecated)
#endif

namespace live_analysis_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestRequestClient_
{
  using Type = TestRequestClient_<ContainerAllocator>;

  explicit TestRequestClient_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->model_id = "";
      this->model_path = "";
      this->yolo_path = "";
      this->with_bounding_box = false;
      this->area_th = 0.0f;
      this->confidance_th = 0.0f;
    }
  }

  explicit TestRequestClient_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc),
    model_id(_alloc),
    model_path(_alloc),
    yolo_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->model_id = "";
      this->model_path = "";
      this->yolo_path = "";
      this->with_bounding_box = false;
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
  using _model_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_id_type model_id;
  using _model_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_path_type model_path;
  using _yolo_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _yolo_path_type yolo_path;
  using _with_bounding_box_type =
    bool;
  _with_bounding_box_type with_bounding_box;
  using _area_th_type =
    float;
  _area_th_type area_th;
  using _confidance_th_type =
    float;
  _confidance_th_type confidance_th;
  using _images_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _images_type images;
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
  Type & set__model_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_id = _arg;
    return *this;
  }
  Type & set__model_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_path = _arg;
    return *this;
  }
  Type & set__yolo_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->yolo_path = _arg;
    return *this;
  }
  Type & set__with_bounding_box(
    const bool & _arg)
  {
    this->with_bounding_box = _arg;
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
  Type & set__images(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->images = _arg;
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
    live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator> *;
  using ConstRawPtr =
    const live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__live_analysis_interfaces__msg__TestRequestClient
    std::shared_ptr<live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__live_analysis_interfaces__msg__TestRequestClient
    std::shared_ptr<live_analysis_interfaces::msg::TestRequestClient_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequestClient_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->model_id != other.model_id) {
      return false;
    }
    if (this->model_path != other.model_path) {
      return false;
    }
    if (this->yolo_path != other.yolo_path) {
      return false;
    }
    if (this->with_bounding_box != other.with_bounding_box) {
      return false;
    }
    if (this->area_th != other.area_th) {
      return false;
    }
    if (this->confidance_th != other.confidance_th) {
      return false;
    }
    if (this->images != other.images) {
      return false;
    }
    if (this->image_paths != other.image_paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequestClient_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequestClient_

// alias to use template instance with default allocator
using TestRequestClient =
  live_analysis_interfaces::msg::TestRequestClient_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TEST_REQUEST_CLIENT__STRUCT_HPP_
