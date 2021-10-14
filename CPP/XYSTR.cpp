// https://www.codechef.com/problems/XYSTR

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
	    string s;
	    cin>>s;
	    int s_len=s.length(),pairs=0;
	    for(int i=0 ; i<s_len-1 ; i++)
	    {
	        if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x'))
	        {
	            pairs+=1;
	            i+=1;
	        }
	    }
	    cout<<pairs<<"\n";
	}
	return 0;
}
