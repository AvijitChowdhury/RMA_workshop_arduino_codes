// C++ code
//
int led = 9;
int led2= 8;
int led3 = 7;
int value;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(A0);
  Serial.println(value);
  if(value <= 350){digitalWrite(led,HIGH);
                   delay(1000);
                   digitalWrite(led,LOW);
                   delay(1000);
  }
  else if(value <= 750){digitalWrite(led2,HIGH);
                   delay(1000);
                   digitalWrite(led2,LOW);
                   delay(1000);
                       }else{
    digitalWrite(led3,HIGH);
                   delay(1000);
                   digitalWrite(led3,LOW);
                   delay(1000);
  }
  
}