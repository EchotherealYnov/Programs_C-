#include <iostream>
#include <string.h>
#include <wiringPi.h>
using namespace std;
string cond;
int main(void)
{
	int pin=1;
	if (wiringPiSetup()==-1)
	{
		return 0;
	}
	pinMode(pin, OUTPUT);
	cout<<"Pour allumer la led, tapez a"<<endl;
	cout<<"Pour éteindre la led, tapez b"<<endl;
	cin>>cond;
	if (cond=="a")
	{
		cout<<"Allumé"<<endl;
		digitalWrite(pin,HIGH); //Allume la LED
	}
	else if (cond=="b")
	{
		cout<<"Eteint"<<endl;
		digitalWrite(pin,LOW);//Eteint la led

	}
	else
	{
		cout<<"Erreur, tapez a ou b!"<<endl;
	digitalWrite(pin, HIGH);//allume la led
	delay(1000); //Délai de 1 seconde
	digitalWrite(pin, LOW);//Eteint la led
	}
}
