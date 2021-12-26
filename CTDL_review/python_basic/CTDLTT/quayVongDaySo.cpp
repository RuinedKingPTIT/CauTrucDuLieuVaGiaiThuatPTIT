#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, d;   cin >> n >> d;
        int *a = new int[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = d; i < n; i++)    cout << a[i] << ' ';
        for(int i = 0; i < d; i++)    cout << a[i] << ' ';
        delete a;
        cout << endl;
    }
    return 0;
}