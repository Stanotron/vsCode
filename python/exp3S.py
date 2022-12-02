import socket
import time

s = socket.socket()

host = socket.gethostname()
port = 12345

s.bind((host,port))

s.listen(5)

while True:
    conn,addr = s.accept()
    conn.send(time.ctime(time.time()).encode(''))
    conn.close()