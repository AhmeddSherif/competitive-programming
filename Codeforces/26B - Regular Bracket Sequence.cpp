//Solution by: Ahmed Sherif
//Date/Time: 13/03/2023 - 13:24
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/26/B
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

int main()
{
    int left = 0, sum = 0;
    string s;
    cin >> s;
    for (char ch : s) {
        if (ch == '(') left++;
        else if (ch == ')' && left > 0) {
            sum += 2;
            left--;
        }
    }
    cout << sum << endl;
}
