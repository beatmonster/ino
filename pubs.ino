#include <ros.h>
#include <std_msgs/Int32MultiArray.h>
#include <Servo.h>
Servo servde;
Servo servbe;

ros::NodeHandle n;
std_msgs::Int32MultiArray a;
ros::Publisher pub("sharp", &a);
long sens[3] = {};
long tes[3] = {20, 10, 30};
#define sharp A2
#define pinbaca A3
#define pinbaca1 A4
#define prox A5
#define baca digitalRead(pinbaca)
#define baca1 digitalRead(pinbaca1)
#define bacaprox digitalRead(prox)
void setup() {
  n.getHardware()->setBaud(115200);
  n.initNode();
  n.advertise(pub);
  pinMode(sharp, 0);
  pinMode(pinbaca, 0);
  pinMode(pinbaca1, 0);
  pinMode(prox, 0);
  servde.attach(A0);
  servbe.attach(A1);
  servde.write(120);
  servbe.write(30);
}

void loop() {
  algoservo();
}
