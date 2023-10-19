#include "common.h"
#define PORT_NUM      10200
#define BLOG_SIZE      5
#define MAX_MSG_LEN      256

SOCKET SetTCPSServer(short pnum, int blog)
{
    SOCKET sock;
    sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); // 소켓 생성
    if (sock == -1)
        return -1;

    SOCKADDR_IN servaddr = { 0 }; // 소켓 주소
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr = GetDefaultMyIP();
    servaddr.sin_port = htons(PORT_NUM);
    int re = 0;

    // 소켓 주소와 네트워크 인터페이스 결합
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
    while (recv(dosock, msg, sizeof(msg), 0) > 0) // 수신
    {
        cout << "recv:" << msg << endl;
        send(dosock, msg, sizeof(msg), 0); // 송신
    }
    closesocket(dosock); // 소켓 닫기
}

void AcceptLoop(SOCKET sock)
{
    SOCKET dosock;
    SOCKADDR_IN cliaddr = { 0 };
    int len = sizeof(cliaddr);
    while (true)
    {
        dosock = accept(sock, reinterpret_cast<struct sockaddr*>(&cliaddr), &len); // 연결 수락
        if (dosock == -1)
        {
            perror("Accept 실패");
            break;
        }
        cout << inet_ntoa(cliaddr.sin_addr) << ":" << ntohs(cliaddr.sin_port) << "의 연결 요청 수락" << endl;
        DoIt(dosock);
    }
    closesocket(sock); // 소켓 닫기
}

int main()
{
    WSADATA wsadata;
    WSAStartup(MAKEWORD(2, 2), &wsadata); // 윈속 초기화
    SOCKET sock = SetTCPSServer(PORT_NUM, BLOG_SIZE); // 대기 소켓 설정
    if (sock == -1)
    {
        perror("대기 소켓 오류");
        WSACleanup();
        return 0;
    }
    AcceptLoop(sock); // Accept Loop
    WSACleanup(); // 윈속 해제화
    return 0;
}