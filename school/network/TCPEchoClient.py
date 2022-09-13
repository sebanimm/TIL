from socket import *

s_ip = 'localhost'
s_port = 8888
s_addr = (s_ip, s_port)

c_sock = socket(AF_INET, SOCK_STREAM)
c_sock.connect( s_addr )