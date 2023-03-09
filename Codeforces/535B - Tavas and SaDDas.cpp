// Solution by: Ahmed Sherif
// Date/Time: 09/03/2023 - 11:13
// Verdict: Accepted
// Problem Link: https://codeforces.com/problemset/problem/535/B
// Profile Link: https://codeforces.com/profile/AhmeddSherif


#include <algorithm>
#include <iostream>
#include <vector>

#define lumos ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int N = 1e9;
vector<long long> v;
void solve(long long num)
{
    v.push_back(num);
    if (num > N)
        return;
    solve(num * 10 + 4);
    solve(num * 10 + 7);
}
int main()
{
    lumos;
    solve(0);
    sort(v.begin(), v.end());
    v.resize(unique(v.begin(), v.end()) - v.begin());
    int n; cin >> n;
    cout << lower_bound(v.begin(), v.end(), n) - v.begin() << endl;
    return 0;
}