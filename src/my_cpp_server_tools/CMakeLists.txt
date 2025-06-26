cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
project(my_cpp_server_tools)

if(CMAKE_COMPILER_ID STREQUAL "GNU")
  set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -Wextra -Wpedantic")
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED) # std_msgs bağımlılığını bul

add_executable(my_cpp_node src/my_cpp_node.cpp) # <-- Yürütülebilir dosyayı tanımla

ament_target_dependencies(my_cpp_node rclcpp std_msgs) # <-- Bağımlılıkları ekle

# Install komutu, derlenen yürütülebilir dosyayı ROS 2 install dizinine kopyalar
install(TARGETS
  my_cpp_node
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(rclcpp std_msgs) # Diğer paketlerin bu paketi kullanırken bu bağımlılıkları görmesini sağlar

ament_package()