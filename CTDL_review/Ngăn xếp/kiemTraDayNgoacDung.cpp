#include<bits/stdc++.h>
using namespace std;
bool isRight(string s){
    if(s.size()==0) return true;
    stack<char> st;
    for(int i = 0 ; i < s.size(); i++){
        if((s[i] == ']' && st.empty()) || (s[i] == ')' && st.empty()) || (s[i] == '}' && st.empty()))   return false;
        else if(s[i] == '(' || s[i] == '[' || s[i] == '{')  st.push(s[i]);
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
            if(s[i] == ')' && st.top() == '(')  st.pop();
            else if(s[i] == ']' && st.top() == '[') st.pop();
            else if(s[i] == '}' && st.top() == '{') st.pop();
            else return false;
        }
    }
    if(st.size() == 0)  return true;
    return false;
}
int main(){
    int t;  cin >> t;
    while(t--){
        string s;   cin >> s;
        if(isRight(s))  cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}