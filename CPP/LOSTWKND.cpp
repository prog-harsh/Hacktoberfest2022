// https://www.codechef.com/problems/LOSTWKND

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
	    int tot_available=120,work=0;
	    int arr[6];
	    for(int i=0 ; i<6 ; i++)
	        cin>>arr[i];
	    for(int i=0 ; i<5 ; i++)
	    {
	        arr[i]=arr[i]*arr[5];
	        work+=arr[i];
	    }
	    if(work>tot_available)
	        cout<<"Yes\n";
	    else
	        cout<<"No\n";
	}
	return 0;
}