#include<bits/stdc++.h>
#define pb push_back
#define lp(i,a,b) for(int i=a;i<=b;i++)
#define lpz(i,a,b) for(int i=a;i<b;i++)
const int N = int(1e5 + 3);
const unsigned int M = 1000000007;
using namespace std;
// PRIME //
bool is_prime(int n){
    if(n == 2) return true;                
    if(n % 2 == 0) return false;         
    for(int i = 2;i <= n / i;++i)         
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
//LCM
int lcm(int a,int b){return a*b/gcd(a,b);}
//code starts from here//
void solve(){
	string s,s1,s2,s3;
	cin>>s>>s1>>s2;
	s3=s+s1;
	sort(s3.begin(),s3.end());
	sort(s2.begin(),s2.end());
	if(s3.length()!=s2.length())cout<<"NO\n";
	else {
		 lpz(i,0,s2.length()){
        if(s3[i]!=s2[i]){
			cout<<"NO\n";
			return;
			}
    }
   cout<<"YES\n";
		}
   
    
  } 
   
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	//long long t;
	//cin >> t;
	//while (t--)
	//{
		solve();
	//}
	return 0;
}
