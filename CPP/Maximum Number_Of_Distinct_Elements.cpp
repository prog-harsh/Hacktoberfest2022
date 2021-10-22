#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct myc{
    bool operator()(pair<int, int> const &p1, pair<int, int> const &p2){
         return p1.second<p2.second;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll, ll>> m;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            m.push_back({x, i});
        }
        sort(m.begin(), m.end());
        ll k =0;
        bool t=true;
        for(ll i=0; i<n; i++){
            if(m[i].first > k){
                m[i].first=k;
                k++;
            }
            else if(m[i].first==k){
                m[i].first=k;

            }
        }
        sort(m.begin(), m.end(), myc());
        for(ll i=0; i<n; i++){
            cout<<m[i].first<<" ";
        }
        cout<<endl;
    }
   return 0;
}
