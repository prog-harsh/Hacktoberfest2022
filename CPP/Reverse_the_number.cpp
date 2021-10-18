//Problem Statement:
/*Reverse The Number Problem Code: FLOW007SolvedSubmit
Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
4
12345
31203
2123
2300
Output
54321
30213
3212
32*/
#include <iostream>
using namespace std;

int main() {
    //Declaring the testcase and taking input
	int t;
	cin>>t;
	while(t--)
	{
        //Taking the input of a number to reverse it
	    int n;
	    cin>>n;
	    int sum=0;
	    for (int i=0;n>0;i++) {
	        int lastdigit=n%10;
	        sum=sum*10+lastdigit;
	        n=n/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
