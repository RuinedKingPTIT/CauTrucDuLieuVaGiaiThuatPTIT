#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        if(accumulate(a.begin(), a.end(), 0) % 2 !=0)   cout << "NO" << endl;
        else{
            int s = accumulate(a.begin(), a.end(), 0)/2;
            int dp[s+1] = {0};
            dp[0] = 1;
            for(int i = 0 ; i < n; i++){
                for(int j = s; j >= a[i]; j--){
                    if(dp[j - a[i]] == 1)   dp[j] = 1;
                }
            }
            if(dp[s] == 1)  cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}