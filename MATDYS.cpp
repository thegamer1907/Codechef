t = input()

p2 = [1]

for i in range(1,66):
    p2.append(p2[i-1]*2)

for i in range(t):
    n,k = map(int,raw_input().split())
    si = p2[n]
    n1 = k
    ans=0
    while si!=2:
        if n1%2==0:
            n1/=2
        else:
            ans+=(si/2)
            n1/=2
        si/=2
    print ans+n1
