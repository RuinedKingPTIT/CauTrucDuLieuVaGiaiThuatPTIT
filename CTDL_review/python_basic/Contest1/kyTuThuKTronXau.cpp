#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k;   cin >>n >> k;
        int res = 1;
        while(k%2==0){
            k/=2;
            res++;
        }
        cout << (char)(res + 64) << endl;
    }
    return 0;
}