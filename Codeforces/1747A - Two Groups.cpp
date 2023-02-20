//Solution by: Ahmed Sherif
//Date/Time: 20/02/2023 - 22:01
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/1747/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

#define lumos ios_base::sync_with_stdio(false); cin.tie(0);

int main() {
	lumos;
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int s = 0;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			s += x;
		}
		cout << abs(s) << endl;
	}
	return 0;
}