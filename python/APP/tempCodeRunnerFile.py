class Vehicle():

    def __init__(self,capacity):
        self.cap = capacity

    def fare(self):
        print(self.cap*100)


class Bus(Vehicle):

    def fare(self):
        print(self.cap*110)

a1 = Vehicle(50)
a1.fare()
b1 = Bus(50)
b1.fare()