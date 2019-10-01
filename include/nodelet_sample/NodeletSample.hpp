#pragma once

#include <ros/ros.h>
#include <std_msgs/String.h>

namespace nodelet_sample
{

class NodeletSample
{
private:
	ros::Publisher pub;
	std::string param;
	ros::Timer timer;
	
public:
	NodeletSample();
  ~NodeletSample();
	
  void init(ros::NodeHandle &nh, ros::NodeHandle &private_nh);

	void timerCallback(const ros::TimerEvent&);

}; // class NodeletSample

}; // namespace nodelet_sample
