#include<bits/stdc++.h>
#define int long long
using namespace std;
int min_del(string s){
    int n = s.size();
    int dp[n][n] = {0};
    for(int i = 0 ; i < n; i++) dp[i][i] = 1;
    for(int i = n-1; i >= 0; i--){
        for(int j = i+1; j < n; j++){
            dp[i][j] = (s[i] == s[j]) ? dp[i+1][j-1] + 2
            : max(dp[i][j-1], dp[i+1][j]);
        }
    }
    return n - dp[0][n-1];
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        string s;   cin >> s;
        cout << min_del(s) << endl;
    }
    return 0;
}