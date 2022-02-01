#include <iostream>
#include <wiringPi.h>

using namespace std;
char choix;


int main()
{
	int pin=1;
	if(wiringPiSetup()==-1)
	{
		return 0;
	}
	
	pinMode(pin,OUTPUT);
	
	while(choix!='Q')
	{
		
		
		cout << "------------------------------Taper :------------------------------" << endl;
		cout << "-----------------D : pour faire clignoter 2 fois la LED -----------" << endl;
		cout << "-----------------S : pour coder le mot \'SOS\' en morse -----------" << endl;
		cout << "-----------------T : pour faire clignoter 3 fois la LED -----------" << endl;
		cout << "-----------------Q : pour Quitter le programme          -----------" << endl;
		cout << "-------------------------------------------------------------------" << endl;
		cin >> choix;

		
		
		
		switch(choix)
		{
			case 'D':
			{
				digitalWrite(pin,1); //Allume la LED
				delay(150); // Attente de 150ms
				digitalWrite(pin,0); //Eteint la LED
				delay(150);
				digitalWrite(pin,1);
				delay(150); 
				digitalWrite(pin,0);
				break;
			}
			
			case 'S':
			{
				cout << "S(...) O(---) S(...)"<< endl;
				
				digitalWrite(pin,1); //Allume la LED
				delay(400); // Attente de 150ms
				digitalWrite(pin,0); //Eteint la LED
				delay(150);
				digitalWrite(pin,1);
				delay(400); 
				digitalWrite(pin,0);
				delay(150);
				digitalWrite(pin,1);
				delay(400); 
				digitalWrite(pin,0);
				delay(1500);
				
				digitalWrite(pin,1); //Allume la LED
				delay(1200); // Attente de 150ms
				digitalWrite(pin,0); //Eteint la LED
				delay(150);
				digitalWrite(pin,1);
				delay(1200); 
				digitalWrite(pin,0);
				delay(150);
				digitalWrite(pin,1);
				delay(1200); 
				digitalWrite(pin,0);
				delay(1500);
				
				digitalWrite(pin,1); //Allume la LED
				delay(400); // Attente de 150ms
				digitalWrite(pin,0); //Eteint la LED
				delay(150);
				digitalWrite(pin,1);
				delay(400); 
				digitalWrite(pin,0);
				delay(150);
				digitalWrite(pin,1);
				delay(400); 
				digitalWrite(pin,0);
				delay(1500);
				break;
			}
			case 'T':
			{
				digitalWrite(pin,1); //Allume la LED
				delay(150); // Attente de 150ms
				digitalWrite(pin,0); //Eteint la LED
				delay(150);
				digitalWrite(pin,1);
				delay(150); 
				digitalWrite(pin,0);
				delay(150);
				digitalWrite(pin,1);
				delay(150); 
				digitalWrite(pin,0);
				break;
			}
			default:
			{
				cout << "Le caractère saisi ne coorespond à aucun choix possible " << endl;
				break;
			}
		}
	
	
	
	}
	
}