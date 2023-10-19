#include "common.h"
#define PORT_NUM      10200
#define MAX_MSG_LEN      256

int main()
{
    WSADATA wsadata;
    WSAStartup(MAKEWORD(2, 2), &wsadata); // ���� �ʱ�ȭ

    char server_ip[40] = "";
    printf("���� ip : ");
    gets_s(server_ip, sizeof(server_ip));

    SOCKET sock;
    sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); // ���� ����

    if (sock == -1) return -1;

    SOCKADDR_IN servaddr = { 0, }; // ���� �ּ�
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr(server_ip);
    servaddr.sin_port = htons(PORT_NUM);

    int re = 0;
    re = connect(sock, (struct sockaddr*)&servaddr, sizeof(servaddr)); // ���� ��û

    if (re == -1) return -1;

    char msg[MAX_MSG_LEN] = "";

    while (true) 
    {
        gets_s(msg, MAX_MSG_LEN);
        send(sock, msg, sizeof(msg), 0); // �۽�
        if (strcmp(msg, "exit") == 0) break;
        recv(sock, msg, sizeof(msg), 0); // ����
        printf("���� : %s\n", msg);
    }

    closesocket(sock); // ���� �ݱ�

    WSACleanup(); // ���� ����ȭ
    return 0;
}