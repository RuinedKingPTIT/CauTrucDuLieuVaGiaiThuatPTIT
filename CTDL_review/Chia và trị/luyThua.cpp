#include<bits/stdc++.h>
#define int long long
using namespace std;

const int m = 1e9+7;

int luyThua(int a, int n){
    if(n==1) return a;
    int x = luyThua(a, n/2);
    if(n%2==0)return x*x%m;
    return a*(x*x%m)%m;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int a, n;
        cin >> a >> n;
        cout << luyThua(a, n) << endl;
    }
    return 0;
}
