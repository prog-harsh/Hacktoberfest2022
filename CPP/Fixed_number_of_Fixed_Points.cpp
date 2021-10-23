//Codechef problem link  https://www.codechef.com/START14B/problems/FIXFIX
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int z=k;
	    if(n-k==1){
	       cout<<"-1";
	    }
	    else{
	        int i=1;
	        while(k-- and i<=n){
	            cout<<i<<" ";
	            i++;
	        }
	        int j=i;
	        i++;
	        while(i<=n){
	            cout<<i<<" ";
	            i++;
	        }
	        if(z<n) cout<<j;
	    }
	    cout<<endl;
	}
	return 0;
}
