import random
class e(object):
    def __init__(self):
        self.dirty = {'A':0,'B':0}
        self.dirty['A'] = random.randint(0,1)
        self.dirty['B'] = random.randint(0,1)

class v(e):
    def __init__(self,e):
        print(e.dirty)
        score = 0
        self.vacloc = random.randint(0,1)
        if()
        
        
env = e()
vac = v(env)