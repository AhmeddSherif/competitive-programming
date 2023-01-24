//Solution by: Ahmed Sherif
//Date/Time: 23/12/2022 - 23:32
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/1490/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include<iostream>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, x, y, ans = 0; cin >> n;
		int a[51];
		for (int i = 0; i < n; i++) cin >> a[i];

		for (int i = 0; i < n - 1; i++)
		{
			x = min(a[i], a[i + 1]);
			y = max(a[i], a[i + 1]);
			while (y > x * 2)
				x *= 2, ans++;
		}	
		cout << ans << "\n";
	}

	return 0;
}