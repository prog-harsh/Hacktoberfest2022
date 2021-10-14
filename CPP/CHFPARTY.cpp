// https://www.codechef.com/problems/CHFPARTY

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int c=0;
        sort(arr, arr+n);
        for(int i=0; i<n ; i++)
        {
            if(arr[i]==0)
                c+=1;
            else if(arr[i]<=i && arr[i]!=0)
                c+=1;
            else
                break;
        }
        cout<<c<<"\n";
    }
    return 0;
}