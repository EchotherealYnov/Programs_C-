#include <iostream>
#include <wiringPi.h>
using namespace std;
int main() {
	int k, nbr=15;//on initialise nbr egale 15 et k entier
	while (nbr!=0)// tant que nbr est différent de 0
	{
	nbr=nbr/2;// le nbr est divisé par 2
	k++;// on avance avec un pas de 1
	cout<<"la valeur du nbr est de"<<nbr<<"au passage numéro"<<k<<endl;
	//on affiche en sorti
}
return 0;
}
