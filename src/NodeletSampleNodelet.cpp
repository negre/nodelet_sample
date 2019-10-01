// this should really be in the implementation (.cpp file)
#include <pluginlib/class_list_macros.h>

// Include your header
#include <nodelet_sample/NodeletSampleNodelet.hpp>

// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(nodelet_sample::NodeletSampleNodelet, nodelet::Nodelet)

namespace nodelet_sample
{	
void NodeletSampleNodelet::onInit()
{
	ns.init(getNodeHandle(), getPrivateNodeHandle());
}
} // namespace nodelet_sample
