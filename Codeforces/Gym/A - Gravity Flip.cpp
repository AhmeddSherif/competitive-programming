// Solution by: Ahmed Sherif
// Date/Time: 21/06/2023 - 09:42
// Verdict: Accepted
// Problem Link: https://codeforces.com/contest/405/problem/A
// Profile Link: https://codeforces.com/profile/AhmeddSherif

#include<iostream>
#include<vector>
#include<algorithm>

#define MADMAX ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;

int main() {
    MADMAX;
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
}