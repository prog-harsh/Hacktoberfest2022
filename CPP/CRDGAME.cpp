// Question : https://www.codechef.com/JULY20B/problems/CRDGAME

// Solution
#include <bits/stdc++.h>
using namespace std;
long long getSum(long long n) 
 { 
    long long sum; 
    for (sum = 0; n > 0; sum += n % 10, n /= 10); 
    return sum; 
 } 
int main() 
{
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,a,b,point_a=0,point_b=0,a_try,b_try;
	    cin>>n;
	    
	    for(int i=0 ; i<n ; i++)
	    {
	    	cin>>a>>b;
	    	a_try = getSum(a);
	    	b_try = getSum(b);
	    	if(a_try > b_try)
	    		point_a+=1;
	    	else if(a_try < b_try)
	    		point_b+=1;
	    	else if(a_try == b_try)
	    	{
				point_a+=1;
				point_b+=1;
			}
		}
		
		if(point_a>point_b)
			cout<<"0 "<<point_a<<"\n";
		else if(point_a<point_b)
			cout<<"1 "<<point_b<<"\n";
		else if(point_a==point_b)
			cout<<"2 "<<point_a<<"\n";
	}
	return 0;
}
