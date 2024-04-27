#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "visualization_msgs/msg/marker_array.hpp"
#include "tutorial_interfaces/srv/saver.hpp"
#include <yaml-cpp/yaml.h>
#include <fstream>
#include "tf2_ros/transform_listener.h"
#include <tf2_ros/buffer.h>
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

using std::placeholders::_1;
using namespace std;

using namespace std::chrono_literals;

class traj_pub_Saver : public rclcpp::Node
{
  public:
    traj_pub_Saver()
    : Node("traj_publisher_reader"), count_(0)
    {



      marker_array_publisher_ = this->create_publisher<visualization_msgs::msg::MarkerArray>("marker_array", 10);
      timer_ = this->create_wall_timer(
      500ms, std::bind(&traj_pub_Saver::timer_callback, this));
      traj_publisher_=this->create_publisher<nav_msgs::msg::Odometry>("odom", 10);



    }

//   void transformMarker(const visualization_msgs::msg::Marker& marker_msg, 
//                      const geometry_msgs::msg::TransformStamped& transform_msg) {
//     // Create a pose stamped message for the marker
//     geometry_msgs::msg::PoseStamped marker_pose;
//     marker_pose.header = marker_msg.header;
//     marker_pose.pose = marker_msg.pose;

//     // Transform the pose from map frame to odom frame
//     geometry_msgs::msg::PoseStamped odom_marker_pose;
//     try {
//         tf2::doTransform(marker_pose, odom_marker_pose, transform_msg);
//     } catch (tf2::TransformException &ex) {
//         RCLCPP_ERROR(get_logger(), "Failed to transform marker pose: %s", ex.what());
//         return;
//     }

//     visualization_msgs::msg::Marker odom_marker_msg = marker_msg;
//     odom_marker_msg.pose = odom_marker_pose.pose;


//     odom_marker_array.markers.push_back(odom_marker_msg);
// }

  void yaml_reader(){
    YAML::Node config = YAML::LoadFile("markers_20240428_000945.yaml");


    for (const auto& node : config) {
    visualization_msgs::msg::Marker marker_msg;
    

    marker_msg.id = node["id"].as<int>();
    // rclcpp::Time now =rclcpp::Time::now();
    // marker_msg.header.stamp=now;
    // marker_msg.header.frame_id="/map";
    marker_msg.type = node["type"].as<int>();

    const auto& pose = node["pose"];
    marker_msg.pose.position.x = pose["position"]["x"].as<double>();
    marker_msg.pose.position.y = pose["position"]["y"].as<double>();
    marker_msg.pose.position.z = pose["position"]["z"].as<double>();
    marker_msg.pose.orientation.x = pose["orientation"]["x"].as<double>();
    marker_msg.pose.orientation.y = pose["orientation"]["y"].as<double>();
    marker_msg.pose.orientation.z = pose["orientation"]["z"].as<double>();
    marker_msg.pose.orientation.w = pose["orientation"]["w"].as<double>();
    marker_msg.header.frame_id="odom";
    marker_msg.scale.x=0.1;
    marker_msg.scale.y=0.1;
    marker_msg.scale.z=0.1;
    marker_msg.color.r=1;
    marker_msg.color.a=1;
    
    marker_array.markers.push_back(marker_msg);
// Define the duration for storing transforms in the buffer (e.g., 10 seconds)


  }

    // rclcpp::Clock::SharedPtr clock = std::make_shared<rclcpp::Clock>();
    // tf2::Duration buffer_duration = tf2::durationFromSec(10.0);
    // rclcpp::Node::SharedPtr Node = std::make_shared<rclcpp::Node>("traj_publisher_reader");

    // tf2_ros::Buffer tf_buffer_(clock, buffer_duration, Node);
    
    // tf2_ros::TransformListener tf_listener_(tf_buffer_);
    //   geometry_msgs::msg::TransformStamped transform_msg;
    // try
    // {
    //     transform_msg = tf_buffer_.lookupTransform("odom", "map", tf2::TimePointZero);
    // }
    // catch (tf2::TransformException &ex)
    // {
    //     RCLCPP_ERROR(get_logger(), "Failed to obtain transform: %s", ex.what());
    //     return;
    // }

    // int i=0;
    // while(i!=marker_array.markers.size())
    // {
        
    //     transformMarker(marker_array.markers[i], transform_msg);
    //     i+=1;
    // }
  


}


  private:



    void timer_callback()
    { 
      if(!read_file){
        yaml_reader();
        read_file=true;
      }

      marker_array_publisher_->publish(marker_array);
      
 }

    

    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr traj_publisher_;

    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_array_publisher_;
    visualization_msgs::msg::Marker marker;
    visualization_msgs::msg::MarkerArray marker_array;
    
    rclcpp::Service<tutorial_interfaces::srv::Saver>::SharedPtr service;
    rclcpp::TimerBase::SharedPtr timer_;
    bool read_file=false;


    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);


  rclcpp::spin(std::make_shared<traj_pub_Saver>());


  rclcpp::shutdown();
  return 0;
}

