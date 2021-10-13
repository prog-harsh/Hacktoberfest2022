//To count the frequency of a given integer in an array O(n)

#include <iostream>
#include <unordered_map>
using namespace std;

int maxFrequency(int* a, int size) {
	unordered_map<int, int> hash;

	for (int i = 0; i < size; ++i)
	{
		hash[a[i]]++;
	}

	int currentMax = 0;
	int result = -1;
	for(auto x: hash) {
		if(currentMax < x.second) {
			currentMax = x.second;
			result = x.first;
		}
	}
	return result;
}

int main()
{
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cout << maxFrequency(a, n);
	return 0;
}
