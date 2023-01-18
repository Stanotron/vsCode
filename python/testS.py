
def gcd(a, b):
	if b==0:
		return a
	return gcd(b, a%b)

def Pour(toJugCap, fromJugCap, d):

	fromJug = fromJugCap
	toJug = 0

	step = 1
	while ((fromJug is not d) and (toJug is not d)):

		temp = min(fromJug, toJugCap-toJug)

		toJug = toJug + temp
		fromJug = fromJug - temp

		step = step + 1
		if ((fromJug == d) or (toJug == d)):
			break

		if fromJug == 0:
			fromJug = fromJugCap
			step = step + 1

		if toJug == toJugCap:
			toJug = 0
			step = step + 1
			
	return step

def minSteps(n, m, d):
	if m> n:
		temp = m
		m = n
		n = temp
		
	if (d%(gcd(n,m)) is not 0):
		return -1
	
	return(min(Pour(n,m,d), Pour(m,n,d)))

if __name__ == '__main__':

	n = 3
	m = 5
	d = 4

	print('Minimum number of steps required is',
							minSteps(n, m, d))
	

