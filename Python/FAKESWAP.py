t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    p = input()
    os=0
    zs=0
    for i in range(n):
        if p[i]=='0':
            zs+=1
        else:
            os+=1
    if s==p:
        print("YES")
    elif zs>=2 and os>=1:
        print("YES")
    elif zs>=1 and os>=2:
        print("YES")
    else:
        print("NO")
