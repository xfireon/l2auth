#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <log/log.h>
#include <login/server.h>
#include <core/memory.h>

int main()
{
        size_t max_players = 1;
        struct LoginServer* server = login_server_create(max_players);
        unsigned short port = 2106;

        if (server == NULL) {
                log_fatal("Not able to allocate memory for loginserver");
                exit(1);
        }

        srand((unsigned int) time(NULL));

        log_info("Starting loginserver");
        login_server_start(server, port);
        log_info("Closing loginserver");

        return 0;
}
