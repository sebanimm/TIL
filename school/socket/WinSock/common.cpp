#include "common.h"
using namespace std;

IN_ADDR GetDefaultMyIP();
int main()
{
	WSADATA wsadata;
	WSAStartup(MAKEWORD(2, 2), &wsadata); // ���� �ʱ�ȭ
	IN_ADDR addr;

	addr = GetDefaultMyIP();
	cout << inet_ntoa(addr) << endl;

	WSACleanup(); // ���� ����
	return 0;
}

IN_ADDR GetDefaultMyIP()
{
	char localhostname[MAX_PATH];
	IN_ADDR addr = { 0, };

	if (gethostname(localhostname, MAX_PATH) == SOCKET_ERROR)
	{
		return addr;
	}
	HOSTENT* ptr = gethostbyname(localhostname);
	while (ptr && ptr->h_name)
	{
		if (ptr->h_addrtype == PF_INET)
		{
			for (int i = 0; ptr->h_addr_list[i]; i++) {
				memcpy(&addr, ptr->h_addr_list[i], ptr->h_length);
				cout << inet_ntoa(addr) << endl;
			}
		}
		ptr++;
	}
	return addr;
}