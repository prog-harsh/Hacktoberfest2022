#include <bits/stdc++.h>
using namespace std;

int countSubsets(int arr[], int n, int sum)
{
	if(n==0)
		return sum==0? 1 : 0;

	return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
}


int main() {
	int  n,sum;
	cin>>n>>sum;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
    cout<<countSubsets(arr, n, sum);
    return 0;
}