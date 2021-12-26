#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int c, n; cin >> c >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    sort(a.begin(), a.end(), greater<>());
    int res = 0;
    for(int i = 0 ; i < n; i++){
        int l = i;
        res += a[l];
        while(res > c){
            res -= a[l];
            l++;
        }
        i = l;
    }
    cout << res;
    return 0;
}