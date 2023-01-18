//Solution by: Ahmed Sherif
//Date/Time: 06/10/2022 - 23:57
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/71/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
 
using namespace std;
 
int main()
{
    int n; cin >> n;
    while (n--)
    {
        string str; cin >> str;
        if (str.length() > 10)
        {
            cout << str[0] << str.length() - 2 << str[str.length() -1] << endl;
        }
        else {
            cout << str << endl;
        }
    }
    return 0;
}