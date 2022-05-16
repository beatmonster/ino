#include <Servo.h>
Servo serv;

void setup() {
  Serial.begin(57600);
  pinMode(A0, INPUT);
  serv.attach(A1);
  serv.write(110);
}

void loop() {
  if (digitalRead(A0)) {
    for (int i = 110; i > 0; i = i --) {
      serv.write(i);
      delay(5);
    }
  } else {
    serv.write(110);
  }
  Serial.println(digitalRead(A0));
}
