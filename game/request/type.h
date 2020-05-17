#ifndef L2AUTH_GAME_REQUEST_REQUEST_TYPE_H
#define L2AUTH_GAME_REQUEST_REQUEST_TYPE_H

enum game_request_type
{
         GAME_REQUEST_TYPE_PROTOCOL_VERSION = 0x00,
         GAME_REQUEST_TYPE_MOVE_BACKWARDS_TO_LOCATION = 0x01,
         GAME_REQUEST_TYPE_AUTH_REQUEST = 0x08,
         GAME_REQUEST_TYPE_NEW_CHAR = 0x0e,
         GAME_REQUEST_TYPE_CREATE_CHAR = 0x0b,
         GAME_REQUEST_TYPE_SELECTED_CHAR = 0x0d,
         GAME_REQUEST_TYPE_REQUEST_AUTO_SS_BSPS = 0xd0,
         GAME_REQUEST_TYPE_REQUEST_QUEST_LIST = 0x63,
         GAME_REQUEST_TYPE_ENTER_WORLD = 0x03,
         GAME_REQUEST_TYPE_RESTART = 0x46,
         GAME_REQUEST_TYPE_VALIDATE_POS = 0x48,
         GAME_REQUEST_TYPE_SAY = 0x38
};

#endif