//Solution by: Ahmed Sherif
//Date/Time: 19/01/2023 23:50
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/69/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

int main()
{
    int n, xsum(0), ysum(0), zsum(0);
    cin >> n;
    
    while (n--)
    {
        int x, y, z; cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }
    if (xsum == 0 && ysum == 0 && zsum == 0) cout << "YES";
    else cout << "NO";
    return 0;
}