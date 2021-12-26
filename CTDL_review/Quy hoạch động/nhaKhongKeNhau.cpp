#include<bits/stdc++.h>
using namespace std;
int findMaxSum(vector<int> a){
    int incl = a[0];
    int excl = 0;
    int excl_new;
    for(int i = 1; i < a.size(); i++){
        excl_new = max(incl, excl);
        incl = excl + a[i];
        excl = excl_new;
    }
    return max(incl, excl);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int& x : v) cin >> x;
        cout << findMaxSum(v) << endl;
    }
    return 0;
}