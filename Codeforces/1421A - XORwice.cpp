//Solution by: Ahmed Sherif
//Date/Time: 13/02/2023 - 22:54
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/1421/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
	while (t--)
	{
		int a, b; cin >> a >> b;
		int x = a & b;
		
		cout << ((a ^ x) + (b ^ x)) << "\n";
	}
}