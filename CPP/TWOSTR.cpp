// https://www.codechef.com/problems/TWOSTR

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string X;
        cin>>X;
        string Y;
        cin>>Y;
        bool ans=true;
        for(int i=0 ; i<X.length() ; i++)
        {
            if(X[i]!='?' && Y[i]!='?')
            {
                if(X[i]!=Y[i])
                {
                    ans=false;
                    break;
                }
            }
        }
        if(ans)
            cout<<"Yes\n";
        else
            cout<<"No\n";
        
    }
    return 0;
}