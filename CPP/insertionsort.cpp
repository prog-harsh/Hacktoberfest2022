#include <iostream>
using namespace std;
void insersort(int arr[]){
	int i,j=0,key=0;
	for(i=1;i<5;i++){
		j=i-1;
		key = arr[i];
		while(j>=0 && arr[j]>key){
			arr[j+1]= arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
int main(){
	int myarr[5];
	int i;
	
	for(i=0;i<5;i++){
		cout<<"Enter ("<<i+1<<")th value of array: ";
		cin>>myarr[i];
	}
	cout<<"Before Sorting: ";
	for(i=0;i<5;i++){
		cout<<myarr[i]<<" ";
		
	}
	cout<<endl;
	insersort(myarr);
	cout<<"After Sorting:  ";
	for(i=0;i<5;i++){
		cout<<myarr[i]<<" ";
		
	}
	return 0;
}
