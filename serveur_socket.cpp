#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <cstring>
#include <iostream>

using namespace std;
 	
int main()
{
struct sockaddr_in serveur;
struct sockaddr_in adIPv4;
 
 int desc=socket(PF_INET,SOCK_STREAM,0);
 int taille,descClient, ret;
 
  if (desc == -1) 
    {
        cout<<"Could not create socket"<<endl;
    }
    
    cout << "Socket définit " << endl;
    
 taille=sizeof(struct sockaddr_in);
 //char *msg1="bonjoursnir2021";
 char msg2[200];

		/*adIPv4.sin_family=PF_INET; 
		adIPv4.sin_port = htons(8080);
		inet_aton("192.168.2.49",&adIPv4.sin_addr);
		*/
 serveur.sin_family=PF_INET; 
 serveur.sin_port = htons(8080);
 inet_aton("192.168.2.49",&serveur.sin_addr);


 cout << "structure complétée " << endl;
	
 ret=bind(desc, (struct sockaddr * )&serveur, sizeof(serveur));
 if (ret <0 )
 {
	  cout << "Socket construit " << endl;
 }

 ret=listen(desc, 2);
 if (ret > -1)
 {
	  cout << "socket en écoute " << endl;
 }

 descClient=accept(desc, (struct sockaddr*)&adIPv4, (socklen_t*)&taille);
 cout << "client connecté " << descClient << endl;
 //send(descClient, "Bonjour\n", 8, 0 ); 

// recv(descClient, msg2, 14, 0);
	recv(descClient, msg2, 14, 0);
	
	cout << "reception ok " << endl;
	cout << "Affichage " << endl;
	cout <<msg2<<"message "<<endl;
	

	close (desc);


return 0;
}

