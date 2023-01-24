//Solution by: Ahmed Sherif
//Date/Time: 26/12/2022 - 15:58
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/285/C
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <algorithm>
#include <vector>
 
#define lumos ios_base::sync_with_stdio(false); cin.tie(NULL);
 
typedef long long ll;
using namespace std;
 
int main()
{
    lumos;
    ll n, ans = 0; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
 
    for (int i = 0; i < n; i++) ans += abs((i+1) - a[i]);
 
    cout << ans << "\n";
}