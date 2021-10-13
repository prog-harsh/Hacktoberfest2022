# Question : https://www.codechef.com/COOK120B/problems/ORTHODOX

# Solution

def Distinct_Subsequential_OR(original_a):
    result = set()
    before_OR = {0}
    for item in original_a:
        before_OR = {item | val for val in before_OR} | {item}
        result |= before_OR
    return len(result)
    
def main():
    t = int(input())
    while t:
        n = int(input())
        a = list(map(int, input().split()))
        ans = ""
        total_possible = int((n*(n+1))/2)
        distinct_OR_s=Distinct_Subsequential_OR(a)
        if distinct_OR_s==total_possible:
            ans = "YES"
        else:
            ans = "NO"
        print(ans)
        t-=1

if __name__ == '__main__':
    main()