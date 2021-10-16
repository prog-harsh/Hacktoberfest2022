t=int(input())
def coreL2Q_Mex(c,n,d,l):
    while(d in n):
        v=n.index(d)
        if v==l-1:
            n=str(int(n)+1)
            c+=1
        if v!=l-1:
            t1,t2 =pow(10,l-v-1),int(n[v+1:]) 
            # a_2v=
            c+=t1-t2
            n=str(int(n)+t1-t2)
    return c
while t>0: 
    num,dig=map(str,input().split()[:2])
    le=len(num)
    if dig not in num:
        print(0)
    else:
        print(coreL2Q_Mex(0,num,dig,le))
    t-=1
