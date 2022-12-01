import socket

s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

port = 8000

s.connect((socket.gethostname(),port))

print(s.recv(1024).decode())
s.close()

