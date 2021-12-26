#include<bits/stdc++.h>
#define int long long
using namespace std;
int getMinSquares(int n){
    vector<int> ar;
    int i = 1;
    while((i*i) <= n){
        ar.push_back(i*i);
        i++;
    }
    vector<int> dp(n+1, INT_MAX);
    dp[n] = 0;
    for(int i = n-1; i >= 0; i--){
        for(int j = 0 ; j < ar.size(); j++){
            if(i+ar[j] <= n)    dp[i] = min(dp[i], dp[i+ar[j]]);
        }
        dp[i]++;
    }
    return dp[0];
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        cout << getMinSquares(n) << endl;
    }
    return 0;
}