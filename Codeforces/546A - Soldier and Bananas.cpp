//Solution by: Ahmed Sherif
//Date/Time: 19/01/2023 23:30
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/546/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

int main()
{
    int k, n, w; cin >> k >> n >> w;
    int num = 0;
    for (int i = 1; i <= w; i++)
    {
        num += i * k;
    } 
    if (n < num) cout << num - n;
    else cout << 0;
    return 0;
}