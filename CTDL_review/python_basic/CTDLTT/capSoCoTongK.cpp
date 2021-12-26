#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int *a=  new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        int res = 0;
        for(int i = 0 ; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if((a[i] + a[j]) == k) res++;
            }
        }
        cout << res << endl;
        delete a;
    }
    return 0;
}