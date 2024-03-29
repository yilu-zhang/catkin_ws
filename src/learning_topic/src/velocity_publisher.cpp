/*发布turtle1/cmd_vel话题，消息类型geometry_msgs::Twist
 */
 
#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

int main(int argc, char **argv)
{
    // ROS节点初始化
    ros::init(argc, argv, "velocity_publisher");

    // 创建节点句柄
    ros::NodeHandle n;

    // 创建一个Publisher，发布名为/turtle1/cmd_vel的topic，消息类型为为geometry_msgs::Twist
    ros::Publisher turtle_vel_pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);

    // 设置循环的频率
    ros::Rate loop_rate(2);

    int count = 0;
    while (ros::ok())
    {
        // 初始化geometry_msgs::Twist型的消息
        geometry_msgs::Twist vel_msg;
        vel_msg.linear.x = 0.5;
        vel_msg.angular.z = 0.2;

        // 发布消息
        turtle_vel_pub.publish(vel_msg);
	    ROS_INFO("topic_test:");
        ROS_INFO("%d",count);


        // 按照循环频率延时
        loop_rate.sleep();
        ++count;
    }

    return 0;
}
