#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int N, M;   cin >> N >> M;
    vector<int> a(N, 0);
    while(M--){
        int u, v, k;    cin >> u >> v >> k;
        for(int i = u-1; i < v; i++)    a[i] += k;
    }
    int Q;  cin >> Q;
    while(Q--){
        int l, r;   cin >> l >> r;
        cout << *max_element(a.begin()+l-1, a.begin()+r) << endl;
    }
    return 0;
}