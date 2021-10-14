// https://www.codechef.com/OCT20B/problems/CHEFEZQ

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    vector <long long> arr;
	    long long n,k;
	    cin>>n>>k;
	    long long temp=0,diff=0,ans=0,flag=-1,sum=0;
	    for(int i=0 ; i<n ; i++)
	    {
            cin>>temp;
            temp+=diff;
            sum+=temp;
            arr.push_back(temp);
            if(temp>k)
                diff=temp-k;
            else
                diff=0;
	    }
	    for(int i=0 ; i<n ; i++)
	    {
	        if(arr[i]<k)
	        {
	            ans=i+1;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==-1)
	    {
	        if(diff!=0)
	        {
	            diff+=k;
	            ans=(n-1)+(diff/k)+1;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
