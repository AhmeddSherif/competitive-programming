//Solution by: Ahmed Sherif
//Date/Time: 24/01/2022 - 17:45
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/961/B
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>


using namespace std;

int main() {
	int n, k; cin >> n >> k;
	
	vector<int> a(n);
	vector<int> t(n);
	
	int overall = 0;
	
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; i < n; ++i) cin >> t[i];
		
	vector<int> pr(n);
	for (int i = 0; i < n; ++i) {
		if (i) pr[i] += pr[i - 1];
		if (t[i] == 0) pr[i] += a[i];
		else overall += a[i];
	}
	
	int add = 0 ;
	for (int i = k - 1; i < n; ++i)
		add = max(add, pr[i] - (i >= k ? pr[i - k] : 0));
	
	printf("%d\n", overall + add);
	
	return 0;
}