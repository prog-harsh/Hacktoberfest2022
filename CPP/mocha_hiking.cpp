 
// CODE by:      ############
//                    ##
//                    ##               # ####
//                    ##              ##    #
//                    ##              ##
//             ##     ##                ##       #    ##    ##
//             ##     ##                  ##    # #   ## #  ##
//             ##    ##              #    ##   ## ##  ##  # ##
//              ######  ##########   #### #   ####### ##   ###
#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define vi vector<int>
#define pii pair<int,int>
#define ff first
#define ss second
#define endl "\n";
#define pb push_back
#define mod 1000000007
#define ll long long
#define lf long double
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define lp(i,a,b) for(int i=a;i<=b;i++)
#define lpz(i,a,b) for(int i=a;i<b;i++)
#define sz(X) (int)X.size()
const int N = int(1e5 + 3);
// PRIME //
bool is_prime(int n){
    if(n == 2) return true;                
    if(n % 2 == 0) return false;         
    for(int i = 2;i*i<= n;++i)         
        if(n % i == 0) return false;     
    return true;                         
}
/*  Sieve of eratosthenes
vector<bool> isPrime(1000001,true);
void sieve(){
	isPrime[1]=false;
for(int i=2;(i*i)<=1000000;i++){
	if(isPrime[i]){
		for(int j=i;i*j<=1000000;j++){
			isPrime[i*j]=false;
			}
		}
	}
}
*/
void solve(){
	    int n;
	    cin>>n;
	    int arr[10000];
	    lp(i,1,n){
			cin>>arr[i];
			}
		if(arr[1]){
			cout<<(n+1)<<" ";
	    lp(i,1,n){
			cout<<i<<" ";
			}
			cout<<endl;
			return;
		}
	    lpz(i,1,n){
				 if(arr[i+1] && !arr[i]){
					 lp(j,1,i){
						 cout<<j<<" ";
						 }
						 cout<<n+1<<" ";
					lp(k,i+1,n){
						 cout<<k<<" ";
						 }
					 return;
					 }
				 }
		 lp(i,1,n+1){
			 cout<<i<<" ";
			 }
			 cout<<endl;
	    
		return;
	} 
signed main()
{
   ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
//	sieve();
    ll t;
   cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
