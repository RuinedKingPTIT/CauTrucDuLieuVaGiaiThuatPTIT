#include<bits/stdc++.h>
#define int long long
using namespace std;
int dp[1005][55];
bool v[1005][55];
int findLen(vector<int> ar, int i, int curr, int n, int k){
    if(i == n){
        if(!curr)   return 0;
        else return -1;
    }
    if(v[i][curr])  return dp[i][curr];
    v[i][curr] = 1;
    int l = findLen(ar, i+1, curr, n, k);
    int r = findLen(ar, i+1, (curr + ar[i])%k, n, k);
    dp[i][curr] = l;
    if(r!=-1)   dp[i][curr] = max(dp[i][curr], r+1);
    return dp[i][curr];
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        memset(dp, 0, sizeof(dp));
        memset(v, 0, sizeof(v));
        int n, k;   cin >> n >> k;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        cout << findLen(a,0, 0, a.size(), k) << endl;
    }
    return 0;
}