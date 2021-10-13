// Question : https://www.codechef.com/SEPT20B/problems/ADAMAT

#include <bits/stdc++.h>
using namespace std;
//Templates start here
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ll long long
#define fo(i, j, k, in) for (int i = j; i < k; i += in)
#define refo(i, j, k, in) for (int i = j; i >= k; i -= in)
#define rep(i, j) fo(i, 0, j, 1)
#define rerep(i, j) fo(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define reall(cont) cont.end(), cont.begin()
#define foreach(it, l) for (auto it = l.begin() l it != l.end(); it++)
#define in(A, B, C) assert(B <= A && A <= C)
#define MOD (int)1e9
#define MOD7 1000000007
#define PI 3.1415926535897932384626433832795
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef vector<int> VI;
typedef vector<long long> VL;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<PLL> VLL;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef map<int, int> MPII;
typedef map<long long, long long> MPLL;
typedef set<int> SETI;
typedef multiset<int> MSETI;
int main() {
	long long t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
        ll a[n][n],b[n][n];
        fo(i,0,n,1)
        {
            fo(j,0,n,1)
            {
                cin>>a[i][j];
            }
        }
        ll counter=0;
        for(int l=n-1 ; l>=1 ; l--)
        {
            if(a[0][l]!=(l+1))
            {
                counter+=1;
                fo(i,0,l,1)
                {
                    fo(j,0,l,1)
                    {
                        b[i][j]=a[j][i];
                    }
                }
                fo(i,0,l,1)
                {
                    fo(j,0,l,1)
                    {
                        a[i][j]=b[i][j];
                    }
                }
            }
        }
        cout<<counter<<"\n";
	}
	return 0;
}
