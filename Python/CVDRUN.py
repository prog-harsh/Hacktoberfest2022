# https://www.codechef.com/OCT20B/problems/CVDRUN

try:
    t=int(input())
    while t:
        q=list(map(int,input().split()))
        n=q[0]
        k=q[1]
        x=q[2]
        y=q[3]
        flag=0
        for i in range(1,1001):
            if (x+(i*k))%n==y:
                print("YES")
                flag=1
                break
        if flag==0:
            print("NO")
        t-=1
except:
    pass