#include<bits/stdc++.h>
#define int long long
using namespace std;
struct coupleNum
{
    int x, y;
};

int32_t main(){
    int n;  cin >> n;
    vector<coupleNum> a(n+1);
    int dp[100005];
    dp[0] = 0;
    a[0].x = 0;
    a[0].y = 0;
    for(int i = 1 ; i <= n; i++) cin >> a[i].x >> a[i].y;
    int res = 1;
    for(int i = 1; i <= n; i++){
        dp[i] = 1;
        for(int j = i-1; j >= 1; j--){
            if(a[i].x > a[j].x && a[i].y > a[j].y)  dp[i] = max(dp[i], dp[j] +1);
        }
        res = max(res, dp[i]);
    }
    cout << res << endl;
    return 0;
}