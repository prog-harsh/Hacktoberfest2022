#include<bits/stdc++.h>
#define pb push_back
#define endl "\n";
#define mp make_pair
#define mod 1000000007
#define ll long long
#define all(x) (x).begin(), (x).end()
#define lp(i,a,b) for(int i=a;i<=b;i++)
#define lpz(i,a,b) for(int i=a;i<b;i++)
const int N = int(1e5 + 3);
using namespace std;
// PRIME //
bool is_prime(int n){
    if(n == 2) return true;                
    if(n % 2 == 0) return false;         
    for(int i = 2;i*i<= n;++i)         
        if(n % i == 0) return false;     
    return true;                         
}
// GCD //
int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

void solve(){
	  int n,sum=0;
	  cin>>n;
	  int a[n],b[n];
	  lpz(i,0,n) cin>>a[i];
	  lpz(j,0,n){
		   cin>>b[j];
		   sum+=b[j]-a[j];
	  }
	   vector<int> v1,v2;
	  if(sum!=0) {
		  cout<<"-1\n";
		  return;
	  }
	 
	  else {
		   lpz(i,0,n){
			   while(b[i]-a[i]>0){
				   v1.pb(i+1);
				   a[i]++;
				   }
				 while(b[i]-a[i]<0){
					 v2.pb(i+1);
					 a[i]--;
					 }
			   }
			 cout<<v2.size()<<endl;
			 lpz(i,0,v2.size()){
				 cout<<v2[i]<<" "<<v1[i]<<"\n";
				 } 
		  }
	   
		
	return;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    ll t;
     cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
