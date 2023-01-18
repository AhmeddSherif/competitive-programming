//Solution by: Ahmed Sherif
//Date/Time: 29/08/2022 - 18:31
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/1/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    long long h,w,a;
    cin >> h >> w >> a;
    
    long long width = w / a;
    if(w % a > 0)
    {
        width++;
    }
    long long height = h / a;
    
    if(h % a > 0)
    {
        height++;
    }
    
    cout<<height * width<<endl;
}