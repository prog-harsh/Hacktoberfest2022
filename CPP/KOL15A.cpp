// https://www.codechef.com/problems/KOL15A

#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int sum=0;
        for(int i=0 ; i<str.length() ; i++)
        {
            if(isdigit(str[i])==true)
            {
                string digits;
                digits+=str[i];
                sum+=std::stoi(digits);                
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}