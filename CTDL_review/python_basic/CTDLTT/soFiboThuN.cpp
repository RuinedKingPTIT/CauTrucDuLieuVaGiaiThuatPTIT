#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9+7;
int n;
int F[2][2], M[2][2];
void mul(int f[2][2], int m[2][2]){
    int x = (f[0][0]*m[0][0]%mod + f[0][1]*m[1][0]%mod)%mod;
    int y = (f[0][0]*m[0][1]%mod + f[0][1]*m[1][1]%mod)%mod;
    int z = (f[1][0]*m[0][0]%mod + f[1][1]*m[1][0]%mod)%mod;
    int t = (f[1][0]*m[0][1]%mod + f[1][1]*m[1][1]%mod)%mod;
    F[0][0] = x;    F[0][1] = y;
    F[1][0] = z;    F[1][1] = t;
}
void Pow(int f[2][2], int n){
    if(n<=1)    return;
    Pow(f, n/2);
    mul(f, f);
    if(n&1) mul(f, M);
}
void solve(int n){
    F[0][0] = F[0][1] = F[1][0] = 1;
    F[1][1] = 0;
    M[0][0] = M[0][1] = M[1][0] = 1;
    M[1][1] = 0;
    if(n==0)    cout << 0 << endl;
    else{
        Pow(F, n-1);
        cout << F[0][0] << endl;
    }

}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        solve(n);    
    }
    return 0;
}