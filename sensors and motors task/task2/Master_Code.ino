#include <Wire.h>  
#include <Servo.h>
#define ServoPin 3
Servo myservo;
float t; //temperature value
float l; //light intensity indicator value

void setup()
{
  Wire.begin();
  Serial.begin(9600);
  pinMode(ServoPin, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
  myservo.attach(ServoPin);
}

void loop(){
 Wire.requestFrom(8,1);   //request data from slave 
 while (Wire.available()) 
 { 
   t = Wire.read()*4;     //multiply by 4 to reverse divison made on slave side
 }
  t=t*5.0/1023.0*100.0-50.0; //converting to celsius
  Serial.println(t);
  if (t>50)   //nested if statements to control indicatir leds
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
  }
  else if (t>30)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
  }
   else if(t>20)
   {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
   }
  else{digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
   }
  Wire.requestFrom(8, 1);    
 while (Wire.available()) 
 { 
   l = Wire.read()*4;
 }
  l=l*5.0/1023.0;
  if (l>3) //nested if statements to control servo (shutter)
  {
    myservo.write(180);
  }
  else if (l>2)
  {myservo.write(100);
  }
   else if(l>1)
   {myservo.write(20);
   }
  Serial.println(l);
     
          
  delay(500);
}
