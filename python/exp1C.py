import socket

s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

port = 8000

s.connect((socket.gethostname(),port))

with open('file','wb') as f:
    while True:
        data = s.recv(1024)

print(s.recv(1024).decode())
s.close()

