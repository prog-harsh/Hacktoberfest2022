#include <iostream>
#include <unordered_set>

using namespace std;

bool subarray(int arr[], int n)
{
    unordered_set<int> ss;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0 || ss.find(sum)!= ss.end()){
           return true;
        }
        ss.insert(sum);
    }
    return false;
}

int main()
{
    int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    if (subarray(arr, n)){
        cout << "Subarray with zero-sum exists";
    }
    else{
        cout << "Subarray with zero-sum does not exists";
    }
   return 0;
}