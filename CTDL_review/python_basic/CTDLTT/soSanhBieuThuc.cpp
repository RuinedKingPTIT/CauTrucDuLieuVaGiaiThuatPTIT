#include<bits/stdc++.h>

using namespace std;
string eraseBracket(string s){
    string res = "";
    stack<int> cnt;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '(') cnt.push(i);
        else if(s[i] == ')'){
            int temp = cnt.top();   cnt.pop();
            if(s[temp-1] =='-'){
                for(int j = temp; j <= i; j++){
                    if(s[j] == '+') s[j] = '-';
                    else if(s[j] == '-')    s[j] = '+';
                }  
            }
        }
    }
    for(int i = 0 ; i < s.size(); i++)  if(s[i]!='(' && s[i]!=')')  res+=s[i];
    return res;
}
bool compareString(string s1, string s2){
    for(int i = 0; i < s1.size(); i++)  if(s1[i]!=s2[i])    return false;
    return true;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        if(compareString(eraseBracket(s1), eraseBracket(s2)))   cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}