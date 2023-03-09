// Solution by: Ahmed Sherif
// Date/Time: 09/03/2023 - 10:37
// Verdict: Accepted
// Problem Link: https://codeforces.com/problemset/problem/96/B
// Profile Link: https://codeforces.com/profile/AhmeddSherif

#include<iostream>
#include<vector>

#define lumos ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;

vector<long long> superLuckyNumbers;
long long maxValue = 4444477777, minValue = maxValue;

void findLuckyNumbers(long long cur, int n, int cnt4, int cnt7) {
    if (cur > maxValue) {
        return;
    }

    if (cnt4 == cnt7 && cur >= n && cur < minValue) {
        minValue = cur;
    }

    // add 4
    findLuckyNumbers(cur * 10 + 4, n, cnt4 + 1, cnt7);

    // add 7
    findLuckyNumbers(cur * 10 + 7, n, cnt4, cnt7 + 1);
}

int main() {
    lumos;
    int n;
    cin >> n;

    findLuckyNumbers(0, n, 0, 0);

    cout << minValue << endl;

    return 0;
}