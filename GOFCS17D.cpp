import math

t = input()

for i in range(t):
	n,k = map(int,raw_input().split())
	print pow(2,n-1,1000000007)