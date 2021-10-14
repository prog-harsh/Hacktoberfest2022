// https://www.codechef.com/problems/PRICECON

#include <iostream>
#include<string>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
	{
	    int n,k,count=0,sum=0;
	    cin>>n>>k;
	    int p[n]={0};
	    for(int i=0 ; i<n ; i++)
	    {
	        cin>>p[i];
	        if(p[i]>k)
	        {
	            count+=1;
	            sum+=p[i];
	        }
	    }
	    cout <<(sum-(k*count))<<"\n";
	}
	return 0;
}
