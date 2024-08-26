#include <Wire.h>
#define Tsensor A1 // temeperautre sensor pin
#define Lsensor A0 //light sensor pin
int flag=1;  //flag to select which sensor reading will be sent
void setup()
{
  Wire.begin(8);  //initializing connection
  Wire.onRequest(event); 
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(Tsensor,INPUT);
  pinMode(Lsensor,INPUT);
}

 void loop()
{}
void event(){
   
   int l=analogRead(A0);
  
   int t=analogRead(A1);
   
  if (flag){
     Wire.write(t/4); //when flag is true temperature is sent 
                      // it is divided by 4 to maintain the size of 1 byte 
                      // as analogu read return value that reaches 1023.0 
    //toggle flag to send other sensor reading
    flag=0;

  }
   else
   {Wire.write(l/4);
    flag=1;
   }
 }