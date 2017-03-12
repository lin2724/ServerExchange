#ifndef _SERVER_PUB_H_
#define _SERVER_PUB_H_

#include "base_type.h"

#define CLIENT_NAME_LEN 64
#define CLIENT_SERIAL_LEN 64
#define ADDR_IP_LEN 32

typedef struct tagClientUpInfo
{
    CHAR szClientName[CLIENT_NAME_LEN];
    ULONG_32 ulClientId;
    CHAR szSerialNum[CLIENT_SERIAL_LEN];
}ST_CLIENT_UP_INFO;

typedef struct tagAddrInfo
{
    CHAR szAddrIp[ADDR_IP_LEN];
    ULONG_32 ulPort;
}ST_ADDR_INFO;






















#endif
