import numpy
import random
import statistics

data = []
for i in range (10):
    a = random.randint(1,50)
    data.append(a)

x = numpy.mean(data)
print ("mean is:  " + str(x))

y = numpy.median(data)
print("median is: "+ str(y))

z = statistics.mode(data)
print("mode is: "+str(z))

a = numpy.std(data)
print("standard devaition is: "+str(a))

b = numpy.var(data)
print("variance is: "+str(b))
