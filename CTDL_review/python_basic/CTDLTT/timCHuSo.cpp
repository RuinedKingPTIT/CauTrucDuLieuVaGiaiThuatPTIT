#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string res = to_string(pow(3 + sqrt(5), n));
        size_t found_char = res.find('.');
        string ans = "000";
        ans.replace(0, string(1, res[found_char - 1]));
        ans.insert(0, string(1, res[found_char - 2]));
        ans.insert(0, string(1, res[found_char - 3]));
    
        cout << ans << endl;
    }
    return 0;
}