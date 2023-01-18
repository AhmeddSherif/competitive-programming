//Solution by: Ahmed Sherif
//Date/Time: 29/8/2022 - 18:49
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/50/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    long long m,n;
    cin >> m >> n;
    long long a = m * n;
    
    while(a %2 > 0)
    {
        a--;
    }
    a = a / 2;
    cout<<a<<endl;
}