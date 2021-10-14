// https://www.codechef.com/CENS2020/problems/CENS20D


#include <bits/stdc++.h>
using namespace std;

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
bool grt(long long int x, long long int y)
{
    return x > y;
}
long exponentiation(long base, long exponent)
{
    long t = 1L;
    while (exponent > 0)
    {
        if (exponent % 2 != 0)
            t = (t * base) % MOD7;
        base = (base * base) % MOD7;
        exponent /= 2;
    }
    return t % MOD7;
}
int fact(int n)
{
    int result = 1;
    fo(i, 2, n + 1, 1)
        result = result * i;
    return result;
}
int nPr(int n, int r)
{
    return fact(n) / fact(n - r);
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
VL generateSubArray(int arr[], int n)
{
    VL tot_subarr;
    rep(i, n)
    {
        fo(j, i, n, 1)
        {
            fo(k, i, j + 1, 1)
                tot_subarr.pb(arr[k]);
        }
    }
    return tot_subarr;
}
VL generateSubsequences(int arr[], int n)
{
    VL tot_subsequence;
    unsigned int opsize = pow(2, n);
    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if (counter & (1 << j))
                tot_subsequence.pb(arr[j]);
        }
    }
    return tot_subsequence;
}

int main()
{
    ll i,n, j, k, t, p, v, x, y, z;
    cin >> t;
    while (t--)
    {
        cin>>n;
        ll a[n],count=0;
        fo(i,0,n,1)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            count=0;
        }
        else
        {
            fo(i,0,n,1)
            {
                fo(j,i+1,n,1)
                {
                    if((a[i]&a[j])==a[i])
                    {
                        count+=1;
                    }
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}