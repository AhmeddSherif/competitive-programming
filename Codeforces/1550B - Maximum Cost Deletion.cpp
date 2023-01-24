//Solution by: Ahmed Sherif
//Date/Time: 26/12/2022 - 17:19
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/1550/B
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <algorithm>

#define lumos ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
using namespace std;


int main() {
    lumos;
    int t;
    cin >> t;
    while (t--) {
        int n, a, b; cin >> n >> a >> b;
        string s; cin >> s;
        int m = unique(s.begin(), s.end()) - s.begin();
        cout << n * a + max(n * b, (m / 2 + 1) * b) << '\n';
    }
}