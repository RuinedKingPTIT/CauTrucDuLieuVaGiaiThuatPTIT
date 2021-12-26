#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        sort(a, a+n, greater<int>());
        for(int i = 0 ; i < n/2; i++) cout << a[i] << ' ' << a[n-i-1] <<' ';
        if(n%2!=0) cout << a[n/2];
        cout << endl;
        delete a;
    }
    return 0;
}