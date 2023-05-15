from queue import PriorityQueue
graph = {
    'S' : [
        ['A',5],
        ['B',14],
        ],
    'A' : [
        ['A',2],
        ['C',4],
        ],
    'B' : [
        ['A',5],
        ],
    'C' : [
        ['D',12],
        ['B',1],
        ['F',19]
        ],
    'D' : [
        ['C',17],
        ['B',23],
        ],
    'F' : [
        ['A',1],
        ]
    
    
}

togoal = {
    'S' : 10,
    'A' : 5,
    'B' : 15,
    'C' : 8,
    'D' : 4,
    'F' : 19,
}

fromstart = {
    'S' : 10,
    'A' : 5,
    'B' : 15,
    'C' : 8,
    'D' : 4,
    'E' : 11,
    'F' : 19,
    'G' : 13,
}

def bestfirstsearch(graph,togoal,node):
    vis = []
    pq = PriorityQueue()
    pq.put((togoal[node],node))
    vis.append(node)
    
    while pq:
        cur = pq.get()[1]
        print(cur,end='')
        if(cur == 'F'):
            break
        for temp in graph[cur]:
            if temp[0] not in vis:
                vis.append(temp[0])
                pq.put((togoal[temp[0]] + temp[1], temp[0]))
                
def astar(graph,togoal,fromstart,node):
    vis = []
    pq = PriorityQueue()
    pq.put((togoal[node],node))
    vis.append(node)
    
    while pq:
        cur = pq.get()[1]
        print(cur,end='')
        if(cur == 'F'):
            break
        for temp in graph[cur]:
            if temp[0] not in vis:
                vis.append(temp[0])
                pq.put((togoal[temp[0]] +fromstart[temp[0]] + temp[1], temp[0]))
                
bestfirstsearch(graph,togoal,'S')
print(" ")
astar(graph,togoal,fromstart,'S')

        
    