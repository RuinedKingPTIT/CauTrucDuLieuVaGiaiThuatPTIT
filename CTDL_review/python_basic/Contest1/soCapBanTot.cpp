#include<bits/stdc++.h>
#define int long long
using namespace std;
bool condiSize(string x, string y){
    return x.size() < y.size();
}

int32_t main(){
    int n, k;   cin >> n >> k;
    vector<string> a(n);
    vector<int> ar(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        ar[i] = a[i].size();
    } 
    sort(ar.begin(), ar.end());
    int res = 0;
    for(int i = 0 ; i < n; i++){
        int temp = upper_bound(ar.begin(), ar.end(), ar[i]) - ar.begin();
        if(temp <= k)   res += (temp-i);
        else if(i+k < n) res += k;
        else if(i+temp > n) res += (n-1-i);
        // cout << temp << ' ';

    }
    cout << res;

    return 0;
}