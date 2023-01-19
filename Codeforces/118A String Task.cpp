//Solution by: Ahmed Sherif
//Date/Time: 19/01/2023 18:48
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/118/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s; cin >> s;
    vector<char> v;
    bool isVowel;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
    {
        isVowel = (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y');
        if (!isVowel)
        {
            v.push_back('.');
            v.push_back(s[i]);
        }

    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    return 0;
}