//Solution by: Ahmed Sherif
//Date/Time: 16/02/2023 - 21:59
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/1559/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>
using namespace std;

#define lumos ios_base::sync_with_stdio(false); cin.tie(0);

int main() {
	lumos;
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int> a(n);
		for (int &it : a)
			cin >> it;
		int ans = a[0];
		for (int i = 0; i < n; i++)
		{
			ans &= a[i];
		}
		cout << ans << "\n";
	}
}
