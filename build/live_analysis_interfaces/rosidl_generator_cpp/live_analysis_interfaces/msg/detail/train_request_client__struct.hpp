// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from live_analysis_interfaces:msg/TrainRequestClient.idl
// generated code does not contain a copyright notice

#ifndef LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST_CLIENT__STRUCT_HPP_
#define LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST_CLIENT__STRUCT_HPP_

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
# define DEPRECATED__live_analysis_interfaces__msg__TrainRequestClient __attribute__((deprecated))
#else
# define DEPRECATED__live_analysis_interfaces__msg__TrainRequestClient __declspec(deprecated)
#endif

namespace live_analysis_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrainRequestClient_
{
  using Type = TrainRequestClient_<ContainerAllocator>;

  explicit TrainRequestClient_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->algorithm_id = "";
      this->model_id = "";
      this->epochs = 0l;
      this->min_accuracy = 0.0f;
      this->batch_size = 0l;
      this->use_detection = false;
      this->use_label = false;
      this->data_class = "";
      this->files_completed = false;
      this->seq_no = 0l;
    }
  }

  explicit TrainRequestClient_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    user_id(_alloc),
    algorithm_id(_alloc),
    model_id(_alloc),
    data_class(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->algorithm_id = "";
      this->model_id = "";
      this->epochs = 0l;
      this->min_accuracy = 0.0f;
      this->batch_size = 0l;
      this->use_detection = false;
      this->use_label = false;
      this->data_class = "";
      this->files_completed = false;
      this->seq_no = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _user_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_id_type user_id;
  using _algorithm_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _algorithm_id_type algorithm_id;
  using _model_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_id_type model_id;
  using _epochs_type =
    int32_t;
  _epochs_type epochs;
  using _min_accuracy_type =
    float;
  _min_accuracy_type min_accuracy;
  using _batch_size_type =
    int32_t;
  _batch_size_type batch_size;
  using _use_detection_type =
    bool;
  _use_detection_type use_detection;
  using _use_label_type =
    bool;
  _use_label_type use_label;
  using _data_class_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_class_type data_class;
  using _train_images_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _train_images_type train_images;
  using _eval_images_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _eval_images_type eval_images;
  using _class_labels_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _class_labels_type class_labels;
  using _rectangles_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _rectangles_type rectangles;
  using _files_completed_type =
    bool;
  _files_completed_type files_completed;
  using _seq_no_type =
    int32_t;
  _seq_no_type seq_no;

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
  Type & set__algorithm_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->algorithm_id = _arg;
    return *this;
  }
  Type & set__model_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_id = _arg;
    return *this;
  }
  Type & set__epochs(
    const int32_t & _arg)
  {
    this->epochs = _arg;
    return *this;
  }
  Type & set__min_accuracy(
    const float & _arg)
  {
    this->min_accuracy = _arg;
    return *this;
  }
  Type & set__batch_size(
    const int32_t & _arg)
  {
    this->batch_size = _arg;
    return *this;
  }
  Type & set__use_detection(
    const bool & _arg)
  {
    this->use_detection = _arg;
    return *this;
  }
  Type & set__use_label(
    const bool & _arg)
  {
    this->use_label = _arg;
    return *this;
  }
  Type & set__data_class(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data_class = _arg;
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
  Type & set__class_labels(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->class_labels = _arg;
    return *this;
  }
  Type & set__rectangles(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->rectangles = _arg;
    return *this;
  }
  Type & set__files_completed(
    const bool & _arg)
  {
    this->files_completed = _arg;
    return *this;
  }
  Type & set__seq_no(
    const int32_t & _arg)
  {
    this->seq_no = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator> *;
  using ConstRawPtr =
    const live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__live_analysis_interfaces__msg__TrainRequestClient
    std::shared_ptr<live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__live_analysis_interfaces__msg__TrainRequestClient
    std::shared_ptr<live_analysis_interfaces::msg::TrainRequestClient_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrainRequestClient_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->user_id != other.user_id) {
      return false;
    }
    if (this->algorithm_id != other.algorithm_id) {
      return false;
    }
    if (this->model_id != other.model_id) {
      return false;
    }
    if (this->epochs != other.epochs) {
      return false;
    }
    if (this->min_accuracy != other.min_accuracy) {
      return false;
    }
    if (this->batch_size != other.batch_size) {
      return false;
    }
    if (this->use_detection != other.use_detection) {
      return false;
    }
    if (this->use_label != other.use_label) {
      return false;
    }
    if (this->data_class != other.data_class) {
      return false;
    }
    if (this->train_images != other.train_images) {
      return false;
    }
    if (this->eval_images != other.eval_images) {
      return false;
    }
    if (this->class_labels != other.class_labels) {
      return false;
    }
    if (this->rectangles != other.rectangles) {
      return false;
    }
    if (this->files_completed != other.files_completed) {
      return false;
    }
    if (this->seq_no != other.seq_no) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrainRequestClient_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrainRequestClient_

// alias to use template instance with default allocator
using TrainRequestClient =
  live_analysis_interfaces::msg::TrainRequestClient_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace live_analysis_interfaces

#endif  // LIVE_ANALYSIS_INTERFACES__MSG__DETAIL__TRAIN_REQUEST_CLIENT__STRUCT_HPP_
