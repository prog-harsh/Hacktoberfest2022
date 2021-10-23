// https://www.codechef.com/COOK133C/problems/ZEBRA 

#include<bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------*/
#define int long long int
#define fl(i, a, b) for(int i = a; i<b; i++)
#define vi vector<int>
#define PB push_back
#define mp make_pair
#define tc int t; cin>>t; while(t--)
#define aa(arr,n) int arr[n]; fl(i,0,n) cin>>arr[i];
#define av(arr, n) vector<int> arr(n); fl(i,0,n) cin>>arr[i];
#define vvi vector<vector<int>>
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define mii map<int,int>
#define R return
#define B break
#define ff first
#define ss second
#define rmin(a,b) (a=min((a), (b)))
#define rmax(a,b) (a=max((a), (b)))
#define C continue
#define lcm(a,b) (a/__gcd(a, b))*b
#define mod 1000000007
/*--------------------------------------------------------------*/


void solve(){
    int n, k;
    cin>>n>>k;
    string clr;
    cin>>clr;
    char curr = clr[0];
    int islands = 0;

    for(int i = 0; i<clr.size(); i++){
        if(clr[i]!=curr){
            islands++;
            curr = clr[i];
        }
    }
    if(islands<k){
        cout<<-1<<"\n";
    }
    else{
        if((k%2 and islands%2) or (k%2==0 and islands%2==0)){
            cout<<clr.size()<<"\n";
        }
        else{
            char curr = clr.back();
            for(int i = clr.size()-1; i>=0; i--){
                if(clr[i]!=curr){
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tc{

        solve();
    }
    
    return 0;
}
// 10000111111100000111 

