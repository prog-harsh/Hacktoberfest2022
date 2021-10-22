#include<iostream>
using namespace std;

void swap(int*a, int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void reverse(int*arr,int l,int r){
    while(l<r){
        swap(&arr[l],&arr[r]);
        l++;
        r--;
    }
}

void rotate(int* arr, int n, int k){
    k=k % n;
    k= k < 0 ? n+k :k ;
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
}
void display(int*arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(int argc,char**argv){
    int* arr=new int[7] {2,9,8,1,3,5,4};
    rotate(arr,7,3);
    display(arr,7);
}
