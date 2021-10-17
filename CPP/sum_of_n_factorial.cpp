#include<iostream>

using namespace std;

/**sum of n factorial series
ex: if n=5, sum=1!+2!+3!+4!+5!=1+2+6+24+120=153 
**/

int factorialsum(int n)
{
    return n == 1 ? 1 : n * factorialsum(n - 1);
}

int main(){

    int n, sum=0;

    cin >> n;

    for (int i=1;i<=n;i++)
    {
        sum=sum + factorialsum(i);
    }
    cout<<sum<<endl;

}