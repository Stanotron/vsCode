def gcd(a,b):
    if b==0:
        return a
    
    return gcd(b,a%b)

def steps(n,m,d,js,jb):
    count = 0
    while jb!=d:
        print(js,jb)
        if(js==0):
            js = m
            count+=1
        if(jb==n):
            jb = 0
            count+=1
        if(jb+js>n):
            js = jb+js-n
            jb = n
            count+=1
        else:
            jb = jb+js
            js = 0
            count+=1
    return count
        
def minsteps(n,m,d):
    if(m>n):
        temp = m
        m = n
        n = temp
    
    if (d%gcd(n,m)!=0):
        print("no sol")
    
    else:
        return steps(n,m,d,0,0)
    
if __name__ == '__main__':
 
    n = 3
    m = 5
    d = 4
 
    print('Minimum number of steps required is', minsteps(n, m, d))