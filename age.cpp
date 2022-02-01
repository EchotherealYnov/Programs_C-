#include <iostream>
using namespace std;
int main()
{
int age;
cout <<"Quel est votre âge?";
cin >>age ;
if (age>=18)
{ cout<<"Vous pouvez passer le permis de conduire"<<endl;
}
else if (16<=age && age<18)//ne pas oublier le <= pour la condition
{ cout<<"Vous pouvez faire de la conduite accompagnée"<<endl;
}
else if (14<=age && age<16)// pareil ne pas oublier <= pour pas d'erreur avec le else à la fin
{ cout<<"Vous pouvez passer le BSR"<<endl;
}
else
{ cout<<"Le vélo c'est bien aussi(avec ou sans petites roues)"<<endl;
}
return 0;

}







