//Solution by: Ahmed Sherif
//Date/Time: 22/01/2023 - 18:04
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/416/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

 
using namespace std;
const int mx = 2 * 1000000000;
const int mn = -mx;

int main() {
	int mx = 2 * 1000000000;
	int mn = -mx;
	
	int n; cin >> n;
	while (n --> 0) {
		string s; cin >> s;
		int x; cin >> x;
		string ans; cin >> ans;
		
		if (ans == "N") {
			if (s == ">=") s = "<";
			else if (s == "<") s = ">=";
			else if (s == "<=") s = ">";
			else s = "<=";
		}
		
		if (s == ">=") mn = max(mn, x);
		else if (s == ">") mn = max(mn, x + 1);
		else if (s == "<=") mx = min(mx, x);
		else mx = min(mx, x - 1);
	}
	
	if (mn <= mx) cout << mn;
	else cout << "Impossible";
}