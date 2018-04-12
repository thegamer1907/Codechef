t = input()

for i in range(t):
    n = raw_input()
    sn = map(int,raw_input().split())
    print len(set(sn))
