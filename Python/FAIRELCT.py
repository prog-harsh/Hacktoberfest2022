# Question : https://www.codechef.com/JAN21B/problems/FAIRELCT

try:
    t = int(input())
    while t:
        n, m = map(int,input().split())
        a = list(map(int,input().split()))
        b = list(map(int,input().split()))
        a_sum = sum(a)
        b_sum = sum(b)
        a_min = min(a)
        b_max = max(b)
        swaps=0
        while a_sum<=b_sum and b_max>a_min:
            a_min = min(a)
            b_max = max(b)
            a_sum = a_sum - a_min + b_max
            b_sum = b_sum - b_max + a_min
            a_min_index = a.index(a_min)
            b_max_index = b.index(b_max)
            a[a_min_index] = b_max
            b[b_max_index] = a_min
            # a.remove(a_min)
            # a.append(b_max)
            # b.remove(b_max)
            # b.append(a_min)
            a_min = min(a)
            b_max = max(b)
            swaps+=1
        if sum(a)>sum(b):
            print(swaps)
        else:
            print("-1")
        t-=1
except:
    pass