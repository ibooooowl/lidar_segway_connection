#include "ros/ros.h"
#include <sensor_msgs/PointCloud2.h>
#include <geometry_msgs/Twist.h>

class LidarSegwayConnectionNode {
public:
    LidarSegwayConnectionNode() {
        // Subscribe to the LIDAR data topic
        lidar_sub_ = nh_.subscribe("lidar_data", 1, &LidarSegwayConnectionNode::lidarCallback, this);

        // Publish velocity commands to segway
        vel_pub_ = nh_.advertise<geometry_msgs::Twist>("cmd_vel", 1);
    }

    void lidarCallback(const sensor_msgs::PointCloud2::ConstPtr& msg) {
        // Process the LIDAR data and generate velocity commands
        geometry_msgs::Twist vel_cmd = processLidarData(msg);

        // Publish the velocity commands to segway
        vel_pub_.publish(vel_cmd);
    }

private:
    ros::NodeHandle nh_;
    ros::Subscriber lidar_sub_;
    ros::Publisher vel_pub_;

    geometry_msgs::Twist processLidarData(const sensor_msgs::PointCloud2::ConstPtr& msg) {
        // TODO: Implement obstacle detection and avoidance algorithm

        geometry_msgs::Twist vel_cmd;
        // TODO: Populate vel_cmd with appropriate linear and angular velocities
        return vel_cmd;
    }
};


