import socket

s = socket.socket()

host = socket.gethostname()
port = 9000

s.bind((host,port))

s.listen(3)

while True:
    c,addr = s.accept()
    filename = 'mytext.txt'
    f = open(filename,'rb')
    I = f.read()
    while (I):
        c.send(I)
        c.close()
