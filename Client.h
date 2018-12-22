
#ifndef PROJECT_CLIENT_H
#define PROJECT_CLIENT_H


#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <string>

using namespace std;

class Client {
    int socketId;
    const string ip;
    int portno;
public:
    Client(const string ip, int port);

    void sendToClient(const string address, double val);

    void connectClient(int port, string ip);
};


#endif //PROJECT_CLIENT_H
