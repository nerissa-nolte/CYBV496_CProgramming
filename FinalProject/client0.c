/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
     Final Project - Server and Client; Send Message, reverse string, send back
     Primary resource used - YouTube: "Socket Programming Tutorial In C For Beginners | Part 1 | Eduonix"
     by user Eduonix Learning Solutions, accessed 3 July 2020.                                                */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h> // needed for close() function
#include <string.h> // needed for strlen() function

int main() {

    // create a socket
    int clientSocket;
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);

    // specify an address for the socket
    struct sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(9898);
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    
    // connect function returns an integer value, 0 is succes, -1 is error
    int connectionStatus = connect(clientSocket, (struct sockaddr *) &serverAddress, sizeof(serverAddress));
    
    // check for error with the connection
    if (connectionStatus == -1) {
        printf("There was an error making a connection to the remote socket \n\n");
    }

    // use this to run code when connected
    if (connectionStatus == 0) {
        char serverResponse[80]; // 80 char length as written in assignment instructions
        char userEntry[80]; // 80 char length as written in assignment instructions
        printf("Enter the string to send to server: ");
        
        /* preserve this code here, this code goes with the buggy code on the server
         that returns an issue with 3 character length strings, also only scans one word
        scanf("%[^\n]%*c", userEntry); // ignores newline OR
        scanf("%s", userEntry); // only allows one word
        */
        
        // can receive a sentence, instead of just one word, fgets() safer than gets()
        fgets(userEntry, sizeof(userEntry), stdin);
    
        // send the message to the server
        send(clientSocket, userEntry, sizeof(userEntry), 0);
    
        // receive data from the server and put it in serverResponse
        recv(clientSocket, &serverResponse, sizeof(serverResponse), 0);
    
        // print out the server's response, newline needed for command prompt % return
        // this may not be needed now with fgets ?
        printf("%s\n", serverResponse);
        
    }
    
    else printf("The server disconnected.");

    // close the socket, needs header unistd.h
    close(clientSocket);

    return 0;
}
