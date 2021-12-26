#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n; cin>> n;
        int *a = new int[n];
        set<int> cont;
        for(int i = 0 ; i < n; i++) cin >> a[i];

        for(int i = 0 ; i < n; i++){
            while(a[i]!=0){
                cont.insert(a[i]%10);
                a[i]/=10;
            }
        }
        for(auto x : cont) cout << x << ' ';
        cout << endl;

        delete a;
    }
    return 0;
}