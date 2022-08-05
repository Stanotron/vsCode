import tkinter
from tkinter import *
window = tkinter.Tk()
window.geometry('300x300')
label = tkinter.Label(window,text = "Hello", fg ="blue", bg = "green", relief = 'solid', font = ('arial',16,'bold'))
label.grid(column = 2, row = 5)
def handle():
    label.configure(text = 'log')
btn = tkinter.Button(window,text = 'btn', command = handle)
btn.grid(column = 1, row = 3)
window.mainloop()
