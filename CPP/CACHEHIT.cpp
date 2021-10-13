//Question :  https://www.codechef.com/COOK119B/problems/CACHEHIT

// Solution
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b, m, temp, count = 0, prev = -1, now = 0;
        cin >> n >> b >> m;
        vector<int> x;
        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            x.push_back(temp);
            if ((temp + 1) % b != 0)
                now = ((temp + 1) / b) + 1;
            else
                now = ((temp + 1) / b);
            if (prev != now)
            {
            	prev=now;
                count += 1;
            }
        }
        cout << (count) << "\n";
    }
    return 0;
}