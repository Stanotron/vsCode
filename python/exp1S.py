import socket

s = socket.socket()

host = socket.gethostname()
port = 8000

s.bind((host,port))

s.listen(5)

while True:
    c,addr = s.accept()
    filename = 'mytext.txt'
    f = open(filename,'rb')
    I = f.read(1024)
    while (I):
        c.send(I)
        c.close()
