#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<string> cnt;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' ){
                string s1 = cnt.top(); cnt.pop();
                string s2 = cnt.top(); cnt.pop();
                string temp = "(" + s2 + s[i] + s1 + ")";
                cnt.push(temp);
            }else cnt.push(string(1, s[i]));
        }
        cout << cnt.top() << endl;
    }
    return 0;
}