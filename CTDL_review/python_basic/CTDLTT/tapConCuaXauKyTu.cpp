#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; string s;
        cin >> n >> s;
        int run = 0;
        vector<string> res;
        while(run <= n){
            vector<bool> v(n);
            fill(v.end()-run, v.end(), true);
            do{
                string temp = "";
                for(int i = 0 ; i < n; i++){
                    if(v[i]){
                        temp.push_back(s[i]);
                    }
                }
                if(temp.size()>0)
                res.push_back(temp);
            }while(next_permutation(v.begin(), v.end()));
            run++;
        }
        sort(res.begin(), res.end());
        for(auto x : res)   cout << x << " ";
        cout << endl;
    }
    return 0;
}