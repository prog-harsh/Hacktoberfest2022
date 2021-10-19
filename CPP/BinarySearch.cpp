#include<iostream>
#include<conio.h>
using namespace std;

int BinarySearch(int a[],int n,int data){
    int l,r;
    int mid=0;
    l = 0;
    r = n -1;
    while(l < r){
        mid = (l + r)/2;
        if(data == a[mid])
            return mid;
        else if(data < a[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main(){
   int arraySize, data, result;
   cout<<"\nEnter Array Size :- ";
   cin>>arraySize;
   int a[arraySize];
   cout<<"\nEnter Array Elements :- ";
   for(int i = 0; i < arraySize; i++){
        cin>>a[i];
   }
   cout<<"\nYour Array elements are :- \n";
   for(int i = 0; i < arraySize; i++){
        cout<<" "<<a[i]<<" ";
   }
   cout<<"\n\n";
   cout<<"Enter Data You want to Search :- ";
   cin>>data;
   result = BinarySearch(a,arraySize,data);
   cout<<"\n"<<data<<" is found at position "<<result;
   getch();
}

