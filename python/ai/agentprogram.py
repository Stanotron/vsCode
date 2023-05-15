import random

class locationdirty(object):
    def __init__(self):
        self.dirtyornot = {'A':1}
        # self.dirtyornot['A'] = random.randint(0,1)
        
class vacuum(locationdirty):
    def __init__(self,locationdirty):
        print(locationdirty.dirtyornot)
        score = 0
        # vacuumlocation = random.randint(0,1)
        vacuumlocation = 0
        if(vacuumlocation==1):
            print('vacuum is at A')
            if(locationdirty.dirtyornot['A']==1):
                print('location A is dirty')
                locationdirty.dirtyornot['A']=0
                print('location A is clean now')
                score+=1
            elif(locationdirty.dirtyornot['A']==0):
                print('location A is clean already')
        elif(vacuumlocation==0):
            print('vacuum is not at A')
            if(locationdirty.dirtyornot['A']==1):
                print('location A is dirty')
                print('moving to location A')
                score -=1
                locationdirty.dirtyornot['A']=0
                print('location A is clean now')
                score+=1
            elif(locationdirty.dirtyornot['A']==0):
                print('location A is clean already')
        print(locationdirty.dirtyornot)
        print('score is',score)
        
env = locationdirty()
vac = vacuum(env) 
                
            