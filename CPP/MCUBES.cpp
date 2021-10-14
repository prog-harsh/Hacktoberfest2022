// https://www.codechef.com/problems/MCUBES

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,temp,res=0;
	cin>>n;
	vector<int> a;
	
	for(int i=0 ; i<n ; i++)
	{
		cin>>temp;
		a.push_back(temp);
	}
	bool flag=true;
	for(int i=n-1 ; i>0 ; i--)
	{
		if(a[i]!=a[i-1])
		{
			res = i+1;
			flag=false;
			break;
		}
	}
	if(flag)
		cout<<"1\n";
	else
		cout<<res<<"\n";
	
	return 0;
}