// C++ code
#include<Servo.h>
Servo myservo;
int value;
void setup()
{
  myservo.attach(5);
}

void loop()
{
  value = analogRead(A0);
  value=map(value,0,1023,0,180);
  myservo.write(value);
}