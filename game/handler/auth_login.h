#ifndef L2AUTH_GAME_HANDLER_AUTH_LOGIN_H
#define L2AUTH_GAME_HANDLER_AUTH_LOGIN_H

#include <core/l2_client.h>
#include <core/l2_raw_packet.h>
#include <game/server.h>
#include <login/dto/session_key.h>

void game_handler_auth_login
(
        struct GameServer* server,
        struct L2Client* client,
        l2_raw_packet* request,
        unsigned char* encrypt_key
);

#endif
