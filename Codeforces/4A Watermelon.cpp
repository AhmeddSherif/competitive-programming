//Solution by: Ahmed Sherif
//Date/Time: 06/10/2022 - 23:50
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/4/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

int main()
{
    int w; cin >> w;

    if (w % 2 == 0 && w > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}