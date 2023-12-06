#include "common.h"
#define PORT_NUM      10200
#define MAX_MSG_LEN   256
#define SERVER_IP     "10.150.150.138"
void RecvThreadPoint(void* param)
{
    SOCKET sock = (SOCKET)param;
    char msg[MAX_MSG_LEN];
    while (recv(sock, msg, MAX_MSG_LEN, 0) > 0)
    {
        printf("%s\n", msg);
    }
    closesocket(sock);
}
int main()
{
    WSADATA wsadata;
    WSAStartup(MAKEWORD(2, 2), &wsadata);
    SOCKET sock;
    sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    SOCKADDR_IN servaddr = { 0 };
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr(SERVER_IP);
    servaddr.sin_port = htons(PORT_NUM);
    connect(sock, (struct sockaddr*)&servaddr, sizeof(servaddr));
    _beginthread(RecvThreadPoint, 0, (void*)sock);
    char msg[MAX_MSG_LEN] = "";
    while (true)
    {
        gets_s(msg, MAX_MSG_LEN);
        send(sock, msg, sizeof(msg), 0);
        if (strcmp(msg, "exit") == 0) break;
    }
    closesocket(sock);
    WSACleanup();
    return 0;
}