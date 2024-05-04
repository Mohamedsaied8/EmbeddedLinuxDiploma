#include "socket_factory.h"

int main(int argc , char *argv[])
{
	int socket_desc;
	char* message;
	char* server_reply[2000];
	
	while(1)
	{

	SocketFactory socket_factory("192.168.1.36");
	int socket_desc = socket_factory.MakeClient();
	
	//Send some data
	message = "Lat = 7755.211 long 3955.122\r\n\r\n";
	if( send(socket_desc , message , strlen(message) , 0) < 0)
	{
		puts("Send failed");
		return 1;
	}
	puts("Data Send\n");
	close(socket_desc);
	sleep(1);
	}
	return 0;
} 
 