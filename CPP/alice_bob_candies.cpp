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
#define pii pair<int,int>
#define ff first
#define ss second
#define fx(x) cout<<fixed<<setprecision(10)<<x
#define endl "\n";
#define pb push_back
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define lp(i,a,b) for(int i=1;i<=b;i++)
#define lpr(i,a,b) for(int i=b;i>=a;i--)
#define lpz(i,a,b) for(int i=0;i<b;i++)
#define frv(a,b) for(auto &a:b)
#define preci(x) cout<<fixed<<setprecision(12)<<x
#define vout(v) for(auto it:v){cout<<it<<" ";}; cout<<"\n";
#define sz(X) (int)X.size()
inline ll ceil(ll a,ll b){ return (a+b-1)/b;}
const int N = int(1e5 + 3);
// PRIME //
bool isPrime(int n){if(n == 2) return true; if(n % 2 == 0) return false; for(int i = 2;i*i<= n;++i) if(n % i == 0) return false; return true;}
int fact(int n){ return (n==1 || n==0) ? 1: n * fact(n - 1);}
/*Sieve of eratosthenes
vector<bool> isPrime(1000001,true);
void sieve(){
	isPrime[1]=false;
for(int i=2;(i*i)<=1000001;i++){
	if(isPrime[i]){
		for(int j=i;i*j<=1000001;j++){
			isPrime[i*j]=false;
			}
		}
	}
}
*/
void solve(){
	int n;
	cin>>n;
	int arr[n];
	lpz(i,0,n)cin>>arr[i];
	int i=1,j=n-1;
	int as=arr[0];
	int bs=0;
	int a=as,b=0;
	int mv=1;
	    t:
	    bool ch=false;
		while(bs<=as && j>=i){
			bs+=arr[j];
			j--;
			ch=true;
			}
			b+=bs;
			as=0;
		if(ch)mv++;
		ch=false;
		while(as<=bs && i<=j){
			as+=arr[i];
			i++;
			ch=true;
			}
			a+=as;
			bs=0;
			if(ch)mv++;
			ch=false;
			if(i>j){
			cout<<mv<<" "<<a<<" "<<b<<endl;
			return;
			}
		goto t;
	return;
}
signed main()
{
   ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//sieve();   
    ll t=1;
   cin >> t;
	while (t--)
	 {
		solve();
	}
	return 0;
}
