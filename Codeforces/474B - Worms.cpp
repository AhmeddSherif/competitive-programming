#include<iostream>
#include<vector>

using namespace std;
int main() {
    int n; cin >> n;
    long long var = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        var += x;
        v.push_back(var);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        cout << lower_bound(v.begin(), v.end(), x) - v.begin() + 1 << "\n";
    }
    return 0;
}