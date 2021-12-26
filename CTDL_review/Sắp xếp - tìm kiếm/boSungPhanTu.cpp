#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        int *a=  new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int res = 0;
        for(int i = 1 ; i < n; i++){
            if((a[i] - a[i-1]) > 1) res += (a[i] - a[i-1]) - 1;
        }
        cout << res << endl;
        delete a;
    }
    return 0;
}