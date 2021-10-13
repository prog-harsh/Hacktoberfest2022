# Question : https://www.codechef.com/JULY20B/problems/CHFNSWPS

# Solution
def isIdentical(a,b,n):
    identical = True
    for i in range(n):
        if a[i]!=b[i]:
            identical = False
    return identical

def main():
    t=int(input())
    while t:
        n=int(input())
        a=list()
        b=list()
        a_freq=dict()
        b_freq=dict()
        all_freq=dict()
        fin=list()
        fin_d=dict()
        ans=-2

        a = list(map(int, input().split()))
        b = list(map(int, input().split()))

        for item in a:
            a_freq[item]=a_freq.get(item, 0)+1

        for item in b:
            b_freq[item]=b_freq.get(item, 0)+1

        a_freq_keys=a_freq.keys()
        b_freq_keys = b_freq.keys()

        for i in range(n):
            temp = a[i]
            all_freq[temp] = all_freq.get(temp, 0) + 1
            temp = b[i]
            all_freq[temp] = all_freq.get(temp, 0) + 1

        for key, val in all_freq.items():
            if key not in a_freq_keys:
                a_freq[key] = 0
            if key not in b_freq_keys:
                b_freq[key] = 0

        min_a = min(a)
        min_b = min(b)
        minm = min(min_a,min_b)
        min_swap=0

        for key,val in a_freq.items():
            if a_freq[key]!=b_freq[key]:
                fin_d[key]=abs(a_freq[key]-b_freq[key])

        for key,val in fin_d.items():
            for i in range(int(val/2)):
                fin.append(key)

        fin.sort()

        for key,val in all_freq.items():
            if val%2!=0:
                ans=-1
                break

        if ans!=-1:
            for key,val in a_freq.items():
                if a_freq[key]!=b_freq[key]:
                    ans=-2
                    break
                else:
                    ans=0

        if ans!=-1 and ans!=0:
            min_swaps = int(len(fin)/2)
            ans=0
            for i in range(min_swaps):
                ans+=min((2*minm),fin[i])

        print(ans)

        t-=1

if __name__ == '__main__':
    main()