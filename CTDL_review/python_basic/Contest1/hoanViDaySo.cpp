#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    sort(a.begin(), a.end());
    do{
        for(auto x :a) cout << x << ' ';
        cout << endl;
    }while(next_permutation(a.begin(), a.end()));
    return 0;
}