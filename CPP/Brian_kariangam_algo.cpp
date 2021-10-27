// Brian Kariangam's Algorithm to calculate set bits

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std; 

int countBits(int number)
{
    int res = 0;
    while(number>0)
    {
        number = (number&(number-1));
        res++;
    }
    return res;
}

#define ll long long 
 
 int main(){ 
      int number;
      cin>>number;
      cout<<countBits(number)<<endl;
return 0;
}