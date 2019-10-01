#pragma once

#include <nodelet/nodelet.h>
#include <nodelet_sample/NodeletSample.hpp>


namespace nodelet_sample
{
class NodeletSampleNodelet : public nodelet::Nodelet
{
private:
	NodeletSample ns;
	
public:
	virtual void onInit();
}; // class NodeletSampleNodelet

	
}//namespace nodelet_sample
