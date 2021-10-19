#include<bits/stdc++.h>
using namespace std;
#define long long int;


void solve(){
    string s;
    cin>>s;
    int n;
    n=s.length();
    map<int,int> mp;
    vector<int> v;
   for(int i=0;i<n;i++){
      mp[s[i]]++;
      v.push_back(mp[i]);
   }
    bool t=false;
   for(int i=2;i<n;i++){
	  if(v[i]==(v[i-1]+v[i-2])){
		    cout<<"Good\n";
             t=true;
		    break;
		  }
	   } 
     if(t==false){
         cout<<"Bad\n";
     }
}
int main(){

  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int T;
   cin>>T;
   while(T--){
      solve();
   }
   

}
