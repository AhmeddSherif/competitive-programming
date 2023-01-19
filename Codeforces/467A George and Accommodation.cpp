//Solution by: Ahmed Sherif
//Date/Time: 07/10/2022 - 00:09
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/467/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
 
using namespace std;
 
int main()
{
   int  n ; 
   cin >> n ;
   int p[105], q[105] , count=0;;
   
    for (int i=0;i<n;i++){
      cin >> p[i]>>q[i];
      
      if (q[i]-p[i]>=2) count ++ ;
    }

    cout <<count;
    return 0;
}