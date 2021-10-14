// https://www.codechef.com/AUG20B/problems/LINCHESS

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,k,temp,minm_p=LONG_MAX,minm_quotient=LONG_MAX;
	    cin>>n>>k;
	    bool flag=true;
	    for(int i=0 ; i<n ; i++)
	    {
	        cin>>temp;
	        if(k%temp==0)
	        {
	            if((k/temp)<minm_quotient)
	            {
	                minm_quotient=(k/temp);
	                minm_p=temp;
	                flag=false;
	            }
	        }
	    }
	    if(flag)
	        cout<<"-1\n";
	    else
	        cout<<minm_p<<"\n";
	}
	return 0;
}
