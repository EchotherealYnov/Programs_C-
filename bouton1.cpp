#include <iostream>
#include <wiringPi.h>
using namespace std;
#define BROCHE_BOUTON 25
int main()
{
int etatBouton=0;
wiringPiSetup();
pinMode(BROCHE_BOUTON, INPUT);

while (etatBouton==0){
etatBouton=digitalRead(BROCHE_BOUTON);
cout<<"Programme en cours"<<endl;
}


cout<<"Fin de programme"<<endl;


}
