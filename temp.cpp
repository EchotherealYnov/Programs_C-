#include <time.h>
#include <wiringPi.h>
#include <string.h>
#include <iostream>
#include <fstream>//
#include <sstream>
using namespace std;
int main()
{
ifstream fichier ("/sys/bus/w1/devices/28-00000b2ea0e2/w1_slave",ios::in);//
if (fichier)//
{
		string contenu;//

	while (getline(fichier,contenu))//
{
		fichier.seekg(69, ios::beg);
		stringstream geek(contenu);
		float x;
		geek >>x;
		x=x/1000;
		time_t tmm = time(0);
		char* dt = ctime(&tmm);
		cout << "La date est "<<dt<<"Température = "<<x<<endl;
		delay(1000);
}
}
else
cout << "Imposible d'ouvrir le fichier!"<<endl;
return 0;
}
