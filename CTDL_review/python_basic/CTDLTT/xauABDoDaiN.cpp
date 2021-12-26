#include<bits/stdc++.h>
#define int long long
using namespace std;

void res(int *a, int n){
    for(int i = 0 ; i < n; i++){
        if(a[i] == 0) cout << 'A';
        else cout << 'B';
    }
    cout << " ";
}

void init(int *a, int n){
    for(int i = 0; i < n; i++) a[i] = 0;
}

void Try(int i, int *a, int n){
    for(int j = 0 ; j <= 1; j++){
        a[i] = j;
        if(i==n-1) res(a, n);
        else Try(i+1, a, n);
    }
}




int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        init(a, n);
        Try(0, a, n);
        cout << endl;
        delete a;
    }
    return 0;
}