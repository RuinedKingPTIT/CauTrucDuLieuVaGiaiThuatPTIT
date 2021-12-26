#include<stdio.h>

const int mod = 1e9+7;

long long exponential(long long a, long long b){
    if(a == 0)  return 0;
    if(b==0) return 1;
    if(b==1)    return a;
    long long x = exponential(a, b/2);
    if(b%2==0)  return x * x % mod;
    return a * (x*x%mod)%mod;
}

int main(){
    long long a, b;  
    while(scanf("%lld%lld", &a, &b) && (a!=0 || b!=0)){
        printf("%lld\n", exponential(a, b));
    }
    return 0;
}