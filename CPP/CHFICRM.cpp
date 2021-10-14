// Question : https://www.codechef.com/problems/CHFICRM

#include <iostream>
#include<string>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
        int n,five=0,ten=0,fifteen=0;
        cin>>n;
        bool ans=true;
        int a[n];
        
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
            
        if(a[0]==5)
        {
            for(int i=0 ; i<n ; i++)
            {
                if(a[i]==5)
                    five+=1;
                else if(a[i]==10)
                {
                    if(five>0)
                    {
                        ten+=1;
                        five-=1;
                    }
                    else
                    {
                        cout<<"NO"<<"\n";
                        ans=false;
                        break;
                    }
                }
                else if(a[i]==15)
                {
                    if(ten>0)
                    {
                        fifteen+=1;
                        ten-=1;
                    }
                    else if(five>1)
                    {
                        fifteen+=1;
                        five-=2;
                    }
                    else
                    {
                        cout<<"NO"<<"\n";
                        ans=false;
                        break;
                    }
                }
            }
            if(ans)
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
	return 0;
}
