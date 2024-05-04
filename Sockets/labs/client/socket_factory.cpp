#include "socket_factory.h"

SocketFactory::SocketFactory(const std::string &ipAddress_):ipAddress(ipAddress_)
{
   
}

SocketFactory::~SocketFactory()
{
    close(socket_descriptor);
}

int SocketFactory::MakeSocket(struct sockaddr_in &address)
{
	address.sin_addr.s_addr = inet_addr(ipAddress.c_str());
	address.sin_family = AF_INET;
	address.sin_port = htons( 5000 );
    
    //Create socket
	int sock = socket(AF_INET , SOCK_STREAM , 0);
	if (sock == -1)
	{
		printf("Could not create socket");
	}
    this->socket_descriptor = sock;
    return sock;

}

int SocketFactory::MakeClient()
{
    struct sockaddr_in server;
    auto socket =  MakeSocket(server);
    //Connect to remote server
    if (connect(socket , (struct sockaddr *)&server , sizeof(server)) < 0)
    {
        puts("connect error");
        return -1;
    }
    puts("Connected\n");
    return socket;
} 


