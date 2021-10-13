// Question : https://www.codechef.com/COLE2020/problems/CLPNT

// Solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); 
	cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	long long n;
    	cin>>n;
    	vector <long long> a;
    	long long temp;
    	for (int i = 0; i < n; i++)
    	{
    		cin>>temp;
    		a.push_back(temp);
		}
		long long query;
		cin>>query;
		while(query--)
		{
			long long x_c,y_c;
			cin>>x_c>>y_c;
			vector<long long>::iterator ptr; 
			ptr = lower_bound(a.begin(),a.end(),(x_c+y_c));
			if((x_c+y_c)<a[0])
				cout<<"0\n";
			else if(ptr == a.end())
				cout<<a.size()<<"\n";
			else
			{
				if(*ptr==(x_c+y_c))
					cout<<"-1\n";
				else
				{
					ptr--;
					cout<<(ptr-a.begin()+1)<<"\n";
				}
			}
		}
	}
	return 0;
}