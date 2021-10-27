#include <iostream>
using namespace std;

void shellSort(int arr[], int n){
    for(int gap = n/2; gap > 0; gap /=2){
        for(int i = gap; i<n; i++){
            int temp = arr[i];
            int j;
            for(int j = i; j>= gap && arr[j-gap] > temp; j -= gap){
                arr[j] = arr[j-gap];
            }
            arr[j] = temp;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //Printing before sorting
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    shellSort(arr,n);
    //Printing after sorting
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//Input - 
// 5
// 2 4 3 6 7

// Output - 2 3 4 6 7


// Time Complexity - O(N^2) in worst
// O(N*(logN)^2) in best
