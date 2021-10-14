// https://www.codechef.com/problems/LUCKYFR

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, c=0;
        cin>>n;
        while(n>0)
        {
            if(n%10==4)
                c+=1;
            n/=10;
        }
        cout<<c<<endl;
    }
	return 0;
}
