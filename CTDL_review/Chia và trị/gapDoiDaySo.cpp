#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k;   cin >>n >> k;
        int res = 1;
        while(k%2==0){
            k/=2;
            res++;
        }
        cout << res << endl;
    }
    return 0;
}