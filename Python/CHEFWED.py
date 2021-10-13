# Question : https://www.codechef.com/AUG20B/problems/CHEFWED

# Solution

def main():
    t=int(input())
    while t:
        n,k=map(int,input().split())
        f=list(map(int,input().split()))
        f_dict=dict()
        inefficiency1=0                  #one table only
        inefficiency2=list()             #multiple tables allowed
        inefficiency3=2*k                #two tables only
        ineff_mult_tables=list()
        x=0
        ans=0
        uniques=list()
        for item in f:
            f_dict[item]=f_dict.get(item, 0)+1
        freq=list(f_dict.values())
        summ=0
        for key,val in f_dict.items():
            if val>1:
                summ+=val
                uniques.append(key)
        maxm=max(freq)
        for key,val in f_dict.items():
            if maxm==val:
                maxm_ele=key
        
        tempo=0
        if maxm==1:
            ans = int(k)
        else:
            inefficiency1=k+summ
            
            for i in range(len(f)):
                if i==0:
                    ineff_mult_tables.append(f[i])
                else:
                    if f[i] not in ineff_mult_tables:
                        ineff_mult_tables.append(f[i])
                    else:
                        inefficiency2.append(ineff_mult_tables)
                        ineff_mult_tables=list()
                        ineff_mult_tables.append(f[i])
                        
            inefficiency2.append(ineff_mult_tables)
            arg=0 
            min_arg=summ
            first=[f[0]]
            second = f[1:]
            list_set = set(second) 
            unique_list = (list(list_set))
            first=f[:1]
            second = f[1:]
            list_set = set(first) 
            unique_list = (list(list_set))
            for item in unique_list:
                if first.count(item)>1:
                    arg+=first.count(item)
            list_set = set(second) 
            unique_list = (list(list_set))
            for item in unique_list:
                if second.count(item)>1:
                    arg+=second.count(item)
            if arg<min_arg:
                min_arg=arg
            for i in range(2,len(f)-1):
                first_freq=first.count(f[i-1])
                second_freq=second.count(f[i-1])
                if first_freq==1:
                    arg+=2
                elif first_freq>1:
                    arg+=1
                if second_freq==2:
                    arg-=2
                elif second_freq>2:
                    arg-=1
                return_val=second.pop(0)
                first.append(return_val)
                if arg<min_arg:
                    min_arg=arg
            inefficiency3=(2*k)+min_arg
            
            ans=min((len(inefficiency2)*k),inefficiency1)
            ans=min(ans,inefficiency3)
        print(ans)
        t-=1
        
if __name__=="__main__":
    main()