// Solution by: Ahmed Sherif
// Date/Time: 23/01/2023 - 20:14
// Verdict: Accepted
// Problem Link: https://codeforces.com/gym/102397/problem/D
// Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

#define lumos ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;
typedef long long int ll;
ll a[100001];

int main()
{
    lumos;
    int n, x; cin >> n >> x;
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    int ans = n + 1, i = 0, j = 0;
    while (i < n)
    {
        while (j < n && sum < x)
        {
            sum += a[j];
            j++;
        }
        if (sum >= x) {
            ans = min(ans, j - i);
        }
        sum -= a[i];
        i++;
    }

    if (ans == n + 1) cout << -1;
    else cout << ans;
    return 0;
}