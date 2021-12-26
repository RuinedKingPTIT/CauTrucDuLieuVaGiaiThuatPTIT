#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        bool flag = true;
        for(int i = 0 ; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(a[i] == a[j]){
                    cout << a[i] << endl;
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
        }
        if(flag) cout << "NO\n";
        delete a;
    }
    return 0;
}