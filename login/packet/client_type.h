#ifndef L2AUTH_LOGIN_PACKET_CLIENT_TYPE_H
#define L2AUTH_LOGIN_PACKET_CLIENT_TYPE_H

enum login_packet_client_type
{
        LOGIN_PACKET_CLIENT_TYPE_REQUEST_AUTH_LOGIN = 0x00,
        LOGIN_PACKET_CLIENT_TYPE_REQUEST_LOGIN_SERVER = 0x02,
        LOGIN_PACKET_CLIENT_TYPE_REQUEST_SERVER_LIST = 0x05,
        LOGIN_PACKET_CLIENT_TYPE_GG_AUTH = 0x07
};

#endif
