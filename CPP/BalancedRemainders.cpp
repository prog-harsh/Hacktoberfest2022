#include<bits/stdc++.h>

using namespace std;

void solve(){

	int n;
	cin>>n;

	int c[3] = {0,0,0};

	for(int i=0;i<n;i++){

		int x;
		cin>>x;

		c[x%3]++;
	}
	int step = 0;
	while(true){
		for(int i=0;i<3;i++){
			if(c[i] > n/3){
				int diff = c[i] - n/3;
				c[(i+1)%3] += diff;
				c[i] -= diff;
				step++;
			}
		}

		int stop =1;

		for(int i =0;i<3;i++){
			if(c[i] != n/3){
				stop =0;
				break;
			}
		}

		if(stop)
			break;
	}
	cout<<step<<"\n";
}

int main(){
	int t;
	cin>>t;

	while(t--)
		solve();
}