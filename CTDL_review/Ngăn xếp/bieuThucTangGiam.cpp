#include<bits/stdc++.h>
#define int long long
using namespace std;
string IDstring(string s){
    string res;
    stack<int> cnt;
    for(int i = 0 ; i <= s.size(); i++){
        cnt.push(i+1);
        if(i == s.size() || s[i] == 'I'){
            while(!cnt.empty()){
                res += to_string(cnt.top());    cnt.pop();
            }
        }
    }
    return res;
}

int32_t main(){
    int t; cin >> t;
    for(int index = 1; index <= t; index++){
        string s; cin >> s;
        cout << "Test " << index<< ": " << IDstring(s) << endl;
        
    }
    return 0;
}