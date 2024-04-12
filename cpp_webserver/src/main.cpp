#include "TcpServer.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    unsigned short port = 8090;
    chdir("/home/jacob/webserver/c_webserver/data/luffy");
    // 启动服务器
    TcpServer* server = new TcpServer(port, 4);
    server->run();
    return 0;
}