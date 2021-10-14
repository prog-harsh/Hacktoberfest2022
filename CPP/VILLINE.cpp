// https://www.codechef.com/problems/VILLINE

#include <iostream>
using namespace std;
int main() 
{
	int n,m,c,eq=0,v1=0,v2=0,x,y,p;
	cin>>n;
	cin>>m>>c;
	for(int i=0 ; i<n ; i++)
	{
	    cin>>x>>y>>p;
	    eq=y-c-(m*x);
	    if(eq>0)
	        v1+=p;
	    else
	        v2+=p;
	}
	if(v1>=v2)
	    cout<<v1<<"\n";
	else
	    cout<<v2<<"\n";
	return 0;
}