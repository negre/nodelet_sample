# ROS nodelet sample

add this ros package to your catkin workspace and compile it with catkin_make

## To run the sample as a standard ros node :

```
$ roscore&
$ rosrun nodelet_sample nodelet_sample_node
```

## To run this sample as a nodelet :

```
$ roscore&
$ rosrun nodelet nodelet manager&
$ rosrun nodelet nodelet load nodelet_sample/NodeletSampleNodelet manager
```
