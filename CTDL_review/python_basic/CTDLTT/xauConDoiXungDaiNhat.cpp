#include<bits/stdc++.h>
#define int long long
using namespace std;
int lengLongestString(string s){
    int n = s.size();
    int dp[n][n];
    int i, j, c;
    for(i = 0 ; i< n; i++)  dp[i][i] = 1;
    for(c = 2; c <= n; c++){
        for(i = 0 ; i < n-c+1; i++){
            j = i+c-1;
            if(s[i] == s[j] && c == 2)  dp[i][j] = 2;
            else if(s[i] == s[j])   dp[i][j] = dp[i+1][j-1] + 2;
            else dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
        }
    }
    return dp[0][n-1];
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        string s;   cin >> s;
        cout << lengLongestString(s) << endl;
    }
    return 0;
}