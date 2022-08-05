# import turtle
# from turtle import *
# turtle.setup(900,700)
# sc = Screen()
# sc.bgcolor("white")
# t = turtle.Turtle()
# def fwd():
#     t.forward(40)
# def right():
#     t.right(90)
# def left():
#     t.left(90)
# def mouse(x,y):
#     t.goto(x,y)
# def ext():
#     sc.bye()
# def chalo():
#     t.forward(60)
#     t.left(90)
#     sc.ontimer(chalo,1000)
# sc.onkey(chalo,"space")    
# sc.onkey(right,"Right")
# sc.onkey(left,"Left")
# sc.onclick(mouse)
# sc.onkey(ext,"e")
# sc.listen()
# sc.mainloop()

# import tkinter
# from tkinter import *
# window  = Tk()
# window.geometry("300x300")
# lbl = tkinter.Label(window,text = "it is a test",bg = "green", fg = "white", font = ("arial",14))
# lbl.grid(column = 4,row  = 0)
# def handle():
#     lbl.configure(text = "test pass")
# btn = tkinter.Button(window,text = "click", command = handle)
# btn.grid(row=20, column =10)
# window.mainloop()

# import socket 
# from socket import *
# s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
# host = s.gethostname()
# port = 9999
# s.bind((host,port))
# s.listen(5)
# while true:
#     conn,addr = s.accept()
#     conn.send("hi")
#     conn.close()
    
# import socket 
# from socket import *
# s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
# host = s.gethostname()
# port = 1000
# s.conn((host,port))
# print(s.recv())
# s.close()

# import socket 
# from socket import *
# s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
# host = s.gethostname()
# port = 9999
# s.bind((host,port))
# while true:
#     data,addr = s.recvfrom(1034)
#     print(data)
    
# import socket 
# from socket import *
# s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
# host = s.gethostname()
# port = 1024
# s.sendto((host,port))
      
# import kanren
# from kanren import run,var,fact
# from kanren.assoccomm import eq_assoccomm as eq
# from kanren.assoccomm import commutative,associative

# mul = 'mul'
# add = 'add'

# fact(commutative,add)
# fact(commutative,mul)
# fact(associative,mul)
# fact(associative,add)

# a,b,c = var('a'),var('b'),var('c')

# eq1 = (mul,(add,a,b),3)
# eq2 = (mul,c,(add,3,4))

# run(0,(a,b,c),eq(eq1,eq2))

# def square(x):
#     return x*x
# def print_res(x,func):
#     return func(x)
# res = print_res(5,square) 
# print(res) 

# from sympy import *
# x = Symbol('x')
# x = solve(x**2-4,x)
# print(x)
  
# import pyDatalog
# from pyDatalog import *
# pyDatalog.create_atmos('son,daughter,male,female,parent,x,y')
# +male('a')
# +male('b')
# +female('c')
# +parent('a','c')
# +parent('a','b')

# son(x,y) <= parent(y,x) and male(x)
# daughter(x,y) <= parent(y,x) and female(x)

# print(pyDatalog.ask('son(c,y)'))

# import time
# import _thread
# def threadtime(threadname,delay):
#     count = 0
#     while count<3:
#         time.sleep(delay)
#         count+=1
#         print(threadname, time.ctime(time.time()))

# try:
#     _thread.start_new_thread(threadtime,("thread2",1,))
#     _thread.start_new_thread(threadtime,("thread1",0,))
# except:
#     print("error")

# while 1:
#     pass

# import multiprocessing
# from multiprocessing import Process
# def square(x):
#     for i in x:
#         print(i*i)
    
# if __name__ == '__main__':
#     x = [3,4,5,6,7]
#     x2 = [7,8,9]
#     p1 = Process(target = square, args = (x,))
#     p2 = Process(target = square, args = (x2,))
#     p2.start()
#     p1.start()
#     p1.join()
#     p2.join()
# print("Done")    

# from concurrent.futures import process
# import multiprocessing
# from multiprocessing import Process, Pipe
 
# def function(child):
#     child.send("helew")
#     child.close()
    
# if __name__ == '__main__':
#     pt,child = Pipe()
#     p1 = Process(target=function,args=(child,))
#     p1.start()
#     print(pt.recv())
#     p1.join()

# import multiprocessing
# from multiprocessing import Process,Queue

# def junk(x,q):
#     for i in x:
#         z = i*i
#         q.put(z)
        
# if __name__ == '__main__':
#     q = Queue()
#     x = [2,3,4,5,6]
#     p1 = Process(target = junk, args= (x,q))
#     p1.start()
#     p1.join()
#     while q:
#         print(q.get())

# import multiprocessing
# from multiprocessing import Process,Pool

# def square(x):
#     return x*x

    
# if __name__ == '__main__':
#     p = Pool(processes=3)
#     x = [3,4,4,5]
#     output = p.map(square,x)
#     print(output)



# from concurrent import futures
# import threading
# import time

# def tk(n):
#     print('{} : sleeping {}'.format(threading.current_thread().name,n))
#     time.sleep(n/10)
#     print('{} : done with {}'.format(threading.current_thread().name,n))
#     return n/10

# ex = futures.ThreadPoolExecutor(max_workers=2)
# res = ex.map(tk,range(5,0,-1))
# print(res)    



# import gevent
# from gevent import Greenlet

# def txt(msg,n):
#     gevent.sleep(n)
#     print(msg)
    
# t1 = Greenlet.spawn(txt,"nigg",2)
# t2 = Greenlet.spawn(txt,"dat",1)
# thread = [t1,t2]
# gevent.joinall(thread)

# from functools import partial
# def mult(x,y):
#     print(x*y)
    
# f1 = partial(mult,2)
# f1(3)

# import multiprocessing
# from multiprocessing import *

# def square( x):
#     return x*x

# if __name__ == "__main__":
#     p = Pool(processes=2)
#     x = [2 ,3 ,4 ,5]
#     out = p.map(square,x)
#     print(out)
    
# from concurrent import futures
# import threading
# import time

# def func(n):
#     print('{} sleepig {} '.format(threading.current_thread().name,n))
#     time.sleep(n/10)
#     print('{} done with {} '.format(threading.current_thread().name,n))
    
# inpt = futures.ThreadPoolExecutor(max_workers=3)
# out = inpt.map(func,range(5,0,-1))
# print(out)    

# from sympy import *
# x =Symbol("x")
# x = solve(x**2-4,x)
# print(x)

from automata.fa.dfa import DFA

dfa = DFA(
    states = {'a','b','c'},
    input_symbols= {'0','1'},
    transitions = {
        'a': {'0':'a','1':'b'},
        'b': {'0':'a','1':'c'},
        'c': {'0':'c','1':'a'},
    },
    initial_state='a',
    final_states = {'b'}
)

if(dfa.accepts_input('01')):
    print("success")
else:
    print("fail")