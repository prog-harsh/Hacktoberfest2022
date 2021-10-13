# Question : https://www.codechef.com/SEPT20B/problems/TREE2

# Solution

try:
    t=int(input())
    while t:
        n=int(input())
        arr=list(map(int,input().split()))
        fin=list()
        for item in arr:
            if item!=0:
                fin.append(item)
        if len(fin)>0:
            arr_set=set(fin)
            print(len(arr_set))
        else:
            print("0")
        t-=1
except:
    pass