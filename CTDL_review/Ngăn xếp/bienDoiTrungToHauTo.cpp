#include<bits/stdc++.h>
#define int long long
using namespace std;
int priority_level(char c){
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return -1;
}
string convert(string s){
    stack<char> cnt;
    string res = "";
    for(int i = 0  ; i < s.size(); i++){
        if(s[i] == ')'){
            while(!cnt.empty() && cnt.top()!='('){
                res += cnt.top();
                cnt.pop();
            }
            cnt.pop();
        }else if(s[i] == '(') cnt.push(s[i]);
        else if(s[i] == '^' || s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-'){
            while(!cnt.empty() && priority_level(s[i]) <= priority_level(cnt.top())){
                res += cnt.top();
                cnt.pop();
            }
            cnt.push(s[i]);
        }else res += s[i];
    }
    while(!cnt.empty()){
        if(cnt.top()!='(') res += cnt.top();
        cnt.pop();
    }
    return res;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << convert(s)<< endl;
    }
    return 0;
}