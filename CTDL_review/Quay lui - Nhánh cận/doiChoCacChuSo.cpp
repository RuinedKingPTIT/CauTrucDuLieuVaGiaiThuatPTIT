#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){

    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int t; cin >> t;
    while(t--){
        int k; string s;
        cin >> k >> s;
        for(int i = 0 ; i < s.size(); i++){
            char max = s[s.size() - 1];
            int vt = s.size() - 1;
            for(int j = s.size()-1; j > i && k >0; j--){
                if(max < s[j]){
                    max = s[j];
                    vt =j;
                }
            }
            if(max > s[i] && k >0){
                swap(s[i], s[vt]);
                k--;
            }
        }
        cout << s << endl;
    }
    return 0;
}