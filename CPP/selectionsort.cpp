#include <iostream>
#define x 1000
using namespace std;
void selecsort(int arr[]){
	int i,j;
	for(i=0;i<4;i++){
		int min = i;
		for(j=i+1;j<5;j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		if(min != i){
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i]=temp;
		}
	}
}
int main(){
	int myarr[x];
	int n,i;
	
	cout<<"Enter the length of the array: ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter ("<<i+1<<")th value of array: ";
		cin>>myarr[i];
	}
	cout<<"Before Sorting: ";
	for(i=0;i<n;i++){
		cout<<myarr[i]<<" ";
		
	}
	cout<<endl;
	selecsort(myarr);
	cout<<"After Sorting:  ";
	for(i=0;i<n;i++){
		cout<<myarr[i]<<" ";
		
	}
	return 0;
}
