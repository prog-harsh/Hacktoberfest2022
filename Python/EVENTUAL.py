# https://www.codechef.com/COOK120B/problems/EVENTUAL

def main():
    t = int(input())
    while t:
        n = int(input())
        s = input()
        ans = "YES"
        alphas = dict()
        for ch in s:
            alphas[ch]=alphas.get(ch, 0)+1
        for key, val in alphas.items():
            if val%2!=0:
                ans = "NO"
                break
        print(ans)

        t-=1

if __name__ == '__main__':
    main()