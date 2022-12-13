import socket

s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)

host = socket.gethostname()
port = 8000

s.bind((host,port))

while True:
    data,addr = s.recvfrom(1024)
    print(data)

s.close()