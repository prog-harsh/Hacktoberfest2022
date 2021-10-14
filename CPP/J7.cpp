// https://www.codechef.com/problems/J7

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int t;
	cin >> t;
	while(t--)
	{
		double p, s, length, volume;
		cin >> p >> s;
		length = (p - sqrt(p*p - 24*s)) / 12;
		volume = (length*s)/2 - (length*length)*(p/4 - length);
		cout << fixed << setprecision(2) << volume << "\n"; 
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}