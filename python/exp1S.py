import socket

s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

host = "120.0.0.1"
port = 12345

s.bind((host,port))

s.listen(5)

while True:
    c, addr = s.accept()
    c.send("hello".encode())
    c.close()
    break