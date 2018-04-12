a,b=map(int,input().split())
l1=list(str(a-b))
if(l1[len(l1)-1]=='9'):
    l1[len(l1)-1]='1'
else:
    l1[len(l1)-1]=str(int(l1[len(l1)-1])+1)
ans=''.join(l1)
print(ans)