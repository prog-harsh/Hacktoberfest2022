# https://www.codechef.com/problems/MOVIEWKN

t=int(input())
while(t):
    n=int(input())
    l = list(map(int, input().split()))
    r = list(map(int, input().split()))
    prod=[]
    indexes=[]
    r1=[]
    r1_index=[]
    for i in range(n):
        prod.append(l[i]*r[i])
    maxm=max(prod)
    for i in range(n):
        if prod[i]==maxm:
            indexes.append(i)
    len_indexes=len(indexes)
    if len_indexes==1:
        print(indexes[0]+1)
    elif len_indexes>1:
        for i in range(len_indexes):
            r1.append(r[indexes[i]])
        r1_max=max(r1)
        for i in range(len(r1)):
            if r1_max==r1[i]:
                r1_index.append(i)
        if len(r1_index)==1:
            for i in range(len(r1)):
                if r1_max==r1[i]:
                    print(indexes[i]+1)
        elif len(r1_index)>1:
            for i in range(len(r1)):
                if r1_max==r1[i]:
                    print(indexes[i]+1)
                    break
    t-=1