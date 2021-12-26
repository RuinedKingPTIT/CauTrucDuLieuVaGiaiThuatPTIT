#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        vector<int> a(n);
        map<int, int> cnt;
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
            cnt[a[i]] = i;
        } 
        if(cnt[k])  cout << cnt[k] + 1<< endl;
        else cout << "NO\n";

    }
}