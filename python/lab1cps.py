# import numpy
# import random
# import statistics

# data = []
# for i in range (10):
#     a = random.randint(1,50)
#     data.append(a)

# x = numpy.mean(data)
# print ("mean is:  " + str(x))

# y = numpy.median(data)
# print("median is: "+ str(y))

# z = statistics.mode(data)
# print("mode is: "+str(z))

# a = numpy.std(data)
# print("standard devaition is: "+str(a))

# b = numpy.var(data)
# print("variance is: "+str(b))


# numbers = [1.11, 2.413, 3.415, 4.00, 5.857, 1.100]

# print("sums is :",sum(numbers))

# print("integer type conversion :" , int(sum(numbers)))

import math

def minimax (curDepth, nodeIndex, maxTurn, scores,targetDepth) :
    if(curDepth==targetDepth):
        return scores[nodeIndex]
    if(maxTurn):
        return max(minimax(curDepth+1,
nodeIndex*2,False,scores,targetDepth),minimax(curDepth+1,
nodeIndex*2+1,False,scores,targetDepth))
    else:
        return min(minimax(curDepth+1,
nodeIndex*2,True,scores,targetDepth),minimax(curDepth+1,
nodeIndex*2+1,True,scores,targetDepth))
        
scores=[-1,4,2,6,-3,-5,0,7]
treeDepth=math.log(len(scores),2)

print("Optimal value is : ",end=" ")
print(minimax(0,0,True,scores,treeDepth))