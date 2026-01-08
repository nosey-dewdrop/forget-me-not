#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <cstdint>

#define PROTOCOL_VERSION 1
enum PacketType{
      PKT_HELLO= 1,
      PKT_BYE = 2
};

#define MAX_MESSAGE_LEN 500
struct SimplePacket{
      uint8_t type;
      char message[MAX_MESSAGE_LEN];
};

#endif 

/*
#define read by preprocessor. preprocessor works before the compiler. gives the resultto it.
compiler reads the result of preprocessor. c++ to machine code. does not read #
find & replace
no type, only change the text.*/