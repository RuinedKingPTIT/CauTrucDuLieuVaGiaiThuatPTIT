#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        set<int> cnt;
        for(int i = 0 ; i< n;i++){
            cin >> a[i];
            cnt.insert(a[i]);
        }   
        bool flag = true;
        for(auto x : cnt){
            if(count(a, a+n, x) > (n/2)){
                cout << x << endl;
                flag = false;
                break;
            } 
        } 
        if(flag)    cout << "NO\n";

        delete a;
    }
    return 0;
}