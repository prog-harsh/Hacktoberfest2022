# https://www.codechef.com/problems/LIKECS01

test=int(input())
while test:
    s=input()
    s_list=list(s)
    s_len=len(s_list)
    output=""
    dic=dict()
    fake_list=list(s)
    for i in range(0,s_len):
        alpha=s_list[i]
        fake_list.remove(alpha)
        if alpha in fake_list:
            output="yes"
            break
        else:
            output="no"
    print(output)
    test-=1