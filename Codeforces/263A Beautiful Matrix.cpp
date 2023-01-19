//Solution by: Ahmed Sherif
//Date/Time: 19/01/2023 - 16:17
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/263/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

int main()
{
    int t = 0, j = 0;
    int row = 1, column = 1;
    while (t != 5)
    {
        j = 0;
        while (j != 5)
        {
            int x; cin >> x;
            if (x == 1)
            {
                row = t + 1;
                column = j + 1;
            }
            j++;
        }
        t++;
    }

    cout << (abs(3 - row) + abs(3 - column));
}
