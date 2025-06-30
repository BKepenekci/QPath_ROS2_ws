// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from live_analysis_interfaces:msg/TrainAlgorithmMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "live_analysis_interfaces/msg/train_algorithm_msg.hpp"


#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__STRUCT_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__STRUCT_HPP_

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
// Member 'train_images'
// Member 'eval_images'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__live_analysis_interfaces__msg__TrainAlgorithmMsg __attribute__((deprecated))
#else
# define DEPRECATED__live_analysis_interfaces__msg__TrainAlgorithmMsg __declspec(deprecated)
#endif

namespace live_analysis_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrainAlgorithmMsg_
{
  using Type = TrainAlgorithmMsg_<ContainerAllocator>;

  explicit TrainAlgorithmMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->model_name = "";
      this->model_id = "";
      this->epoc = 0l;
      this->batchsize = 0l;
      this->algorithm_id = "";
      this->algorithm_name = "";
      this->gpu = "";
      this->model_path = "";
      this->files_completed = false;
    }
  }

  explicit TrainAlgorithmMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc),
    model_name(_alloc),
    model_id(_alloc),
    algorithm_id(_alloc),
    algorithm_name(_alloc),
    gpu(_alloc),
    model_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->model_name = "";
      this->model_id = "";
      this->epoc = 0l;
      this->batchsize = 0l;
      this->algorithm_id = "";
      this->algorithm_name = "";
      this->gpu = "";
      this->model_path = "";
      this->files_completed = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_name_type model_name;
  using _model_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_id_type model_id;
  using _train_images_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _train_images_type train_images;
  using _eval_images_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _eval_images_type eval_images;
  using _train_set_annotations_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _train_set_annotations_type train_set_annotations;
  using _eval_set_annotations_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _eval_set_annotations_type eval_set_annotations;
  using _epoc_type =
    int32_t;
  _epoc_type epoc;
  using _batchsize_type =
    int32_t;
  _batchsize_type batchsize;
  using _algorithm_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _algorithm_id_type algorithm_id;
  using _algorithm_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _algorithm_name_type algorithm_name;
  using _gpu_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gpu_type gpu;
  using _model_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_path_type model_path;
  using _files_completed_type =
    bool;
  _files_completed_type files_completed;

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
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__model_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_id = _arg;
    return *this;
  }
  Type & set__train_images(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->train_images = _arg;
    return *this;
  }
  Type & set__eval_images(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->eval_images = _arg;
    return *this;
  }
  Type & set__train_set_annotations(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->train_set_annotations = _arg;
    return *this;
  }
  Type & set__eval_set_annotations(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->eval_set_annotations = _arg;
    return *this;
  }
  Type & set__epoc(
    const int32_t & _arg)
  {
    this->epoc = _arg;
    return *this;
  }
  Type & set__batchsize(
    const int32_t & _arg)
  {
    this->batchsize = _arg;
    return *this;
  }
  Type & set__algorithm_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->algorithm_id = _arg;
    return *this;
  }
  Type & set__algorithm_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->algorithm_name = _arg;
    return *this;
  }
  Type & set__gpu(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gpu = _arg;
    return *this;
  }
  Type & set__model_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_path = _arg;
    return *this;
  }
  Type & set__files_completed(
    const bool & _arg)
  {
    this->files_completed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__live_analysis_interfaces__msg__TrainAlgorithmMsg
    std::shared_ptr<live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__live_analysis_interfaces__msg__TrainAlgorithmMsg
    std::shared_ptr<live_analysis_interfaces::msg::TrainAlgorithmMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrainAlgorithmMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->model_id != other.model_id) {
      return false;
    }
    if (this->train_images != other.train_images) {
      return false;
    }
    if (this->eval_images != other.eval_images) {
      return false;
    }
    if (this->train_set_annotations != other.train_set_annotations) {
      return false;
    }
    if (this->eval_set_annotations != other.eval_set_annotations) {
      return false;
    }
    if (this->epoc != other.epoc) {
      return false;
    }
    if (this->batchsize != other.batchsize) {
      return false;
    }
    if (this->algorithm_id != other.algorithm_id) {
      return false;
    }
    if (this->algorithm_name != other.algorithm_name) {
      return false;
    }
    if (this->gpu != other.gpu) {
      return false;
    }
    if (this->model_path != other.model_path) {
      return false;
    }
    if (this->files_completed != other.files_completed) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrainAlgorithmMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrainAlgorithmMsg_

// alias to use template instance with default allocator
using TrainAlgorithmMsg =
  live_analysis_interfaces::msg::TrainAlgorithmMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_ALGORITHM_MSG__STRUCT_HPP_
