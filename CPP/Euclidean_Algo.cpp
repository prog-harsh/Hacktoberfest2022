// Euclidean Algorithm to find the Greatest common divisor of two numbers

#include <iostream>
#include <cmath>
using namespace std; 

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else 
        return gcd(b, a % b);    
}

#define ll long long 
 
 int main(){ 
      ios::sync_with_stdio(false) ;
      cin.tie(NULL) ;
      int a, b;
      cin>>a>>b;
      cout<<gcd(a, b)<<endl;
return 0;
}