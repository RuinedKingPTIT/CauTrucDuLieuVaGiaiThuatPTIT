#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        string s;   cin >> s;
        int n = s.size();
        int dp[n][n] = {};
        int lmax = 0;
        for(int i = n-1; i >= 0; i--){
            for(int j = i; j < n; j++){
                if(i==j)    dp[i][j] = 1;
                else{
                    if(s[i] == s[j]){
                        if((i+1) > (j-1))   dp[i][j] = 1;
                        else dp[i][j] = dp[i+1][j-1];
                    }else dp[i][j] = 0;
                }
                if(dp[i][j] == 1 && j-i+1> lmax)    lmax = (j-i+1);
            }
        }
        cout << lmax << endl;
    }
    return 0;
}