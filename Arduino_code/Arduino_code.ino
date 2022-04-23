#include <SoftwareSerial.h>

 
SoftwareSerial uart(10,11);
 
 
void setup()
{
  Serial.begin(9600);
  uart.begin(9600);
  
}
 
void loop()
{
 
  if(uart.available() > 0)
  {
    Serial.write(uart.read());
  }
 
}
