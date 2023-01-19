//Solution by: Ahmed Sherif
//Date/Time: 23/12/2022 - 16:51
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/158/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[105];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0 && a[i] >= a[k - 1]) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}