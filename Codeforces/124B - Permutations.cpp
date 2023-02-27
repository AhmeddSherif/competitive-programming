// Solution by: Ahmed Sherif
// Date/Time: 27/02/2023 - 22:54
// Verdict: Accepted
// Problem Link: https://codeforces.com/problemset/problem/124/B
// Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define lumos ios_base::sync_with_stdio(false); cin.tie(0);

int main() {
    int n , len;
    cin >> n >> len;
    vector<string> a(n);
    for (string& it : a) cin >> it;
    vector<int> per;
    for (int i = 0; i < len; i++)
        per.push_back(i);

    int ans = INT_MAX;

    do {
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < len; j++)
                ar[i] = ar[i] * 10 + (a[i][per[j]] - '0');

        sort(ar.begin(), ar.end());
        ans = min(ans, ar[n - 1] - ar[0]);
    } while (next_permutation(per.begin(), per.end()));
    cout << ans << "\n";
    return 0;
}
