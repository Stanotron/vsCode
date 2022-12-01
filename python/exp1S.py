import socket

s = socket.socket()

host = socket.gethostname()
port = 8000

s.bind((host,port))

s.listen(5)

while True:
    c,addr = s.accept()
    c.send("hello".encode())
    c.close()
    break
s.close()
