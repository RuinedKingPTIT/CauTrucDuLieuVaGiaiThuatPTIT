#include<bits/stdc++.h>
#define int long long
using namespace std;
bool checkMirror(int *a, int n){
    int *b = new int[n];
    copy(a, a+n, b); 
    sort(b, b+n);
    for(int i = 0 ; i < n; i++){
        if(a[i]!=b[i] && a[n-i-1]!=b[i])return false;
    }
    return true;
}   
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        if(checkMirror(a, n)) cout << "Yes\n";
        else cout << "No\n";
        delete a;
    }
    return 0;
}