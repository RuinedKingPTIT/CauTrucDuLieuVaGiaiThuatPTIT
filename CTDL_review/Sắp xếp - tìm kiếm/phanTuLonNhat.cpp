#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        sort(a, a+n, greater<int>());
        for(int i = 0 ; i < k; i++) cout << a[i] << " ";
        cout << endl;
        delete a;
    }
    return 0;
}