// https://www.codechef.com/problems/HX

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	int arr[n][n];
	for(int i=0 ; i<n ; i++){
	    for(int j=0 ; j<n ; j++){
	        cin>>arr[i][j];
	    }
	}
	long long score=0;
	vector <long long> left, right;
	for(int i=0 ; i<n ; i++){
	    for(int j=0 ; j<n ; j++){
	        if(i==j)
	            left.push_back(arr[i][j]);
	        if((i + j) == (n - 1))
	            right.push_back(arr[i][j]);
	    }
	}
	for(int i=0 ; i<left.size()-1 ; i++){
	    score+=((left[i]*left[i+1])+(right[i]*right[i+1]));
	}
	cout<<score;
	return 0;
}
