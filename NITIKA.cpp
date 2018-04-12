t=int(input())
for tp1 in range(t):
    line = input()
    line = line.split()
    list1=[]
    for each in line[len(line)-1]:
        list1.append(each)
    list1[0]=list1[0].upper()
    for i in range(1,len(list1)):
        list1[i]=list1[i].lower()
    list1="".join(list1)
    #line[len(line)-1][0]=line[len(line)-1][0].upper()
    if len(line)==1:
        print(list1)
    elif len(line)==2:
        tp2=[]
        for each in line[0]:
            tp2.append(each)
        print(tp2[0].upper()+". "+list1)
    else:
        tp2=[]
        for each in line[0]:
            tp2.append(each)
        tp3=[]
        for each in line[1]:
            tp3.append(each)
        print(tp2[0].upper()+". "+tp3[0].upper()+". "+list1)