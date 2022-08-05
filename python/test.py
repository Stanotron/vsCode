# import sympy
# from sympy import *
# x = Symbol('x')
# e = 1/cos(x)
# print(e.series(x,0,10))
# ans = solve(x**2-4,x)
# print("roots are : ",ans)

def funct(**index):
    print("number at index 0 is " + index["zeroth"] )

funct(zeroth = "one", first  = "two")