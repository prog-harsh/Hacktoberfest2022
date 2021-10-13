//Container with most water

#include<bits/stdc++.h>
using namespace std;

int container_with_most_water(int n,vector<int> h){
    int most_water=-1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((min(h[i],h[j])*(j-i))>most_water){
                most_water=min(h[i],h[j])*(j-i);
            }
        }
    }
    return most_water;
}

int main(){
    int n;
    vector<int> h;
    cout<<"Enter the length of the array: ";
    cin>>n;
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        int temp_height;
        cin>>temp_height;
        h.push_back(temp_height);
    }
    cout<<container_with_most_water(n,h);
    return 0;
}