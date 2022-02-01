#include <iostream>
#include <wiringPi.h>
using namespace std;

#define LED 1
int main(){
	int i=0;
	int nbCligno;
		wiringPiSetup();
		pinMode(LED, OUTPUT);

	cout << "Combien de fois voulez vous faire clignoter la LED ?" << endl;
	cin >> nbCligno;

		for (i=1;i<=nbCligno;i++){
				digitalWrite(LED, 1);
				delay(500);
				digitalWrite(LED, 0);
				delay(500);
				
				cout << "i=" <<i<< endl;

		}
		cout << "Fin de la boucle for, i=" << i-1 <<  endl;

}
