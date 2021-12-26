#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int *a = new int[n];
        int *b = new int[m];

        for(int i = 0 ; i < n; i++) cin >> a[i];
        for(int i = 0 ; i < m; i++) cin >> b[i];

        cout << *max_element(a, a+n) * *min_element(b, b+m) << endl;

        delete a;
        delete b;
    }
    return 0;
}