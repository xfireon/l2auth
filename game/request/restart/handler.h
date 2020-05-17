#ifndef L2AUTH_GAME_REQUEST_RESTART_HANDLER_H
#define L2AUTH_GAME_REQUEST_RESTART_HANDLER_H

#include <core/l2_raw_packet.h>
#include <game/server.h>
#include <game/client.h>

void game_request_restart_handler
(
        struct GameServer* server,
        struct GameClient* client,
        l2_raw_packet* request,
        unsigned char* encrypt_key
);

#endif