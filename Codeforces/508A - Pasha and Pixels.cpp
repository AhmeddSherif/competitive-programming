//Solution by: Ahmed Sherif
//Date/Time: 24/02/2023 15:10
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/508/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>
using namespace std;

#define lumos ios_base::sync_with_stdio(false); cin.tie(0);

int main() {
	lumos;
	int n, m, k;
	cin >> n >> m >> k;
	int f[1005][1005];

	for (int x = 1; x <= k; x++)
	{
		int i, j; cin >> i >> j;
		f[i][j] = 1;

		if (f[i - 1][j] && f[i - 1][j + 1] && f[i][j + 1])
			return cout << x, 0;

		if (f[i - 1][j] && f[i - 1][j - 1] && f[i][j - 1])
			return cout << x, 0;

		if (f[i][j - 1] && f[i + 1][j - 1] && f[i + 1][j])
			return cout << x, 0;

		if (f[i][j + 1] && f[i + 1][j] && f[i + 1][j + 1])
			return cout << x, 0;
	}
	cout << 0;
	return 0;
}