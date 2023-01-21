//Solution by: Ahmed Sherif
//Date/Time: 21/01/2023 - 17:06
//Verdict: Accepted
//Problem Link: https://codeforces.com/gym/102397/problem/H
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <unordered_map>

using namespace std;
typedef long long ll;

ll fast_power(ll base, ll power, ll mod = 0)
{
    ll result = 1;
    if(!mod){
        while(power > 0) {
            if(power % 2 == 1)
                result *= base;
            base *= base;
            power /= 2;
        }
    } else {
        while(power > 0) {
            if(power % 2 == 1)
                result = (result * base) % mod;
            base = (base * base) % mod;
            power /= 2;
        }
    }
    return result % mod;
}

int main()
{
    int n; cin >> n;
    unordered_map<int, int> mp;
    while(n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    ll ans = 0;
    for (unordered_map<int, int>::iterator itr = mp.begin(); itr !=mp.end(); itr++)
    {
        ans = (ans + fast_power(2, itr->second, 1000000007) - 1) % 1000000007;
    }
    cout << ans;
    return 0;
}