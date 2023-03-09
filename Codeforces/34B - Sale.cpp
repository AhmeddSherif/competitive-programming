//Solution by: Ahmed Sherif
//Date/Time: 22/11/2022 - 22:25
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/34/B
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;

    vector<int> v(n);
    bool flag = false;

    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int count = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if(m > 0)
        {
        if(v[i] > -1) break;
        count += v[i] * -1;
        m--;
        } else {
            break;
        }
        
    }
    cout << count << "\n";
}