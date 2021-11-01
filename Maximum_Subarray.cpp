//Application of KADANE'S ALGORITHM
//Leetcode Problem
#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int cursum,maxsum;
        cursum=maxsum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            cursum=max(cursum+nums[i],nums[i]);
            maxsum=max(cursum,maxsum);     
        }
        return maxsum;
        
}
int main()
{
  int n;
  cin>>n;
  vector<int>array;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    array.push_back(x);
  }
  cout<<maxSubArray(array);
  return 0;

}
