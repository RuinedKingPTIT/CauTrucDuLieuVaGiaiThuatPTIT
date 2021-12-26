#include<bits/stdc++.h>
#define int long long
using namespace std;
int tongUoc(int n){
    int tong = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i==0){
            tong += i;
            if(i!=(n/i) && i!=1)    tong += (n/i);
        }
    }   
    return tong;
}

bool check(int n){
    return (tongUoc(n) > n);
}
int32_t main(){
    int a, b;   cin >> a >> b;
    bool isPrime[max(a, b)];
    memset(isPrime, true, sizeof(isPrime));
    for(int i = 2; i <= max(a, b); i++){
        if(isPrime[i]){
            for(int j = 2*i; j <= max(a, b); j +=i) isPrime[j] = false;
        }
    }
    int dem = 0;
    for(int i = min(a, b);i <= max(a, b); i++){
        if(!isPrime[i] && check(i))    dem++;
    }
    cout << dem;
    return 0;
}