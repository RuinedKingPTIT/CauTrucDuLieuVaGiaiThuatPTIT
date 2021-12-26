#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int a[10] = {1,2,5,10,20, 50, 100, 200, 500, 1000};
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int res = 0;
        for(int i = 9;i >= 0;i--){
            res += (n/a[i]);
            n%=a[i];
        }
        cout << res << endl;
    }
    return 0;
}