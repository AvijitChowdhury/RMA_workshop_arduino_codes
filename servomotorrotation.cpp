// C++ code
//
#include<Servo.h>
Servo myservo;
void setup()
{
  myservo.attach(5);
}

void loop()
{
   myservo.write(90);
  delay(500);
  myservo.write(30);
  delay(500);
}