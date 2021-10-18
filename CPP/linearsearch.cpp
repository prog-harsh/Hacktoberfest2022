#include <iostream>
#define x 1000
using namespace std;

int main(){
	int arr[x];
	int n,i,j,a;
	cout<<"Enter the length of the array: ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter ("<<i+1<<")th value of array: ";
		cin>>arr[i];
	}
	cout<<"Enter the number you want to search: ";
	cin>>a;
	for(j=0;j<n;j++){
		if(arr[j]==a){
			cout<<"Number found by Linear Search in ("<<j+1<<")th position"<<endl;
			break;
		}
		else{
			cout<<"Still searching not in ("<<j+1<<")th position"<<endl;
		}
	}
	return 0;
}
