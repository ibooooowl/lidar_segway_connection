//
// Created by user on 02/05/23.
//
#include "lidar_segway_connection.h"
int main(int argc, char** argv) {
    ros::init(argc, argv, "lidar_segway_connection_node");

    LidarSegwayConnectionNode node;

    ros::spin();
    return 0;
}