//Solution by: Ahmed Sherif
//Date/Time: 26/01/2023 - 03:50
//Verdict: Accepted
//Problem Link: https://codeforces.com/contest/337/problem/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <algorithm>
#include <vector>

#define endl "\n";

using namespace std;
const int N = 1e9 + 1;
int main()
{
	int n, m; cin >> n >> m;

	vector <int> v(m);
	for (int i = 0; i < m; i++)
		cin >> v[i];

	sort(v.begin(), v.end());


	int minimum = N;
	for (int i = n - 1; i < m; i++)
	{
		minimum = min(minimum, v[i] - v[i - (n - 1)]);
	}
	cout << minimum << endl;
}