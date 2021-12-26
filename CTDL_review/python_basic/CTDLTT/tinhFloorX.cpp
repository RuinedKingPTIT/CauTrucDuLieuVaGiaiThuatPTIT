#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        bool flag = true;
        if(find(a, a+n, x)!=(a+n)){
            cout << (find(a, a+n, x) - a)+1 << endl;
            flag = false;
        } 
        else{
            vector<int> cnt{a, a+n};
            cnt.push_back(x);
            sort(cnt.begin(), cnt.end());
            if(x == cnt[0]){
                cout << -1 << endl;
                flag = false;
            } 
            else{
                cout << (find(cnt.begin(), cnt.end(), x) - cnt.begin()) << endl;
                flag = false;
            }
        }
        if(flag) cout << -1 << endl;
        delete a;
       
    }
    return 0;
}