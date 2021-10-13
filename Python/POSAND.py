# Question : https://www.codechef.com/OCT20B/problems/POSAND

def check(num):
    return (num and (not(num&(num-1))))
    
try:
    t=int(input())
    while t:
        n=int(input())
        ans=list()
        minus=-1
        if n==1:
            print("1")
        elif n==2:
            print("-1")
        elif n==3:
            print("1 3 2")
        else:
            if check(n):
                print(minus)
            else:
                flag=0
                ans=[2,3,1]
                for i in range(4,n+1):
                    if flag==1:
                        flag=0
                        continue
                    if check(i):
                        ans.append(i+1)
                        ans.append(i)
                        flag=1
                        # i+=1
                    else:
                        ans.append(i)
                st=''
                for i in ans:
                    st+=str(i)+" "
                print(st)
        t-=1
except:
    pass