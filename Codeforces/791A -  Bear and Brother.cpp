//Solution by: Ahmed Sherif
//Date/Time: 27/08/2022 17:06
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/791/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif
 
#include <iostream>
 
using namespace std;
 
#define ll long long
#define magic ios_base::sync_with_stdio(false);
 
int main () {
	magic;
	ll a, b;
	cin>>a>>b;
	int res = 0;
	while (a <= b) {
		a *= 3;
		b *= 2;
		res++;
	}
	cout<<res<<endl;
	return 0;
}