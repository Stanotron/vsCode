class Vehicle():
    color = "white"

    def __init__(self, name, max_speed, mileage, capacity):
        self.name = name
        self.speed = max_speed
        self.mile = mileage
        self.cap = capacity

    def fare(self):
        print(self.cap*100)


class Bus(Vehicle):

    def fare(self):
        print(self.cap*110)

    def prnt(self):
        print("Vehicle Name: "+self.name+" Speed: " +
              str(self.speed)+" Mileage: "+str(self.mile))


class Car(Vehicle):
    def seating_capacity(self, capacity=5):
        return super().seating_capacity(capacity)

    def prnt(self):
        print("Vehicle Name: "+self.name+" Speed: " +
              str(self.speed)+" Mileage: "+str(self.mile))


b1 = Bus("School Volvo", 180, 12, 50)
# c1 = Car("Audi Q5", 240, 18)
b1.prnt()
b1.fare()
