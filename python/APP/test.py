# poly1 operator overloading
# class A:
#     def __init__(self, a):
#         self.a = a

#     def __add__(self, o):
#         return self.a + o.a


# ob1 = A(1)
# ob2 = A(2)
# ob3 = A("in")
# ob4 = A("it")

# print(ob1 + ob2)
# print(ob3 + ob4)

# poly2 method overloading
 
# def add(type,a,b):
#      if type == "str":
#          answer = a+b
#          print(answer)
#      elif type == "int":
#          answer = a+b
#          print(answer)

# add("int",5,6)
# add("str","AS","US")        


# poly3 method overriding


# class Vehicle():

#     def __init__(self,capacity):
#         self.cap = capacity

#     def fare(self):
#         print(self.cap*100)


# class Bus(Vehicle):

#     def fare(self):
#         print(self.cap*110)

# a1 = Vehicle(50)
# a1.fare()
# b1 = Bus(50)
# b1.fare()

#default constructor


# class Vehicle():

#     def __init__(self):
#         self.cap = 50

#     def fare(self):
#         print(self.cap*100)

# a1 = Vehicle()
# a1.fare()


#parameterized constructor

# class Vehicle():

#     def __init__(self,capacity):
#         self.cap = capacity

#     def fare(self):
#         print(self.cap*100)

# a1 = Vehicle(50)
# a1.fare()


# non-parameterized constructor

# class Vehicle():

#     def __init__(self):
#         self.cap = 50

#     def fare(self):
#         print(self.cap*100)

# a1 = Vehicle()
# a1.fare()


class test():
    def __init__(self,a):
        self.a = a
    def printval(self):
        print(self.a)
    def __del__(self):
        print("Deleted")
obj = test(10)
obj.printval()
del obj   
    