#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        int *b = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        for(int i = 0 ; i < n; i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        int res = 0;
        for(int i = 0 ;  i< n; i++) res += a[i] * b[i];
        cout << res << endl;

        delete a;
        delete b;
    }
    return 0;
}