# https://www.codechef.com/problems/CHEFRECP

def main():
    t=int(input())
    while t:
        n=int(input())
        arr = list(map(int, input().split()))
        arr.append(-1)
        temp = []
        res = True
        freq=dict()
        for i in range(len(arr) - 1):
            if arr[i] == arr[i + 1]:
                continue
            else:
                if arr[i] in temp:
                    res = False
                    break
                else:
                    temp.append(arr[i])

        for item in arr:
            freq[item]=freq.get(item,0)+1

        k=list()
        for key,value in freq.items():
            if key!=-1:
                k.append(value)

        if res and len(set(k)) == len(k):
            print("YES")
        else:
            print("NO")

        '''print("freq : \n",freq)
        print("k : \n", k)'''

        t-=1

main()