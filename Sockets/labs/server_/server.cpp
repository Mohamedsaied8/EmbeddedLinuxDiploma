#include "server_factory.h"

int main()
{
   //creates a server
    Server_Factory server1;
    int server_socket = server1.MakeServer();
    constexpr int addrlen = sizeof(server1.Server_Address());
    constexpr int number_users = 3;
    int client_socket; 
    char buffer[1024] = {0};

    while(1)
    {
        if (listen(server_socket, number_users) < 0) 
        { 
            perror("listen"); 
            exit(EXIT_FAILURE); 
        } 
        
        if (( client_socket = accept(server_socket, (struct sockaddr *)&server1.Server_Address(),  (socklen_t*)&addrlen)<0)) 
        { 
            perror("accept"); 
            exit(EXIT_FAILURE); 
        } 
        int valread = read( client_socket , buffer, 1024); 
        printf("%s\n",buffer ); 
        close(client_socket);
    }


    return 0;
} 