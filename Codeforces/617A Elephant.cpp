//Solution by: Ahmed Sherif
//Date/Time: 31/08/2022 - 17:36
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/617/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <string>

using namespace std;
 
int main()
{
    int d = 0; cin >> d;
    int remaining = d;
    int steps = 0;
    while(remaining != 0)
    {
      if(remaining - 5 < 0)
      {
        if(remaining - 4 < 0)
        {
         if(remaining - 3 < 0){
             if(remaining - 2 < 0)
             {
                 if(remaining - 1 < 0)
                 {
                     
                 } else {
                     remaining-=1;
                     steps++;
                 }
             } else {
                 remaining-=2;
                  steps++;

             }
             
         }  else {
          remaining-=3;
          steps++;

        }
         
        } else {
          remaining-=4;
          steps++;

      }
      } else {
          remaining-=5;
          steps++;

      }
    }
    std::cout << steps << std::endl;
}