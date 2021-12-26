#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int mod = 1e9+7;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        if(k > n)   cout << 0 << endl;
        else{
            int res = 1;
            for(int i = n; i >= n-k+1; i--){
                res = (res%mod)*(i%mod);
                res%=mod;
            }
            cout << res << endl;
        }
    }
    return 0;
}