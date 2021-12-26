#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int l = s.size();
        int sum = (s[l-1] - '0') *(int)pow(10, 0) + (s[l-2] - '0')*(int)pow(10, 1);
        if(sum%4==0)    cout << 4 << endl;
        else cout << 0 << endl;
    }
    return 0;
}