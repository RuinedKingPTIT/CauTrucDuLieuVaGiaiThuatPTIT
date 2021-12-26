#include<bits/stdc++.h>
#define int long long
using namespace std;
int convertInteger(string s){
    int res = 0;
    int n = s.size();
    for(int i = 0 ; i < n; i++){
        res += (s[i] - '0')*(int)pow(2, n-i-1);
    }
    return res;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << convertInteger(s1) * convertInteger(s2) << endl;
    }
}