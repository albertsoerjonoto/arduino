#include <Servo.h>

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(10);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(0);
  delay(1000);
  myServo.write(180);
  delay(500);
}


int absVal(int x){
  if (x >= 0){
    return x;
  }else{
    return -x;
  }
}

// built-in functions
