// https://www.codechef.com/problems/COVID19

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=-1,min=9,count=0;
        cin>>n;
        int arr[n];
        vector<int>x;
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        for(int i=1 ; i<n ; i++)
            x.push_back(arr[i]-arr[i-1]);
        x.push_back(20);
        for(int i=0 ; i<x.size() ; i++)
        {
            if(x[i]<=2)
            {
                count+=1;
            }
            else
            {
            	if(min>count)
                	min=count;
                count=0;
            }
            if(max<count)
                max=count;
            
        }
        cout<<(min+1)<<" "<<(max+1)<<"\n";
    }
    return 0;
    
}