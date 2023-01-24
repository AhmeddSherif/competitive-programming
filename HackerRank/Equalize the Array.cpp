//Solution by: Ahmed Sherif
//Date/Time: 22/11/2023 22:55
//Verdict: Accepted
//Problem Link: https://www.hackerrank.com/contests/101hack39/challenges/equality-in-a-array/problem
//Profile Link: https://www.hackerrank.com/Ahmed_Sherif

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> freq;
    unordered_map<int, int> nums;
    int op, x;
    for (int i = 0; i < n; i++) {
        cin >> op >> x;
        if (op == 1) {
            if (nums.count(x)) {
                freq[nums[x]]--;
                nums[x]++;
                freq[nums[x]]++;
            } else {
                nums[x] = 1;
                freq[nums[x]]++;
            }
        } else if (op == 2) {
            if (nums.count(x) && nums[x] > 0) {
                freq[nums[x]]--;
                nums[x]--;
                if (nums[x] > 0) freq[nums[x]]++;
            }
        } else if (op == 3) {
            if (freq.count(x) && freq[x] > 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}
