#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int m = n-1;
        int *a = new int[n];
        int *b = new int[m];

        for(int i = 0 ; i < n; i++) cin >> a[i];
        for(int i = 0 ; i < m; i++) cin >> b[i];
        int vt = n-1;
        for(int i = 0 ; i < n; i++) if(a[i]!=b[i]){
            vt = i+1;
            break;
        }
        cout << vt << endl;

        delete a;
        delete b;
    }
    return 0;
}