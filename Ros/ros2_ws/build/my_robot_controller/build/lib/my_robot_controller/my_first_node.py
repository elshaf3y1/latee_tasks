#!/usr/bin/env python3
import rclpy
from rclpy.node import Node



class mynode(Node):
    def __init__(self):
        super().__init__("bar2_banzeen")
        self.get_logger().info("Hello from ROS2")




def main(args=None):
    rclpy.init(args=args)
    node=mynode() #creating the node
    rclpy.spin(node)
    rclpy.shutdown()



if __name__ =='__main__':
    main()