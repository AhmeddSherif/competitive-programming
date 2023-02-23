//Solution by: Ahmed Sherif
//Date/Time: 24/02/2023 00:25
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/550/B
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>
using namespace std;

#define lumos ios_base::sync_with_stdio(false); cin.tie(0);

int main() {
	lumos;
	int n, l, r, x; cin >> n >> l >> r >> x;
	vector<int> a(n);	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 0; i < (1 << n); i++)
	{
		int mn = 1000000, mx = -1, sum = 0;
		for (int j = 0; j < n; j++)
		{
			if ((i & (1 << j))) {
				sum += a[j];
				mn = min(mn, a[j]);
				mx = max(mx, a[j]);
			}
		}
		if (l <= sum && sum <= r && (mx-mn) >= x)
			ans++;
	}
	cout << ans << "\n";
}
