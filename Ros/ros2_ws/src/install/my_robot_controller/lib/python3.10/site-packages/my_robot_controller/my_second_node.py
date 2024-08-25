#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_interfaces.msg import DoubleINT
from random import randint

class publisher(Node):
    
    def __init__(self):
        super().__init__("temperature_sensor")
        self.station=self.create_publisher(DoubleINT, "/weather_reading",10)
        self.create_timer(1, self.send_readings)
        self.get_logger().info("Wheather forecast readings: ")


    def send_readings(self):
        msg=DoubleINT()
        msg.x = randint(20,45) #tempearture reading 
        msg.y = randint(40,60) #humidity reading in percent
        self.station.publish(msg)
        self.get_logger().info(f"The station published {msg.x} ceslius ,{msg.y} % humidity")



def main(args=None):
    rclpy.init(args=args)
    node =  publisher()
    rclpy.spin(node)
    rclpy.shutdown()
if __name__=="__main__":
    main()
 