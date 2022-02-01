#include <iostream>
#include <wiringPi.h>
using namespace std;
int main () {
	int mult;
	do
	{
		cout<<"Entrez un nombre multiple de 10:"<<endl;
		cin>>mult;
	}
	while ((mult%10)!=0);
	return 0;
}
