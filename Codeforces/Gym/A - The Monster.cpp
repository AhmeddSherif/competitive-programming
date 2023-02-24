// Solution by: Ahmed Sherif
// Date/Time: 24/02/2023 - 21:55
// Verdict: Accepted
// Problem Link: https://codeforces.com/contest/787/problem/A
// Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
using namespace std;

#define lumos ios_base::sync_with_stdio(false); cin.tie(0);

bool x[10001];
int main() {
	lumos;
    int a, b, c, d;
    int ans = -1;
    cin >> a >> b >> c >> d;
    for (int i = b; i <= 10001; i += a)
        x[i] = true;

    for (int j = d; j <= 10001; j += c)
    {
        if (x[j]) 
        {
            ans = j;
            break; 
        }
    }
    cout << ans << "\n";
    return 0;
}