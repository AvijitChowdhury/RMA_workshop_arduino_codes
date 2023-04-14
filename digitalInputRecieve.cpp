// C++ code
//
int led = 13;
int inputLedpin=5;
int value;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(inputLedpin, INPUT);
}

void loop()
{
  value = digitalRead(inputLedpin);
  digitalWrite(led, value);
 
}