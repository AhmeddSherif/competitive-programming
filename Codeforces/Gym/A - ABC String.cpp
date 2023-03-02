// Solution by: Ahmed Sherif
// Date/Time: 2/03/2023 - 20:51
// Verdict: Accepted
// Problem Link: https://codeforces.com/contest/1494/problem/A
// Contest Link: https://codeforces.com/contest/1494
// Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>

#define lumos ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;

bool is_balanced(const string& s) {
    vector<int> direction(3);
    int first_char = s[0] - 'A';
    int last_char = s.back() - 'A';

    if (first_char == last_char) {
        return false;
    }

    direction[first_char] = 1;
    direction[last_char] = -1;

    int middle_char = 3 ^ first_char ^ last_char;
    if (count(s.begin(), s.end(), 'A' + first_char) == s.length() / 2) {
        direction[middle_char] = -1;
    }
    else {
        direction[middle_char] = 1;
    }

    int balance = 0;
    for (const char& c : s) {
        balance += direction[c - 'A'];
        if (balance < 0) {
            return false;
        }
    }

    return balance == 0;
}

int main() {
    lumos;
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << (is_balanced(s) ? "YES\n" : "NO\n");
    }

    return 0;
}
