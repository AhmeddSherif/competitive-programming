#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n , c;
vector <long long > loc;
bool vaild(int mid){
    int cows = 1 , last = loc[0];
    for (int i = 1 ; i < n ; i++){
        if (loc[i] - last >= mid ){
            cows++;
            last = loc[i];
        }
    }
    if(cows >= c)return true;
     return false;

}
int BinarySearch(){
    long long low = 1 , high = 1e9 , mid ,ans ;
    while (low <= high){
            mid = (high + low)/2;
        if (vaild(mid)){
            low = mid+1;
            ans = mid ;
        }
        else{
            high = mid -1;
        }
    }
    return ans;

}
int main(){
    fast
    int t;
    cin >> t;
    while(t--){
        cin >> n >> c;
        loc.clear();
        for (int i = 0 ;i < n ;i ++){
            long long x;
            cin >> x;
            loc.push_back(x);
        }
        sort(loc.begin() ,loc.end());
        cout <<BinarySearch() <<"\n";
    }
    return 0;
}