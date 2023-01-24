//Solution by: Ahmed Sherif
//Date/Time: 26/12/2022 - 18:10
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/1468/N
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

#define lumos ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
using namespace std;

int main() {
    lumos;
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x, y, z;
        cin >> x >> y >> z;

        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;

        if (x < a1 || y < a2 || z < a3|| a1+a2+a3+a4+a5 > x+y+z || a1+a3+a4 > x+z || a2+a3+a5>y+z) {
            cout << "NO\n";
            continue;
        }
        else {
            cout << "YES\n";
        }
    }

    return 0;
}