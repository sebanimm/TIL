from socket import *

s_ip = 'localhost'
s_port = 8888
s_addr = (s_ip, s_port)

s_sock = socket(AF_INET, SOCK_DGRAM)
s_sock.bind(s_addr)

s_sock.settimeout(5)

data, c_addr = s_sock.recvfrom(1024)

print("클라이언트 주소 : ", c_addr)
print("수신된 데이터는", data.decode("utf-8"))

s_sock.close()