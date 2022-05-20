#include <ros.h>
#include <std_msgs/Int32MultiArray.h>


ros::NodeHandle n;
std_msgs::Int32MultiArray a;
ros::Publisher pub("sharp", &a);
long sens[3] = {};
long tes[3] = {20,10,30};
#define sharp A2

void setup()
{
  n.getHardware()->setBaud(115200);
  n.initNode();
  n.advertise(pub);
  pinMode(sharp, 0);
}

void loop()
{
  sens[0] = ir(0);
  a.data = sens;
  a.data_length = 1;
  pub.publish(&a);
  n.spinOnce();
}
