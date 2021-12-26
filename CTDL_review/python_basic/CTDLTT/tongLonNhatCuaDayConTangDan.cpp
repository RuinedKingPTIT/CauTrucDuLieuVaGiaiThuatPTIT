#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        vector<int> l(n);
        for(int& x : a) cin >> x;
       
        int temp = 0;
        for(int i = 0 ; i < n; i++){
            l[i] = a[i];
            for(int j = i-1; j >= 0; j--)   if(a[i]> a[j]) l[i] = max(l[i], l[j] + a[i]);
            temp = max(temp, l[i]);
        }
        cout << temp << endl;
    }
    return 0;
}