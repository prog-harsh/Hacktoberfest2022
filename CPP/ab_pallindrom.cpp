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
          ll a,b;
          cin>>a>>b;
          string s;
          cin>>s;
           int n=s.length();
           int cnt1=0,cnt0=0;
           lpz(i,0,n){
			   if(s[i]=='1')cnt1++;
			   else if(s[i]=='0')cnt0++;
			
		    }
			if(cnt0>a||cnt1>b){
				cout<<"-1\n";
				return;
				}
			a-=cnt0;
			b-=cnt1;
			lpz(i,0,n/2){
				if(s[i]=='?'){
					if(s[n-1-i]=='?') continue;
					if(s[n-1-i]=='0') a--;
					else b--;
					s[i]=s[n-1-i];
					}
				    else{
						if(s[n-1-i]=='?'){
							if(s[i]=='1') b--;
							else a--;
							s[n-1-i]=s[i];
							}
						else if(s[i]!=s[n-1-i]){
							cout<<"-1\n";
							return;
							}
						}
					if(a<0||b<0){
						cout<<"-1\n";
						return;
						
						}
					
				}
           lpz(i,0,n/2){
				 if(s[i]=='?'){
						if(a>1){
							s[i]='0'; 
							s[n-1-i]='0';
							a=a-2;
							}
						else if(b>1){
							s[i]='1'; s[n-1-i]='1';
							b=b-2;
							//continue;
							}
						else{
							cout<<"-1\n";
							return;
							}
						}
					}
						
			   if(n%2!=0 && s[n/2]=='?'){
				   if(a>0){
					   s[n/2]='0';
					   }
					else  
					   s[n/2]='1';
						
				   }
			cout<<s<<endl;
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
