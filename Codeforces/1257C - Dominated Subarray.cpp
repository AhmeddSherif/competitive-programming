//Solution by: Ahmed Sherif
//Date/Time: 26/12/2022 - 16:34
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/1257/C
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>
#include <map>
 
#define lumos ios_base::sync_with_stdio(false); cin.tie(NULL);
 
typedef long long ll;
using namespace std;
const int N = 2e5 + 5;
 
int main()
{
    lumos;
    int a[N];
    int t, ans; cin >> t;
    map<int, vector<int>> m;
 
    while (t--)
    {
        ans = -1;
        m.clear();
        int n; cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]].push_back(i);
        }
        for (auto i : m)
        {
            if (i.second.size() > 1)
            {
                if (ans == -1)
                    ans = abs(i.second[0] - i.second[1]) + 1;
                for (int j = 0; j < i.second.size() - 1; j++)
                    ans = min(ans, abs(i.second[j] - i.second[j + 1]) + 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}