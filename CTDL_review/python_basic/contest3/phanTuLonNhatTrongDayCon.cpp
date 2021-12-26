#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        for(int i = 0 ; i < n-k+1; i++) cout << *max_element(a+i, a+i+k) << ' ';
        delete a;
        cout << endl;
    }
    return 0;
}