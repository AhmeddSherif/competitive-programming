//Solution by: Ahmed Sherif
//Date/Time: 20/01/2023 00:02
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/59/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s; cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i])) upper++;
        else lower++;
    }

    if (upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
    return 0;
}