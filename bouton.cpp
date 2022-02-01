#include <iostream>
#include <wiringPi.h>
using namespace std;

#define BROCHE_BOUTON 25
int main()
{
		int etatBouton=0;
		wiringPiSetup();
		pinMode(BROCHE_BOUTON, INPUT);
		int compteur=0;
		while(1){
		etatBouton=digitalRead(BROCHE_BOUTON);
		delay(200);
		if(etatBouton==1)
		{
			compteur++;
			cout<<"Bouton appuyé"<<endl;
			cout<<"Nombre d'appuis: "<<compteur<<endl;
		}
	}
}
