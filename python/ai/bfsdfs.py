graph = {
    'S':['A','B'],
    'A':['C','D'],
    'B':['G','H'],
    'C':['E'],
    'D':[],
    'E':[],
    'G':[],
    'H':[],
}
visited = []
queue = []
visit2 = []


def bfs(graph,visited,node):
    visited.append(node)
    queue.append(node)
    
    while queue:
        cur = queue.pop(0)
        print(cur,end=" ")
        for neighbour in graph[cur]:
            if(neighbour not in visited):
                visited.append(neighbour)
                queue.append(neighbour)
                
def dfs(graph,visit2,node):
    if node not in visit2:
        print(node,end=" ")
        visit2.append(node)
    
    for leaf in graph[node]:
        dfs(graph,visit2,leaf)
    

dfs(graph,visited,'S')
