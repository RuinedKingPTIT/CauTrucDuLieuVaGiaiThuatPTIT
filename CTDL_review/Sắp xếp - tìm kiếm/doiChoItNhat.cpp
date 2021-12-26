#include<bits/stdc++.h>
#define int long long
using namespace std;

int minSwaps(int *a, int n){
    vector<pair<int, int>> v(n);
    for(int i = 0 ; i < n; i++){
        v[i].first = a[i]; // gia tri
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    int count= 0;
    for(int i= 0 ; i < n; i++){
        if(v[i].second == i) continue;
        swap(v[i].first, v[v[i].second].first);
        swap(v[i].second, v[v[i].second].second);
        if(i!=v[i].second)i--;
        count++;
    }
    return count;
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        cout << (minSwaps(a, n)) << endl;
        delete a;

    }
    return 0;
}