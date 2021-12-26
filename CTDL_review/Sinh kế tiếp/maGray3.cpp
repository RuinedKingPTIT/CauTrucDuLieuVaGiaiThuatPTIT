#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string res = string(1, s[0]);
        for(int i = 1;i < s.size(); i++){
            if(s[i] != s[i-1]) res+= "1";
            else res += "0";
        }
        cout << res << endl;
    }
    return 0;
}