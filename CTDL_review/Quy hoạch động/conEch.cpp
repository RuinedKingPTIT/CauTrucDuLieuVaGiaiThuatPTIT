#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[n+1] = {1};
        for(int i = 1; i <= n; i++){
            for(int j = max(i-3, 0); j < i; j++)    a[i] += a[j];
        }
        cout << a[n] << endl;
    }
    return 0;
}