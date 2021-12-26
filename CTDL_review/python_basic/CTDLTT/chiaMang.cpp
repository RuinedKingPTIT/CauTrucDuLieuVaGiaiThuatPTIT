#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        vector<bool> v(n);
        fill(v.end() - k, v.end(), true);
        
        do{
            for(int i = 0 ; i < n; i++) if(v[i])    cout << a[i] << ' ';
            cout << endl;
        }while(next_permutation(v.begin(), v.end()));
       
        
    }
    return 0;
}