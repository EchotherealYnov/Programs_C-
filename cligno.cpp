²
#include <iostream>
#include <wiringPi.h>
using namespace std;
int main(void)
{
int pin =1;
if(wiringPiSetup()==-1)
{
  return 0;
}
pinMode(pin,OUTPUT);//on indique que le GPIO.1 est en mode sortie
while(1)
{
  digitalWrite(pin,1);//la valeur est définie à HIGH (3.3v)
  delay(150); //on attend 500ms
  digitalWrite(pin,0);//la valeur est définie à LOW (0V)
  delay(150);
}
  return 0;
}
