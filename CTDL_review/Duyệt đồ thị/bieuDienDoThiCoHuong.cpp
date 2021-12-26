#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int v, e;   cin >> v >> e;
        vector<int> cnt[v+5];
        for(int i = 0 ;i  < e; i++){
            int a, b;   cin >> a >>b;
            cnt[a].push_back(b);
        }
        for(int i = 1 ; i <= v; i++) sort(cnt[i].begin(), cnt[i].end());
        for(int i = 1 ; i <= v; i++){
            cout << i << ": ";
            for(int j = 0; j < cnt[i].size(); j++)  cout << cnt[i][j] << ' ';
            cout << endl;
        }
    }
    return 0;
}