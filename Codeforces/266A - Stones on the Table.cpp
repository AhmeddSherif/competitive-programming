//Solution by: Ahmed Sherif
//Date/Time: 19/01/2023 23:08
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/266/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1]) ans++;
    }    
    cout << ans;
    return 0;
}