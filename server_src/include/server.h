#ifndef _SERVER_H_
#define _SERVER_H_


typedef struct tagClientInfo
{
    CHAR szClientName[CLIENT_NAME_LEN];
    ULONG_32 ulClientId;
    CHAR szSerialNum[CLIENT_SERIAL_LEN];
}ST_CLIENT_INFO;


typedef struct tagTimeOutInfo
{
    ULONG_32 ulAliveTimeOut;
    ULONG_32 ulAliveTimeOut;
}ST_TIME_OUT_INFO;

enum E_ClientStat
{
    CLIENT_ALIVE,
    CLIENT_TIMEOUT,
    CLIENT_DELETE    
}

typedef struct tagNode
{
    struct tagNode* Prev;
    struct tagNode* Next;
}ST_NODE;

typedef struct tagClientNode
{
    ST_NODE node;
    ST_CLIENT_INFO stClientInfo;
    ST_TIME_OUT_INFO stTimeOutInfo;
    E_ClientStat eStat;
    
}ST_CLIENT_NODE;

typedef struct tagClientMng
{
    ST_NODE head;
    MUTEX_T mutex;
}ST_CLIENT_MNG;




#endif
