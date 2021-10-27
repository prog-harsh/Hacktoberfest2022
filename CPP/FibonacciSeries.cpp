#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		a[0]=0;
		a[1]=1;
		a[i+2]=a[i]+a[i+1];
		cout<<a[i]<<" ";
	}
}
