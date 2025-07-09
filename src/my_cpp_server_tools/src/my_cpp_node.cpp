#include "rclcpp/rclcpp.hpp" // ROS 2 C++ istemci kütüphanesi
#include "std_msgs/msg/string.hpp" // String mesaj tipi

// MyCppNode sınıfı, rclcpp::Node'dan türetilir
class MyCppNode : public rclcpp::Node
{
public:
  MyCppNode()
  : Node("my_cpp_node") // Düğümün adını belirliyoruz
  {
    // Yayıncı (Publisher) oluşturma
    // /output_cpp_topic adında, String tipinde ve 10 boyutunda bir publisher
    publisher_ = this->create_publisher<std_msgs::msg::String>("output_cpp_topic", 10);
    RCLCPP_INFO(this->get_logger(), "Yayıncı (Publisher) hazır: /output_cpp_topic");

    // Dinleyici (Subscriber) oluşturma
    // /input_cpp_topic adında, String tipinde ve listener_callback fonksiyonu ile mesajları dinleyecek
    subscription_ = this->create_subscription<std_msgs::msg::String>(
      "input_cpp_topic",
      10,
      std::bind(&MyCppNode::listener_callback, this, std::placeholders::_1)); // Mesaj geldiğinde çağrılacak fonksiyon
    RCLCPP_INFO(this->get_logger(), "Dinleyici (Subscriber) hazır: /input_cpp_topic");
  }

private:
  // Dinleyici (Subscriber) callback fonksiyonu
  void listener_callback(const std_msgs::msg::String::SharedPtr msg)
  {
    RCLCPP_INFO(this->get_logger(), "Mesajı dinledim: '%s'", msg->data.c_str());

    // Yeni bir mesaj oluştur
    auto response_msg = std_msgs::msg::String();
    response_msg.data = "Aldım (C++): " + msg->data;

    // Oluşturulan mesajı output_cpp_topic'e yayınla
    publisher_->publish(response_msg);
    RCLCPP_INFO(this->get_logger(), "Mesajı yayınladım: '%s'", response_msg.data.c_str());
  }

  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

// main fonksiyonu
int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv); // ROS 2 iletişimini başlat
  rclcpp::spin(std::make_shared<MyCppNode>()); // Düğümü sürekli olarak çalıştır
  rclcpp::shutdown(); // ROS 2 iletişimini kapat
  return 0;
}