// Solution by: Ahmed Sherif
// Date/Time: 21/06/2023 - 10:17
// Verdict: Accepted
// Problem Link: https://codeforces.com/contest/344/problem/A
// Profile Link: https://codeforces.com/profile/AhmeddSherif

#include<iostream>
#include<vector>
 
#define MADMAX ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
 
int main() {
    MADMAX;
	int n; cin >> n;
	int ans = 0;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < n - 1; i++)
		if (v[i] != v[i + 1]) ans++;

	cout << ans + 1;
}