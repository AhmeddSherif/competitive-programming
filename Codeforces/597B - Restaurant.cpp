//Solution by: Ahmed Sherif
//Date/Time: 09/03/2023 - 22:05
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/597/B
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include<iostream>
#include<algorithm>
using namespace std;

struct point{
 long int x,y;
};

point p[500000];
bool cmp(point a, point b){
    return a.y<b.y;
}
int main()
{
    long int i,j,n,m;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>p[i].x>>p[i].y;
        }
        sort(p,p+n,cmp);
        long last=p[0].y;
        long int ans=1;
        for(i=1;i<n;i++)
        {
            if(last<p[i].x){
                last=p[i].y;
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}