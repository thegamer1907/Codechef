def fact(n):
    ans=1
    for i in range(1,n+1):
        ans= ans*i
    return ans




n = input()
for i in range(n):
    f = input()
    print fact(f)
