// https://www.codechef.com/problems/FFL

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s;
		bool ans=false;
		cin>>n>>s;
		int p[n],a[n];
		vector<int>forward,defender;
		for(int i=0 ; i<n ; i++)
			cin>>p[i];
		for(int i=0 ; i<n ; i++)
			cin>>a[i];
		for(int i=0 ; i<n ; i++)
		{
			if(a[i]==0)
				defender.push_back(p[i]);
			else if(a[i]==1)
				forward.push_back(p[i]);
		}
		sort(defender.begin(),defender.end());
		sort(forward.begin(),forward.end());
		if(defender.size()==0 || forward.size()==0)
			ans=false;
		else if(defender[0]+forward[0]<=100-s)
			ans=true;
		else
			ans=false;
		if(ans)
			cout<<"yes"<<"\n";
		else
			cout<<"no"<<"\n";
	}
	return 0;
}