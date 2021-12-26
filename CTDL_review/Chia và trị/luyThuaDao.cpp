#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int mod = 1e9+7;
int power(int a, int b){
    if(b==0) return 1;
    int x = power(a, b/2);
    if(b%2==0)  return x*x%mod;
    return a*(x*x%mod)%mod;
}
int reverserNum(int n){
    int res = 0;
    while(n!=0){
        res = res * 10 + (n%10);
        n/=10;
    }
    return res;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << power(n, reverserNum(n)) << endl;
    }
    return 0;
}