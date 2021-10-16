# cook your dish here
import math
for i in range(int(input())):
    n = int(input())
    pow = int(math.log2(n+1))
    print(2**pow)
