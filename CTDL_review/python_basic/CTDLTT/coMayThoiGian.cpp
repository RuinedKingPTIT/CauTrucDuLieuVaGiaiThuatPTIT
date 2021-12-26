#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int n, Q; cin >> n >> Q;
    int a[1005];
    for(int i = 1 ; i <= n; i++){
        char c;
        cin >> c; 
        a[i] = c - '0';
    }   
    while(Q--){
        int S, T, C; cin >> S >> T >> C;
        if(S>T) swap(S, T);
        int dp[1005];
        memset(dp, 21, sizeof(dp));
        dp[S] = a[S];
        for(int i = S+1; i <= T; i++){
            for(int j = max(i - C, S); j < i; j++){
                dp[i] = min(dp[i], dp[j] + a[i]);
            }
        }
        cout << dp[T] << endl;
    }
    return 0;
}