#include<bits/stdc++.h>
#define int long long
using namespace std;
int lenghtOfLongestSubString(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    int dp[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0 ; j <= m; j++){
            if(i == 0 || j == 0)    dp[i][j] = 0;
            else if(s1[i-1] == s2[j-1])    dp[i][j] = dp[i-1][j-1] + 1;
            else if(s1[i-1] != s2[j-1])    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][m];
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << lenghtOfLongestSubString(s1, s2) << endl;
    }
    return 0;
}