/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
     Final Project - Server and Client; Send Message, reverse string, send back
     Primary resource used - YouTube: "Socket Programming Tutorial In C For Beginners | Part 1 | Eduonix"
     by user Eduonix Learning Solutions, accessed 3 July 2020.                                            */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h> // needed for close() function
#include <string.h> // needed for strlen() function

int main() {
    char clientMessage[80];
    
    // create the server socket
    int serverSocket;
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
 
    // define the server address
    struct sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(9898);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // bind the socket to IP address and port
    bind(serverSocket, (struct sockaddr*) &serverAddress, sizeof(serverAddress));

    listen(serverSocket, 5); // allows up to 5 connections in waiting, according to video
    
    int client_socket;
    client_socket = accept(serverSocket, NULL, NULL); // exchange NULL if want IP address
    
    // receive the data from client, newline needed for command prompt return
    // and avoid the % sign from prompt interfering with the message
    recv(client_socket, &clientMessage, sizeof(clientMessage), 0);
    
    // assignment requires printing message to stdout on server
    printf("%s\n", clientMessage);
    
    /* Preserving this code here. Bug for 3 char strings
    int len = strlen(clientMessage);
    char reverseMesg [80];
    printf("\n%d\n", len);
    for (int i = 0; i < len; i++) {
        reverseMesg[len-i-1] = clientMessage[i];
    }                                                             */
    
    // tutorialgateway.org is the source for below, as above code had bug
    char temp;
    int i, j, len;
    len = strlen(clientMessage) - 1;
    
    for (i = 0; i < strlen(clientMessage)/2; i++) {
        temp = clientMessage[i];
        clientMessage[i] = clientMessage[len];
        clientMessage[len--] = temp;
    }
    
    // send the reversed message to the client
    // send(client_socket, reverseMesg, sizeof(reverseMesg),0);
    send(client_socket, clientMessage, sizeof(clientMessage),0);

    // close the socket, needs header unistd.h
    close(serverSocket);

    return 0;
}
