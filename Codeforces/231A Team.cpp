//Solution by: Ahmed Sherif
//Date/Time: 29/8/2022 - 18:05
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/231/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int result = 0;
    
    for(int i = 0; i<n; i++){
        int s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int sum = s1 + s2 + s3;
        if(sum >= 2)
        {
            result++;
        }
    }
    
    cout<<result<<endl;
}