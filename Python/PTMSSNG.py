#  Question : https://www.codechef.com/JULY20B/problems/PTMSSNG

#  Solution
def main():
    t=int(input())
    while t:
        n = int(input())
        x=0
        y=0
        
        first_vertex = dict()
        second_vertex = dict()
        
        for i in range(0,(4*n)-1):
            vertex = list(map(int, input().split()))
            first_vertex[vertex[0]] = first_vertex.get(vertex[0],0)+1
            second_vertex[vertex[1]] = second_vertex.get(vertex[1],0)+1
            
        for key, val in first_vertex.items():
            if val%2!=0:
                x = key

        for key, val in second_vertex.items():
            if val%2!=0:
                y = key
        ans = str(x)+" "+str(y)
        print(ans)
        
        t-=1

main()
