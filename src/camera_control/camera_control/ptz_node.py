import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from onvif import ONVIFCamera

class PTZNode(Node):
    def __init__(self):
        super().__init__('ptz_node')
        self.subscription = self.create_subscription(String, '/ptz_cmd', self.move_camera, 10)
        self.cam = ONVIFCamera('192.168.1.183', 80, 'admin', '!23ertGbn')
        self.media = self.cam.create_media_service()
        self.ptz = self.cam.create_ptz_service()
        self.profile = self.media.GetProfiles()[0]
        self.token = self.profile.token
        self.req = self.ptz.create_type('ContinuousMove')
        self.req.ProfileToken = self.token

    def move_camera(self, msg):
        self.req.Velocity = {'PanTilt': {'x': 0.0, 'y': 0.0}, 'Zoom': {'x': 0.0}}
        if msg.data == 'left':
            self.req.Velocity['PanTilt']['x'] = -0.5
        elif msg.data == 'right':
            self.req.Velocity['PanTilt']['x'] = 0.5
        elif msg.data == 'up':
            self.req.Velocity['PanTilt']['y'] = 0.5
        elif msg.data == 'down':
            self.req.Velocity['PanTilt']['y'] = -0.5
        elif msg.data == 'zoom_in':
            self.req.Velocity['Zoom']['x'] = 0.5
        elif msg.data == 'zoom_out':
            self.req.Velocity['Zoom']['x'] = -0.5
        self.ptz.ContinuousMove(self.req)

def main(args=None):
    rclpy.init(args=args)
    node = PTZNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()