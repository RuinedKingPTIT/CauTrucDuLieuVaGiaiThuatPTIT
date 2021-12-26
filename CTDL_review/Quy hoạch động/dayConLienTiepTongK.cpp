#include<bits/stdc++.h>
#define int long long
using namespace std;
bool checkSumEqualK(vector<int> a, int k){
    int l = 0;
    int current_sum = a[0];
    for(int i = 1; i <= a.size(); i++){
        while(current_sum > k && l < (i-1)){
            current_sum -= a[l];
            l++;
        }
        if(current_sum == k)    return true;
        if(i < a.size())    current_sum += a[i];
    }
    return false;
}
int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, x;   cin >> n >> x;
        vector<int> v(n);
        for(int& x : v) cin >> x;
        if(checkSumEqualK(v, x))    cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}