#include<AFMotor.h>

AF_DCMotor motor1(1),motor2(2), motor3(3);


void setup() {
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  
}

void loop() {
  motor1.run(FORWARD);
  delay(500);
  motor1.run(RELEASE);

  motor2.run(FORWARD);
  delay(500);
  motor2.run(RELEASE);
  
  motor3.run(FORWARD);
  delay(500);
  motor3.run(RELEASE);

  delay(500);
}
