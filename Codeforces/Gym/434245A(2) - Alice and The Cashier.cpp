// Solution by: Ahmed Sherif
// Date/Time: 20/03/2023 - 18:53
// Verdict: Accepted
// Problem Link: https://codeforces.com/gym/434245/problem/A
// Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>
#include <algorithm>

#define lumos ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;

int main()
{
	lumos;

	int t; cin >> t;
	while (t--)
	{
		int ans = 0;
		vector<int> v;
		int c, n; cin >> c >> n;
		while (n--)
		{
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end(), greater<int>());
		for (int i = 0; i < v.size(); i++) {
			while (c >= v[i]) {
				c -= v[i];
				ans++;
			}
		}
		cout << ans << "\n";
	}
}