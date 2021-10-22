#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,originalno;
    cin>>n;
    originalno=n;
    int lastdigit;
    int sum=0;
    while(n>0)
    {
        lastdigit=n%10;
        sum+=pow(lastdigit,3); 
        n/=10; 
    }

    if(sum==originalno)
    {
        printf("armstrong no");
    }
    else
    {
        printf("not an armstrong no");
    }



}