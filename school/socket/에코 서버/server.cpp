#include "common.h"
#define PORT_NUM      10200
#define BLOG_SIZE      5
#define MAX_MSG_LEN      256

SOCKET SetTCPSServer(short pnum, int blog)
{
    SOCKET sock;
    sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); // ���� ����
    if (sock == -1)
        return -1;

    SOCKADDR_IN servaddr = { 0 }; // ���� �ּ�
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr = GetDefaultMyIP();
    servaddr.sin_port = htons(PORT_NUM);
    int re = 0;

    // ���� �ּҿ� ��Ʈ��ũ �������̽� ����
    re = bind(sock, reinterpret_cast<struct sockaddr*>(&servaddr), sizeof(servaddr));
    if (re == -1)
        return -1;
    re = listen(sock, blog);
    if (re == -1)
        return -1;
    cout << inet_ntoa(servaddr.sin_addr) << ":" << pnum << " SetUp" << endl;
    return sock;
}

void DoIt(SOCKET dosock)
{
    char msg[MAX_MSG_LEN] = "";
    while (recv(dosock, msg, sizeof(msg), 0) > 0) // ����
    {
        cout << "recv:" << msg << endl;
        send(dosock, msg, sizeof(msg), 0); // �۽�
    }
    closesocket(dosock); // ���� �ݱ�
}

void AcceptLoop(SOCKET sock)
{
    SOCKET dosock;
    SOCKADDR_IN cliaddr = { 0 };
    int len = sizeof(cliaddr);
    while (true)
    {
        dosock = accept(sock, reinterpret_cast<struct sockaddr*>(&cliaddr), &len); // ���� ����
        if (dosock == -1)
        {
            perror("Accept ����");
            break;
        }
        cout << inet_ntoa(cliaddr.sin_addr) << ":" << ntohs(cliaddr.sin_port) << "�� ���� ��û ����" << endl;
        DoIt(dosock);
    }
    closesocket(sock); // ���� �ݱ�
}

int main()
{
    WSADATA wsadata;
    WSAStartup(MAKEWORD(2, 2), &wsadata); // ���� �ʱ�ȭ
    SOCKET sock = SetTCPSServer(PORT_NUM, BLOG_SIZE); // ��� ���� ����
    if (sock == -1)
    {
        perror("��� ���� ����");
        WSACleanup();
        return 0;
    }
    AcceptLoop(sock); // Accept Loop
    WSACleanup(); // ���� ����ȭ
    return 0;
}