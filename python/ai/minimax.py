import math

def minimax(curdepth,node,maxornot,score,targetdepth):
    if(curdepth == targetdepth):
        return score[node]

    if(maxornot):
        return max(minimax(curdepth+1,node*2,False,score,targetdepth),minimax(curdepth+1,(node*2)+1,False,score,targetdepth))
    
    else:
        return min(minimax(curdepth+1,node*2,True,score,targetdepth),minimax(curdepth+1,(node*2)+1,True,score,targetdepth))

score = [-1,4,2,6,-3,-5,0,7]
targetdepth = math.log(len(score),2)
print(minimax(0,0,True,score,targetdepth))    
    