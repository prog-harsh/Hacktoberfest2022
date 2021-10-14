// https://www.codechef.com/problems/LCH15JAB

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        int arr[26]={0};
        for(int i=0 ; i<st.length() ; i++)
        {
            arr[(int)st[i]-97]+=1;
        }
        int tot_sum, count=0;
        for(int i=0 ; i<26 ; i++)
        {
            if(arr[i]!=0)
            {
                count+=1;
            }
        }
        int final[count]={0}, k=0;
        for(int i=0 ; i<26 ; i++)
        {
            if(arr[i]!=0)
            {
                final[k]=arr[i];
                k+=1;
            }
        }
        tot_sum=0;
        for(int i=0 ; i<count ; i++)
        {
            tot_sum+=final[i];
        }
        bool ans=false;
        for(int i=0 ; i<count ; i++)
        {
            if(final[i]==tot_sum-final[i])
            {
                ans=true;
                break;
            }
        }
        
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}