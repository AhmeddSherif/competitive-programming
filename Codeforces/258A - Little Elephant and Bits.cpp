//Solution by: Ahmed Sherif
//Date/Time: 26/01/2023 - 03:47
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/258/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string a; cin >> a;
    string ans;

    int x = 1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0' && x == 1)
            x = 0;
        else
            ans += a[i];
    }
    if (x == 1)
        ans.pop_back();


    cout << ans;
    return 0;
}