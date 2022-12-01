import socket

s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)

host = socket.gethostname()
port = 8000

message = "shit".encode()

s.sendto(message,(host,port))