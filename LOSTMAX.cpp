import math

t = input()
for x in range(t):
    n = map(int,raw_input().split())
    n.sort()
    if n[len(n)-1] > len(n)-1:
        print n[len(n)-1]
    else:
        print n[len(n)-2]
        

