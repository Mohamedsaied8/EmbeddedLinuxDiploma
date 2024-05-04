#include<stdio.h>
#include<string.h>	//strlen
#include<sys/socket.h>
#include<arpa/inet.h>	//inet_addr

int main(int argc , char *argv[])
{
	int socket_desc;
	struct sockaddr_in server;
	char *message , server_reply[2000];
	
	
		
	server.sin_addr.s_addr = inet_addr("192.168.1.13");
	server.sin_family = AF_INET;
	server.sin_port = htons( 5000 );

	
	
	puts("Connected\n");
	while(1){
	//Create socket
	socket_desc = socket(AF_INET , SOCK_STREAM , 0);
	if (socket_desc == -1)
	{
		printf("Could not create socket");
	}
	//Connect to remote server
	if (connect(socket_desc , (struct sockaddr *)&server , sizeof(server)) < 0)
	{
		puts("connect error");
		//return 1;
	}
	
	//Send some data
	message = "Lat = 7755.211 long 3955.122\r\n\r\n";
	if( send(socket_desc , message , strlen(message) , 0) < 0)
	{
		puts("Send failed");
		//return 1;
	}
	puts("Data Send\n");

	 close(socket_desc);
	sleep(1);
	}
	return 0;
}
