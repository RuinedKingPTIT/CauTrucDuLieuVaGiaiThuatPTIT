#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){
    int t;  cin >> t;
    while(t--){
        string s; cin >> s;
        char *res = new char[s.size()];
        res[0] = s[0];
        for(int i = 1; i < s.size(); i++){
            if(s[i] == '0') res[i] = res[i-1];
            else{
                if(res[i-1] == '0') res[i] = '1';
                else res[i] = '0';
            }
        }
        cout << res << endl;
        delete res;
    }
    return 0;
}