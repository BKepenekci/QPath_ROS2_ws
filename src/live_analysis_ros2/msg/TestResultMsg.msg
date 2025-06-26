# TestResultMsg.msg

std_msgs/Header header
string id
int32 total_imgs
string[] img_result_strs
float32[] img_result_confidance
sensor_msgs/Image[] heat_maps
sensor_msgs/Image[] result_imgs
float32 total_time
