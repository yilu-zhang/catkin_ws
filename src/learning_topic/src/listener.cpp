#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

static int count=0;
void vel_callback(const geometry_msgs::Twist::ConstPtr& msg)
{
    ROS_INFO("I heard:%f\t%f\t%d",msg->linear.x,msg->angular.z,count);
    count++;
}

int main(int argc, char **argv)
{

    // ROS节点初始化
    ros::init(argc, argv, "velocity_publisher_listener");

    // 创建节点句柄
    ros::NodeHandle n;

    // 创建一个Publisher，发布名为/turtle1/cmd_vel的topic，消息类型为为geometry_msgs::Twist
    ros::Subscriber turtle_vel_sub = n.subscribe("/turtle1/cmd_vel", 10,vel_callback);

    ros::spin();
    return 0;
}
