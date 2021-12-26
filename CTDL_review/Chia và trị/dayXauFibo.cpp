#include<bits/stdc++.h>
#define int long long
using namespace std;
char fiboTH(int n, int k, vector<int> fibo){
    if(n == 1 && k == 1)    return 'A'; 
    if(n == 2 && k == 1)    return 'B'; 
    if(k <= fibo[n-2]) return fiboTH(n-2, k, fibo);
    return fiboTH(n-1, k - fibo[n-2], fibo);
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        vector<int> v(n+1);
        v[0] = 0;
        v[1] = 1;
        for(int i = 2; i <= n; i++) v[i] = v[i-1] + v[i-2];
        cout << fiboTH(n, k, v) << endl;
    }
    return 0;
}