#include<bits/stdc++.h>
using namespace std;
string eraseBracket(string s){
    string res="";
    stack<int> st;
    for(int i = 0 ;  i< s.size(); i++){
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')'){
            int temp = st.top();   st.pop();
            if(s[temp-1] == '-'){
                for(int j = temp ;  j < i; j++){
                    if(s[j] == '+') s[j] = '-';
                    else if(s[j] == '-')    s[j] = '+';
                }    
            }
        }
    }
    for(int i = 0 ;  i< s.size(); i++)  if(s[i] != '(' && s[i] != ')')  res.push_back(s[i]);
    return res;
}
bool comparreString(string s1, string s2){
    for(int i = 0 ; i < s1.size(); i++) if(s1[i]!=s2[i])    return false;
    return true;
}
int main(){
    int t;  cin >> t;
    while(t--){
        string s1, s2;  cin >> s1 >> s2;
        if(comparreString(eraseBracket(s1), eraseBracket(s2)))  cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}