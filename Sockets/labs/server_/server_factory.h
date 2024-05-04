#pragma once
extern "C"
{
#include <netinet/in.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <stdio.h> 
#include <string.h> 
}
#include <string>

class Server_Factory
{
public:

    //default constructor
    Server_Factory();

    //Defines the server address and returns it
    sockaddr_in& Server_Address();

    //Create a Ready server
    int MakeServer();

    ~Server_Factory();

private:

    //Binds the user ip and socket to the servers'
    void Bind();
    //Creates a socket for the server
    int MakeServer_Socket();

    int server_socket_descriptor; // server socket file descriptor
    struct sockaddr_in m_address; 
};
