#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        cout << count(a, a+n, 0) << endl;
        delete a;
    }
    return 0;
}