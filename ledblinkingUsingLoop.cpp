/* 
  This program blinks LED connection to the pin number 13, 8, and 4 
*/  
void setup()  
{  
  pinMode(13, OUTPUT);  
  pinMode(8, OUTPUT);  
  pinMode(4, OUTPUT);  
}  
void loop()  
{  
 // the first LED is made to blink one time  
  digitalWrite(13, HIGH);  
  delay(1000); // delay time in milliseconds  
  digitalWrite(13, LOW);  
  delay(1000);  
  // the second LED will blink two times  
  digitalWrite(8, HIGH);  
  delay(500); // the duration is 0.5 seconds  
  digitalWrite(8, LOW);  
  delay(500);  
  digitalWrite(8, HIGH);  
  delay(500);   
  digitalWrite(8, LOW);  
  delay(500);  
   // the third LED will blink three times  
  for( int i = 0; i < 3; i = i +1 )  
  {  
  digitalWrite(4, HIGH);  
  delay(500);   
  digitalWrite(4, LOW);  
  delay(500);  
    // We can adjust the delay time accordingly  
  }  
}  