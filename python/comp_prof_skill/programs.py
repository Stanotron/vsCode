i = int(input())
l = []
for n in range(1, i+1):
    a = input('enter {} First name: '.format(n))
    b = input('enter {} Second name: '.format(n))
    l.append(a+" %s" % b)

for i in l:
    print("Good morning ", i)
