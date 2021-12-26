#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        unordered_map<int, int> m;
        int count = 0;
        for(int i = 0 ;  i< n; i++){
            if(m.find(k - a[i]) != m.end()){ // neu tim thay
                count += m[k-  a[i]];
            }
            m[a[i]]++;
        }
        cout << count << endl;
        delete a;
    }
    return 0;
}