#include <Servo.h>
Servo myServo ;

#define servoPin 10

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  // myServo.write(0);

  for (float angle =90;  angle >= 0;  angle --  ){
    myServo.write(angle);
    // delay(1000);
  };
}