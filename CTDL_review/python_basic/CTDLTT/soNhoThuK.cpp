#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int N, Q;   cin >> N >> Q;
    vector<int> a(N);
    for(int& x : a) cin >> x;
    while(Q--){
        int u, v, K;    cin >> u >> v >> K;
        vector<int> temp{a.begin() + u-1, a.begin()+v};
        sort(temp.begin(), temp.end());
        cout << temp[K-1] << endl;
    }
    return 0;
}