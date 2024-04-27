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

using std::placeholders::_1;
using namespace std;

using namespace std::chrono_literals;

class traj_pub_Saver : public rclcpp::Node
{
  public:
    traj_pub_Saver()
    : Node("traj_publisher_Saver"), count_(0)
    {

      traj_subscription_ = this->create_subscription<nav_msgs::msg::Odometry>(
      "/odom", 10, std::bind(&traj_pub_Saver::traj_callback, this, _1));


      publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("marker", 10);
      timer_ = this->create_wall_timer(
      500ms, std::bind(&traj_pub_Saver::timer_callback, this));

      service = this->create_service<tutorial_interfaces::srv::Saver>(
    "Saver",
    [this](const std::shared_ptr<tutorial_interfaces::srv::Saver::Request> request,
           std::shared_ptr<tutorial_interfaces::srv::Saver::Response> response) {
        this->server(request, response);
    });

    }

void server(const std::shared_ptr<tutorial_interfaces::srv::Saver::Request> request, std::shared_ptr<tutorial_interfaces::srv::Saver::Response> response)
{
    int64_t duration = request->duration;
    visualization_msgs::msg::MarkerArray filtered_marker=filterMarkersWithinDuration(marker_array,duration);
    

    response->result = true;


    saveMarkerArrayToYAML(filtered_marker);
}
visualization_msgs::msg::MarkerArray filterMarkersWithinDuration(const visualization_msgs::msg::MarkerArray& marker_array, int64_t duration)
{

    int total_messages=duration*2;
    visualization_msgs::msg::MarkerArray filtered_array;
    int i=marker_array.markers.size()-1;
    while(total_messages!=0){
        filtered_array.markers.push_back(marker_array.markers[i]);
        i-=1;
        total_messages-=1;

    }

    return filtered_array;
}
void saveMarkerArrayToYAML(visualization_msgs::msg::MarkerArray& filter_marker)
{
    YAML::Emitter emitter;
    emitter << YAML::BeginSeq;
    int marker_count = 0;
    for (const auto &marker : filter_marker.markers)
    {
        emitter << YAML::BeginMap;
        emitter << YAML::Key << "id" << YAML::Value << marker_count++;
        emitter << YAML::Key << "type" << YAML::Value << marker.type;
        emitter << YAML::Key << "pose";
        emitter << YAML::BeginMap;
        emitter << YAML::Key << "position";
        emitter << YAML::Value << YAML::Flow << YAML::BeginMap;
        emitter << YAML::Key << "x" << YAML::Value << marker.pose.position.x;
        emitter << YAML::Key << "y" << YAML::Value << marker.pose.position.y;
        emitter << YAML::Key << "z" << YAML::Value << marker.pose.position.z;
        emitter << YAML::EndMap;
        emitter << YAML::Key << "orientation";
        emitter << YAML::Value << YAML::Flow << YAML::BeginMap;
        emitter << YAML::Key << "x" << YAML::Value << marker.pose.orientation.x;
        emitter << YAML::Key << "y" << YAML::Value << marker.pose.orientation.y;
        emitter << YAML::Key << "z" << YAML::Value << marker.pose.orientation.z;
        emitter << YAML::Key << "w" << YAML::Value << marker.pose.orientation.w;
        emitter << YAML::EndMap;
        emitter << YAML::EndMap;
        emitter << YAML::EndMap;
    }
    emitter << YAML::EndSeq;

    auto now = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(now);
    std::stringstream filename_stream;
    filename_stream << "markers_" << std::put_time(std::localtime(&time), "%Y%m%d_%H%M%S") << ".yaml";
    std::string filename = filename_stream.str();


    std::ofstream fout(filename);
    fout << emitter.c_str();
    RCLCPP_INFO(this->get_logger(), "Markers saved to file: %s", filename.c_str());
}


  private:



    void timer_callback()
    {
      marker_array.markers.push_back(marker);
      
      publisher_->publish(marker);
    }

    void traj_callback(const nav_msgs::msg::Odometry & msg)
    {
      

    std_msgs::msg:: Header header = msg.header;
    marker.header=header;
    marker.id=count;
    string s="tracker";
    marker.ns = s;
    marker.type = visualization_msgs::msg::Marker::ARROW;
    marker.action = visualization_msgs::msg::Marker::ADD;
    geometry_msgs::msg::Pose pose=msg.pose.pose;
    marker.pose = pose; 
    marker.color.r=1.0;
    marker.color.a=1.0;
    marker.scale.x=0.5;
    marker.scale.y=0.1;
    marker.scale.z=0.4;

    
    
    count+=1;

    }

    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr traj_subscription_;

    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr publisher_;
    visualization_msgs::msg::Marker marker;
    visualization_msgs::msg::MarkerArray marker_array;
    rclcpp::Service<tutorial_interfaces::srv::Saver>::SharedPtr service;
    rclcpp::TimerBase::SharedPtr timer_;
    int count=0;

    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);


  rclcpp::spin(std::make_shared<traj_pub_Saver>());


  rclcpp::shutdown();
  return 0;
}

