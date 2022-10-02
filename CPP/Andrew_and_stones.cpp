//https://codeforces.com/problemset/problem/1637/C
//BY PRATIK AGRAWAL https://github.com/PratikAgrawal02/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long no_of_cases;
    cin >> no_of_cases;
    for (long long x = 0; x < no_of_cases; x++)
    {

        long long n, l = 0;
        cin >> n;
        long long p[n + 5];
        for (int i = 0; i < n; i++)
            cin >> p[i];
        if (n == 3)
        {
            if (p[1] % 2 == 1)
                cout << -1 << endl;
            else
                cout << p[1] / 2 << endl;
            continue;
        }
        bool flag = 1;
        for (int i = 1; i < n - 1; i++)
        {
            if (p[i] > 1)
                flag = 0;
        }
        if (flag)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 1; i < n - 1; i++)
            l += (p[i] + 1) / 2;
        cout << l << endl;
    }

    return 0;
}
