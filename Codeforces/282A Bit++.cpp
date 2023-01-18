//Solution by: Ahmed Sherif
//Date/Time: 30/08/2022 - 11:26
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/282/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n; cin >> n;
    int x = 0;
    
    for(int i = 1; i <= n; i++)
    {
        string operation; cin >> operation;
        if (operation.find("+") != std::string::npos)
            x+=1;
        if (operation.find("-") != std::string::npos)
            x-=1;        
    }
    std::cout << x << std::endl;
}