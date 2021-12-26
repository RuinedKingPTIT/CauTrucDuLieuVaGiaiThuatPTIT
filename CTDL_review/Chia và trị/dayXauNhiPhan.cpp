#include<bits/stdc++.h>
#define int long long
using namespace std;
char fiboTH(int n, int k, vector<int> fibo){
    if(n == 1 && k == 1)    return '0';
    if(n == 2 && k == 1)    return '1';
    if(k <= fibo[n-2])  return fiboTH(n-2, k, fibo);
    return fiboTH(n-1, k - fibo[n-2], fibo);
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> fibo(n+1);
        fibo[0] = 0;
        fibo[1] = 1;
        for(int i = 2; i <= n; i++) fibo[i] = fibo[i-1] + fibo[i-2];
        cout << fiboTH(n, k, fibo) << endl;
    }
    return 0;
}