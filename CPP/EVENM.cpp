// https://www.codechef.com/problems/EVENM

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, c=1;
        cin>>n;
        int arr[n][n];
        for(int i=0 ; i<n ; i++)
        {
            if(i%2==0)
            {
                for(int j=0 ; j<n ; j++)
                {
                    arr[i][j]=c;
                    c+=1;
                }
            }
            else
            {
                for(int j=n-1 ; j>=0 ; j--)
                {
                    arr[i][j]=c;
                    c+=1;
                }
            }
        }
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<arr[i][j]<<" ";
            }
        cout<<"\n";
        }
    }
    return 0;
}