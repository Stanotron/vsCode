import socket

s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

host = "120.0.0.1"
port = 12345

s.connect((host,port))

print(s.recv(1024).decode())

s.close()
