#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, x;
int a[100];
vector<vector<int>> res;
vector<int> v;
void init(){   
    cin >> n >> x;
    v.clear();  res.clear();
    for(int i = 0 ; i < n; i++) cin >> a[i];
    sort(a, a+n);
}
void Try(int i, int sum, vector<int> v){
    if(sum > x) return;
    if(sum == x){
        res.push_back(v);
        return;
    }
    for(int j = i ; j < n ; j++){
        if(sum + a[j] <= x){
            v.push_back(a[j]);
            Try(j, sum + a[j], v);
            v.pop_back();
        }
    }
}
void result(){
    // cout << res.size() << " ";
    for(auto x : res){
        cout << "[";
        for(int i = 0 ; i  < x.size()-1; i++)   cout << x[i] << ' ';
        cout << x[x.size()-1] << "]";
    }
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        init();
        Try(0, 0, v);
        if(res.size() ==0){
            cout << -1 << endl;
            continue;
        }
        result();
        cout << endl;
    }
    return 0;
}