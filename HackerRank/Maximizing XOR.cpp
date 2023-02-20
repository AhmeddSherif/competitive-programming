//Solution by: Ahmed Sherif
//Date/Time: 20/02/2023 20:10
//Verdict: Accepted
//Problem Link: https://www.hackerrank.com/challenges/maximizing-xor/problem
//Profile Link: https://www.hackerrank.com/Ahmed_Sherif


#include <iostream>

using namespace std;

#define lumos ios_base::sync_with_stdio(false); cin.tie(0);

int main() {
    lumos;
    int l, r; cin >> l >> r;
    int ans = 0;
    
    for (int i = l; i < r; i++)
    {
        for (int j = i + 1; j <= r; j++)
        {
            int sum = i ^ j;
            ans = max(ans, sum);
        }
    }
    cout << ans << "\n";
}
