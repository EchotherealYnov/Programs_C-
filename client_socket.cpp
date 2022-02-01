#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <cstring>
#include <iostream>

using namespace std;

/*int socket(int domaine, int type, int protocol );
 	
 	 struct sockaddr_in() 
 	{
		sa_family_t 	sin_family; 			 
		uint16_t 	sin_port;			
		struct in_addr	 sin_addr;			
 	}
 	 struct sockaddr()
 	{
		sa_family_t sa_family;
		char sa_data[14];		
 	}
 */	 			 			
	

/*	 int connect(int socket,const struct sockaddr *adresse,sock len_t 				sizeof(structsockaddr_in))
		client.sin_family=PF_INET; 			
		client.sin_port = htons(8080) ;			 			
	
	
	
	

	int inet_aton(const char *caip, struct in_addr *ipadr);
	
	 void bzero(void s*,size_t n );
	  struct in_addr()
 	{
		unsigned long s_addr;
 	}
 	 //bzero(struct in_addr, adIPV4);
 	*/
int main()
{
 struct sockaddr_in adIPv4;
 
 int desc= socket(PF_INET,SOCK_STREAM,0);
 
     if (desc == -1) 
    {
        cout<<"Could not create socket"<<endl;
    }
 adIPv4.sin_family=PF_INET; 
 adIPv4.sin_port = htons(8080);
 inet_aton("192.168.2.49",&adIPv4.sin_addr);
 string msg="client S2SNIR\n";	
 
 
	if ( connect(desc, (struct sockaddr*)& adIPv4,sizeof( adIPv4)) < 0)
	{
		cout <<"Erreur de connection"<<endl;	
		return 1;
	}
		
	cout << "coonnected" << endl;
		
    if (send(desc, msg.c_str(), msg.size(), 0) < 0)
    {
        cout<<"Send failed\n"<<endl;
        return 1;
    }
    
		cout << "sended\t" << msg << endl;
 
 close (desc);


return 0;
}
