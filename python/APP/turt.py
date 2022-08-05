import turtle
from turtle import Screen
turtle.setup(900, 800)  # determine window size
wn = Screen()  # get reference to window
wn.title("Handling Keypress in python")
wn.bgcolor("blue")  # set background color
t = turtle.Turtle()  # create out fav. turtle
t.color("black")
t.shape("turtle")

# next functions are our event handler


def move():
    t.forward(30)  # move 2 pixels forward


def turn_left():
    t.left(90)  # turn left by 90*

def turn_right():
    t.right(90)  # turn left by 90*


def exit():
    wn.bye()  # close down the turtle window


wn.onkey(move,"space")
wn.onkey(turn_left,"Left")
wn.onkey(turn_right,"Right")
wn.onkey(exit,"e")
wn.listen()
wn.mainloop()

# import turtle
# from turtle import Screen
# sc = Screen()
# sc.bgcolor("blue")
# sc.setup(900,500)
# t = turtle.Turtle()
# sc.get
# t.color("black")
# t.shape("turtle")

# def rit():
#     t.right(90)
# def move():
#     t.forward(50)
# def lft():
#     t.left(90)
    
# sc.onkey(rit,"Right")
# sc.onkey(move,"space")
# sc.listen()
# sc.mainloop()
# import multiprocessing as mp
# print("Number of processors: ", mp.cpu_count())
