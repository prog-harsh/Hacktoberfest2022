#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
int romanToInt(string s) {
    const static string M[] = {"", "M", "MM", "MMM"};
    const static string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    const static string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const static string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    
    const static int l[] = {0, 1, 2, 3, 2, 1, 2, 3, 4, 2};  
    
    int num=0, v, len, pos = 0;
    for (int i=0; i<4; ++i) if (s.find(M[i]) == 0) {v = i; len=l[i];}
    num = v; pos = pos + len;
    for (int i=0; i<10; ++i) if (s.find(C[i], pos) == pos) {v = i; len=l[i];}
    num = 10*num + v;  pos = pos + len;
    for (int i=0; i<10; ++i) if (s.find(X[i], pos) == pos) {v = i; len=l[i];}
    num = 10*num + v; pos = pos + len;
    for (int i=0; i<10; ++i) if (s.find(I[i], pos) == pos) {v = i; len=l[i];}
    num = 10*num + v;         
    return num;
}
};
int main(){
    string s;
    cin>>s;
    Solution ss;
    int k;
    k=ss.romanToInt(s);
    cout<<k<<endl;
    return 0;
}