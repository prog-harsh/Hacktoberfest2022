// Question : https://www.codechef.com/LTIME86B/problems/CHEFSTEP

// Solution
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,temp;
        cin>>n>>k;
        string ans="";
        for(int i=0 ; i<n ; i++)
        {
            cin>>temp;
            if(temp%k==0)
                ans+='1';
            else
                ans+='0';
        }
        cout<<ans<<"\n";
    }
	return 0;
}
