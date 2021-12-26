#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9+7;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int res = 0;
        for(int i = 0 ; i < n; i++) {
            res += (a[i]%mod)*i;
        }
        cout << res%mod << endl;
        delete a;
    }
    return 0;
}