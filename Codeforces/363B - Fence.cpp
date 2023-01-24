//Solution by: Ahmed Sherif
//Date/Time: 24/01/2022 - 11:55
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/363/B
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
 
#define lumos ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;
const int N = 1e6 + 10;
int arr[N];
int sum[N];

int main()
{
    lumos;
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum[i] += arr[i];
        if (i) sum[i] += sum[i-1];
        
    }
    int mini = 1e9;
    int index = 0;
    for (int i = k - 1; i < n; i++)
    {
        int r = i;
        int l = r - (k - 1);
        int ans = sum[r];
        if(l) ans -= sum[l - 1];
        if(ans < mini)
        {
            mini = ans;
            index = l;
        }
    }
    cout << index + 1;   
}