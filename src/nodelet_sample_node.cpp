#include <ros/ros.h>
#include <nodelet_sample/NodeletSample.hpp>

using namespace nodelet_sample;

int main(int argc, char **argv)
{
	ros::init(argc, argv, "nodelet_sample_node");
	ros::NodeHandle nh;
  ros::NodeHandle private_nh("~");
	
	NodeletSample ns;

	ns.init(nh, private_nh);
	
	ros::spin();
	
	return 0;
}
