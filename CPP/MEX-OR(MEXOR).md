## CODECHEF PROBLEM

>Problem Name : MEX-OR <br>
>Problem Code : MEXOR <br>

## QUESTION LINK : https://www.codechef.com/OCT21C/problems/MEXOR/

### Solution : 
```
#include <iostream>
using namespace std;

int main() 
{ 
    int tc ; cin>>tc ;
    while(tc--)
    {
        int m=0, n; 
        cin>>n ;
        
        if(n==0) cout<<"1\n";
        else if(n>0)
	    {
	    while(n>=2*m+1)
            {
       	        m=2*m+1;
	    }
	    cout<<m+1<<endl;
	}   
    }    
    return 0;
}
```
