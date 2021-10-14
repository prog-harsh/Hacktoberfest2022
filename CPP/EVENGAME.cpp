// https://www.codechef.com/problems/EVENGAME

#include <iostream>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n, temp, sum=0;
	    cin>>n;
	    for(int i=0 ; i<n ; i++)
	    {
	        cin>>temp;
	        sum+=temp;
	    }
	    if(sum%2==0)
	    cout<<"1\n";
	    else
	    cout<<"2\n";
	}
	return 0;
}
