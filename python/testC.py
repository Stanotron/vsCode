import socket

s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)

host = socket.gethostname()
port = 8000

msg = "HELLO".encode()

s.sendto(msg,(host,port))

