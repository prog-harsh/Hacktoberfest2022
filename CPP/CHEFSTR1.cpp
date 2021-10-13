// Question : https://www.codechef.com/JULY20B/problems/CHEFSTR1

// Solution
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,sum=0;
	    cin>>n;
	    long long a[n];
	    for(int i=0 ; i<n ; i++)
    	    cin>>a[i];
    	for(int i=0 ; i<n-1 ; i++)
    	{
    	    sum+=(abs(a[i+1]-a[i])-1);
    	}
    	cout<<sum<<"\n";
	}
	return 0;
}
