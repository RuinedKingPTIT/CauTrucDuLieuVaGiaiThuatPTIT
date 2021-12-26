#include<bits/stdc++.h>
#define int long long
using namespace std;
bool isPrime(int n){
    if(n<=1)    return false;
    if(n<=3)    return true;
    if(n%2==0 || n%3==0)    return false;
    for(int i = 5; i * i <= n; i+= 6) if(n%i==0 || n%(i+2) == 0 )return false;
    return true;
}
int32_t main(){
    int n; cin >> n;
    int res = 0;
    for(int i = 2; i <= n/2; i++){
        if(isPrime(i) && isPrime(n-i)) res++;
        else if(isPrime(i) && 2*isPrime(i) == n) res++;
    }
    cout << res << endl;
}