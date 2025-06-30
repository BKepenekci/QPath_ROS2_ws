# TestModelMsg.msg

std_msgs/Header header
string id
string model_id
string model_name
bool with_bounding_box
uint32 gpu
float32 area_th
float32 confidance_th
sensor_msgs/Image[] images
