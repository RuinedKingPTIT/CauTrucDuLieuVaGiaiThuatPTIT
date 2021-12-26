#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int *a = new int[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        cout << (find(a, a+n, x) - a) + 1 << endl;
        delete a;
    }
    return 0;
}