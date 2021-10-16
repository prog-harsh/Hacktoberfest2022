# cook your dish here
for _ in range(int(input())):
    n, k = map(int, input().strip().split())
    s = input()
    s1, c = s[0], 0
    for i in range(1, n):
        if s1 != s[i]:
            c += 1
            s1 = s[i]
    if c < k:
        print(-1)
        continue
    if s[0] == '0':
        if k % 2:
            for i in range(len(s)-1, -1, -1):
                if s[i]=='1':
                    print(i+1)
                    break
        else:
            for i in range(len(s) - 1, -1, -1):
                if s[i] == '0':
                    print(i + 1)
                    break
    else:
        if k % 2:
            for i in range(len(s)-1, -1, -1):
                if s[i]=='0':
                    print(i+1)
                    break
        else:
            for i in range(len(s) - 1, -1, -1):
                if s[i] == '1':
                    print(i + 1)
                    break
