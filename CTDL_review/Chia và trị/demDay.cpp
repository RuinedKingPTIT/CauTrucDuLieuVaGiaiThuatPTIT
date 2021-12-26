#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 123456789;
int countArr(int x, int n){
    if(n==0)    return 1;
    if(n == 1)  return x%mod;
    int temp = countArr(x, n/2);
    if(n%2==0)  return temp *temp % mod;
    else return x*(temp * temp % mod) % mod;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << countArr(2, n-1) << endl;
    }   
    return 0;
}