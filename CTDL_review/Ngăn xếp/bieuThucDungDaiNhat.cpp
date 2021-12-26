#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s;   cin >> s;
        stack<int> st;
        vector<int> cnt;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '('){
                st.push(i);
                cnt.push_back(i);
            } 
            else if(s[i] == ')' && !st.empty()){
                cnt.push_back(st.top());
                st.pop();
            }
        }
        set<int> filter{cnt.begin(), cnt.end()};
        int res = 0;
        for(auto x : filter){
            if(count(cnt.begin(), cnt.end(), x) == 2) res += 2;
        }
        
        cout << res << endl;
    }
    return 0;
}