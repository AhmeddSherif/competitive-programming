//Solution by: Ahmed Sherif
//Date/Time: 20/01/2023 00:15
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/96/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            num++;
            if (num == 6)
            {
                cout << "YES";
                return 0;
            }
        }
        else num = 0;
    }
    cout << "NO";
    return 0;
}