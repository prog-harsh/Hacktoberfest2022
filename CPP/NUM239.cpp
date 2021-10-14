// https://www.codechef.com/problems/NUM239

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l, r, lRes, rRes;
        cin>>l>>r;
        lRes = ((l/10)*3)+(l%10==1?0:0)+(l%10==2?1:0)+((l%10>=3 && l%10<=8)?2:0)+(l%10==9?3:0);
        rRes = ((r/10)*3)+(r%10==1?0:0)+(r%10==2?1:0)+((r%10>=3 && r%10<=8)?2:0)+(r%10==9?3:0)+((l%10==2 || l%10==3 || l%10==9)?1:0);
        // cout<<lRes<<" "<<rRes<<"\n";
        cout<<(rRes-lRes)<<"\n\n";
    }
    return 0;
}