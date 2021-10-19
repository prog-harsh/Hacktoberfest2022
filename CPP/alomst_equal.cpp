 
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
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define  dbg(x...)
#endif
#define ll long long
#define lf long double
#define mp make_pair
#define vi vector<int>
#define set set<int>
#define pii pair<int,int>
#define ff first
#define ss second
#define fx(x) cout<<fixed<<setprecision(10)<<x
#define endl "\n";
#define pb push_back
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define lp(i,a,b) for(int i=a;i<=b;i++)
#define lpr(i,a,b) for(int i=b;i>=a;i--)
#define lpz(i,a,b) for(int i=a;i<b;i++)
#define frv(a,b) for(auto &a:b)
#define preci(x) cout<<fixed<<setprecision(10)<<x
#define vout(v) for(auto it:v){cout<<it<<" ";}; cout<<"\n";
#define sz(X) (int)X.size()
inline ll ceil(ll a,ll b){ return (a+b-1)/b;}
const int N = int(1e5 + 3);
// PRIME //
bool is_prime(int n){if(n == 2) return true; if(n % 2 == 0) return false; for(int i = 2;i*i<= n;++i) if(n % i == 0) return false; return true;}
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
	if(n&1){
		cout<<"YES\n";
		lp(i,1,n){
			cout<<2*i-i%2<<" ";
			}
		lp(i,1,n){
			cout<<2*i+i%2-1<<" ";
			}
			cout<<endl;
		}
		
	else{
		cout<<"NO\n";
		}
	return;
}
signed main()
{
   ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
//	sieve();   
    ll t=1;
   // cin >> t;
	while (t--)
	 {
		solve();
	}
	return 0;
}
