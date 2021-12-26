#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a=  new int[n];
        int *res = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        
        stack<int> cnt;
        
        for(int i = n-1; i>=0; i--){
            while(!cnt.empty() && a[i] >= cnt.top()) cnt.pop();
            if(!cnt.empty()) res[i] = cnt.top();
            else res[i] = -1;
            cnt.push(a[i]);
        }
        for(int i = 0 ; i < n; i++) cout << res[i] << ' ';
        cout << endl;
        delete a;
        delete res;
    }
    return 0;
}