#include<bits/stdc++.h>
#define int long long
using namespace std;

int dp[26][26];
int x, y;   

int32_t main(){
    int t;  cin >> t;
    while(t--){
        memset(dp, 0, sizeof(dp));
        for(int i = 0 ; i<= 25; i++)    dp[i][0] = 1;
        for(int i = 0 ; i<= 25; i++)    dp[0][i] = 1;
        dp[0][0] = 0;
        for(int i = 0 ;  i<= 25; i++){
            for(int j = 0 ; j <= 25; j++){
                if(i == 0|| j==0)   continue;
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        cin >> x >> y;
        cout << dp[x][y] << endl;
       
    }
    return 0;
}