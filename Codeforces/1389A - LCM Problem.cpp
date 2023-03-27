//Solution by: Ahmed Sherif
//Date/Time: 27/03/2023 - 22:36
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/1389/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include<iostream>

#define lumos ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    int n; cin >> n;

    while (n--)
    {
        int l, r; cin >> l >> r;
        if (l * 2 > r) cout << "-1 -1\n";
        else cout << l << " " << l * 2 << "\n";
    }
    return 0;
}
