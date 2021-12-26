#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9+7;
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        int dp[k+1] = {1};
        for(int i = 1 ; i <= k; i++){
            for(int j = 0 ;j < n; j++){
                if(a[j] <= i)   dp[i] = (dp[i] + dp[i - a[j]])%mod;
            }
        }
        cout <<dp[k] << endl;
    }
    return 0;
}