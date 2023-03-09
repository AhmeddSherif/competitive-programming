//Solution by: Ahmed Sherif
//Date/Time: 21/11/2022 - 20:52
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/946/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

int main() {
    int sm1 = 0, sm2 = 0;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x >= 0)
        {
            sm1 += x;
        } else
        {
            sm2 += x;
        }
    }
    cout << sm1 - sm2;
    return 0;
}