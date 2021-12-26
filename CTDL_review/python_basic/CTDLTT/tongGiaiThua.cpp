#include<bits/stdc++.h>
#define int long long int
using namespace std;
int giaiThua(int n){
    int res = 1;
    for(int i = 2; i <= n; i++) res*=i;
    return res;
}
int32_t main(){
    int n; cin >> n;
    int res = 1;
    for(int i = 2; i <= n; i++){
        res += giaiThua(i);
    }
    cout << res << endl;
    return 0;
}
