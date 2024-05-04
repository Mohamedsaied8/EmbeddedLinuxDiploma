#pragma once
extern "C"
{
#include <sys/socket.h>
#include <arpa/inet.h>	//inet_addr
#include <stdio.h>
#include <unistd.h>
#include <string.h>	//strlen
#include "time.h"
}
#include <string>

class SocketFactory
{
    public:
    SocketFactory(const std::string &ipAddress_);

    int MakeSocket(struct sockaddr_in &address);
    int MakeClient();
    ~SocketFactory();

    private:
    const std::string &ipAddress;
    int socket_descriptor;
}; 
