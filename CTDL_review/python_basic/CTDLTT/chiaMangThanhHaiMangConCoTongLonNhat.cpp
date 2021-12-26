#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        sort(a, a+n, greater<int>());
      
        int tAfter = 0;
        for(int i = 0 ; i < max(k, n-k); i++) tAfter += a[i];
        cout << tAfter - (accumulate(a, a+n, 0) - tAfter) << endl;
        delete a;
    }
    return 0;
}