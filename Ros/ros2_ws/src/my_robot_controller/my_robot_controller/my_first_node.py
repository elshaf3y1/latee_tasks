#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_interfaces.msg import DoubleINT


class audience(Node):
    def __init__(self):
        super().__init__("GUI")
        self.subscriber=self.create_subscription(DoubleINT,"/weather_reading",self.call_back,10)

    def call_back(self,msg: DoubleINT):
        self.get_logger().info(f"I reeceived temp={msg.x},humidity={msg.y}%" )

def main(args=None):
    rclpy.init(args=args)
    sub=audience()
    rclpy.spin(sub)
    rclpy.shutdown()