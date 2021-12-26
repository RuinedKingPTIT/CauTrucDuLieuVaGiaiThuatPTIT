#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int N, Q;   cin >> N >> Q;
    vector<int> a(N, 0);
    while(Q--){
        int stt, u, v, k;
        cin >> stt;
        if(stt==1){
            cin >> u >> v >> k;
            for(int i = u-1; i < v; i++)    a[i] += k;
        }else if(stt==2){
            cin >> u >> v;
            cout << *max_element(a.begin()+u-1, a.begin()+v) << endl;
        }
    }
    return 0;
}