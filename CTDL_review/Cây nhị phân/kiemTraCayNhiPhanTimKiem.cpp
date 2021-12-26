#include<bits/stdc++.h>
#define int long long
using namespace std;

bool isInorder(vector<int> a){
    int n = a.size();
    if(n == 0 || n == 1) return true;
    for(int i = 1; i < n; i++)  if(a[i-1] > a[i])   return false;
    return true;
}

int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        if(isInorder(a))    cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}