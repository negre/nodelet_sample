#include <nodelet_sample/NodeletSample.hpp>

using namespace std;

namespace nodelet_sample
{

NodeletSample::NodeletSample()
{
}

NodeletSample::~NodeletSample()
{
}

void NodeletSample::init(ros::NodeHandle &nh, ros::NodeHandle &private_nh)
{
	private_nh.param("param", param, string("default_param"));
	pub = nh.advertise<std_msgs::String>("output", 10);
	timer = nh.createTimer(ros::Duration(1.), &NodeletSample::timerCallback, this);
}

void NodeletSample::timerCallback(const ros::TimerEvent&)
{
	std_msgs::String msg;
	msg.data = param;
	pub.publish(msg);
}

}//namespace nodelet_sample
