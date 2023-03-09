//Solution by: Ahmed Sherif
//Date/Time: 13/02/2023 - 22:54
//Verdict: Accepted
//Problem Link: https://www.codechef.com/problems/NXS2
//Profile Link: https://www.codechef.com/users/ahmeddsherif

#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a = n & (-n);
		int b = n - a;

		if (b < 1) cout << "-1\n";
		else cout << a << " " << b << "\n";
	}
	
}