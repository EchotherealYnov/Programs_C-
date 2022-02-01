#include <iostream>
#include <wiringPi.h>
using namespace std;
#define LED 1 //on definit la LED sur le GPIO 1 donc broche 12 physique
int main(){
wiringPiSetup();
int i;
pinMode(LED, PWM_OUTPUT);

while (1){ // boucle infini
for (i=0;i<1024;i=i+5){ //boucle augmentant l'intensité de 5 en 5 jusqu'a 1024
pwmWrite(1, i);
delay(20);//delai de 20 ms
cout<<"intensité de la Led : "<<i<<endl;
}
for (i;i>0;i=i-5) { //boucle diminuant l'intensité  de 5 en 5 jusqu'a 0
pwmWrite(1, i);
delay(20); //delai de 20 ms
cout<<"intensité de la Led : "<<i<<endl;
}
}
}

