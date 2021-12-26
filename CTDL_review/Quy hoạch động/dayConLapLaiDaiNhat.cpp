#include<bits/stdc++.h>
#define int long long
using namespace std;
int longRepeatString(string s, int n){
    int dp[n+1][n+1];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(s[i-1] == s[j-1] && i!=j)    dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    return dp[n][n];
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n;
        string s;
        cin >>n >> s;
        cout << longRepeatString(s, n) << endl;
    }
    return 0;
}