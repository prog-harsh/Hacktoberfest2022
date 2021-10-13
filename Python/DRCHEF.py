# Question : https://www.codechef.com/JULY20B/problems/DRCHEF

# Solution
def main():
    t = int(input())
    while t:
        n1 = list(map(int, input().split()))
        n = int(n1[0])
        x = int(n1[1])
        a = list(map(int, input().split()))
        a.sort()

        days=0
        index=-2

        for i in range(len(a)):
            if 2 * a[i] < x:
                days+=1
            else:
                index=i
                break

        if index!=-2:
            while x < a[i]:
                x = x * 2
                days += 1
            days+=1
            for i in range(index+1,len(a)):
                if a[i-1]==a[i]:
                    days+=1
                else:
                    while a[i] > a[i-1]:
                        a[i-1] = a[i-1] * 2
                        days += 1
            print(days)
        else:
            print(days)
        t-=1
            
if __name__ == '__main__':
    main()