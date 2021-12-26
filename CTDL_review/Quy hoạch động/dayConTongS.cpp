#include<bits/stdc++.h>
#define it long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, s; cin >> n >> s;
        int dp[40005] = {0};
        dp[0] = 1;
        int a;
        for(int i = 1; i <= n; i++){
            cin >> a;
            for(int j = s; j >= i; j--) if(dp[j-a] == 1) dp[j] = 1;
        }
        if(dp[s] == 1)  cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}