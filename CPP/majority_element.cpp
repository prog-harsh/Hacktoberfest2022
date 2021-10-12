// Majority Element

// Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3

#include<bits/stdc++.h>
using namespace std;

int majority_element(int n, vector<int> v){
    int max_freq=0,maj_ele;
    map<int,int> m;
    for(auto x:v){
        m[x]++;
        if(m[x]>max_freq) {
            maj_ele=x;
            max_freq=m[x];
        }
    }
    return maj_ele;
}

int main(){
    int n;
    vector<int> v;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<majority_element(n,v);
    return 0;
}