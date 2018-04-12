t = input()

for i in range(t):
    n = raw_input()
    m = raw_input()
    sn = set(list(n))
    sm = set(list(m))
    if len(sn.intersection(sm)) == 0:
        print 'No'
    else:
        print 'Yes'
