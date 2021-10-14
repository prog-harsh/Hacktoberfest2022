# https://www.codechef.com/AUG20B/problems/SKMP

def main():
    t = int(input())
    while t:
        s = input()
        p = input()
        s_dict=dict()
        p_dict=dict()
        s_len=len(s)
        p_len=len(p)
        p_first=p[0]
        p_last=p[p_len-1]
        
        for i in range(s_len):
            s_dict[s[i]]=s_dict.get(s[i],0)+1
        for i in range(p_len):
            p_dict[p[i]]=p_dict.get(p[i],0)+1
        for key,val in p_dict.items():
            s_dict[key]-=val
        st=""
        for key,val in s_dict.items():
            st=st+(key*val)
        st_list=list(st)
        st_list.sort()
        st=""
        ans=""
        seperator=''
        st=seperator.join(st_list)
        
        flag=False
        flag1=False
        
        for i in range(len(st)):
            if st[i]==p_first:
                flag1=True
                for j in range(1,len(p)):
                    if st[i]>p[j]:
                        ans=st[:i]+p+st[i:]
                        flag=True
                        break
                    elif st[i]<p[j]:
                        ans=st[:i+s_dict[st[i]]]+p+st[i+s_dict[st[i]]:]
                        flag=True
                        break
                if flag:
                    break
                else:
                    ans=st[:i]+p+st[i:]
                    break
            elif st[i]>p_first:
                flag1=True
                ans=st[:i]+p+st[i:]
                break
        
        if flag1==False:
            ans=st+p
            
        
        print(ans)
        
        t-=1
        
if __name__=="__main__":
    main()