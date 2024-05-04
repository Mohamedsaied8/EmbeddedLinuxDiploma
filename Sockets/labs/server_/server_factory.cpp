#include "server_factory.h"

//default constructor
Server_Factory::Server_Factory(){}

//Defines the server address and returns it
sockaddr_in& Server_Factory::Server_Address()
{
    struct sockaddr_in address; 
    address.sin_family = AF_INET; 
    address.sin_addr.s_addr = INADDR_ANY; 
    address.sin_port = htons( 5000 ); 
    m_address = address;
    return m_address;
}

//Creates a socket for the server
int Server_Factory::MakeServer_Socket()
{
    int server_sock = socket(AF_INET , SOCK_STREAM , 0);
    if(server_sock == -1)
    {
        printf("Couldn't create server socket\n");
    }

    this->server_socket_descriptor = server_sock;
    return server_sock;
    
}

//Binds the user ip and socket to the servers'
void Server_Factory::Bind()
{
    constexpr int opt = 1;
    auto server_fd = MakeServer_Socket();
    auto address = Server_Address();
    if(setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR , &opt, sizeof(opt)))
    {
        perror("setsockopt"); 
        exit(EXIT_FAILURE); 
    }
    if (bind(server_fd, (struct sockaddr *)&m_address,  
                                 sizeof(m_address))<0) 
    { 
        perror("bind failed"); 
        exit(EXIT_FAILURE); 
    } 

}

//Create a Ready server
int Server_Factory::MakeServer()
{
    Bind();
    return this->server_socket_descriptor;
}

Server_Factory::~Server_Factory()
{
    close(server_socket_descriptor);
}