#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; scanf("%d", &n);
    vector<int> a(n);
    for(int i = 0 ; i < n; i++) scanf("%d", &a[i]);
    int Q;  scanf("%d", &Q);
    while(Q--){
        int u, v, K;    scanf("%d%d%d", &u, &v, &K);
        vector<int> temp{a.begin()+u-1, a.begin()+ v};
        sort(temp.begin(), temp.end(), greater<>());
        int dem = 0;
        for(auto x : temp){
            if(x > K)   dem++;
            else break;
        }  
        printf("%d\n", dem);
    }
    return 0;
}