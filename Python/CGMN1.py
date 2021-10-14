# https://www.codechef.com/CGRL2020/problems/CGMN1

try:
    n, m=map(int,input().split())
    sum1=((n*(n+1))/2)
    prev_last=n
    prev_first=1
    sum_mid=sum1-(prev_first+prev_last)
    while m:
        k=int(input())
        if (k>=2 and k<=n-1) or (k==prev_first) or (k==prev_last):
            prev_last,prev_first=prev_first,prev_last
        else:
            prev_last=k
        print(int(sum_mid+prev_last+prev_first))
        m-=1
except:
    pass