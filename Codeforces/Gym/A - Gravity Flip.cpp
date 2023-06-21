#include<iostream>
#include<vector>
#include<algorithm>

#define MADMAX ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;

int main() {
    MADMAX;
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
}