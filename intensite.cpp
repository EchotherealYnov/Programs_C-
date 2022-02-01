#include <iostream>
#include <wiringPi.h>
using namespace std;
#define LED 1
	int main()
{
wiringPiSetup();
int i;
int pas;
int max;
int delai;
pinMode(LED, PWM_OUTPUT);
cout<< "Quelle valeur max d'intensité voulez-vous mettre?"<<endl;
cin>>max;
cout<<"Quelle valeur de pas voulez-vous mettre ?"<<endl;
cin>>pas;
cout<<"Quelle delai de clignotement voulez-vous mettre?"<<endl;
cin>> delai ;

while (1){
for (i=0;i<max;i=i+pas) {
pwmWrite(1, i);
delay(delai);
cout<<"intensité de la Led : "<<i<<endl;
}
}
}
