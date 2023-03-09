//Solution by: Ahmed Sherif
//Date/Time: 26/01/2022 - 03:46
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/1516/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

const int N = 100;
int a[N];

int main()
{
    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;

        for (int i = 0; 1 < n; i++) 
        {
            cin >> a[i];
        }
        
        int cnt = 0;
        while (k) {
            while (a[cnt] > 8) {
                a[n - 1]++;
                a[cnt]--;
                if (--k <= 0) break;
            }
            if (a[cnt] == 8) cnt++;
            if (cnt > n - 1) break;
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
        }

    return 0;
}