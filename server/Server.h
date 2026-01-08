#ifndef SERVER_H
#define SERVER_H

#include <iostream>

#ifdef _WIN32
      #include <winsock2.h>
      #include <ws2tcpip.h>
      #define SOCKET_TYPE SOCKET
      
#else
      #include <sys/socket.h>
      #include <netinet/in.h>
      #include <arpa/inet.h>
      #include <unistd.h>
      #define SOCKET_TYPE int
      #define INVALID_SOCKET -1
      #define SOCKET_ERROR -1
      #define closesocket close
#endif

class Server {
      private:
            SOCKET_TYPE serverSocket;
            bool isRunning;
            int port;

      public:
            Server();
            ~Server();

            bool start();
            void stop();
};
#endif
