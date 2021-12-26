#include<bits/stdc++.h>
using namespace std;

bool checkBraket(string s, int d, int c){
    stack<char> st;
    for(int i = d ; i <= c; i++){
        if((s[i] == ']' && st.empty()) || (s[i] == ')' && st.empty()))   return false;
        else if(s[i] == '(' || s[i] == '[' )  st.push(s[i]);
        else if(s[i] == ')' || s[i] == ']'){
            if(s[i] == ')' && st.top() == '(')  st.pop();
            else if(s[i] == ']' && st.top() == '[') st.pop();
            else return false;
        }
    }
    if(st.size() == 0)  return true;
    return false;
}
int sl(string s, int d, int c){
    int res = 0;
    for(int i = d; i<= c; i++)  if(s[i] == '[')  res++;
    return res;
}
int longestVer2(string s){
    if(s.size()==0) return 0;
    stack<int> st;
    vector<pair<int, int>> p;
    int maxVal = 0;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '[' ) st.push(i);
        else if(s[i] == ']' && st.size()>0){
            p.push_back({st.top(), i});
            st.pop();
        }
    }
    for(auto x : p){
        if(checkBraket(s, x.first, x.second)){
           maxVal = max(maxVal, sl(s, x.first, x.second));
        }
    }
    return maxVal;
}
int main(){
    string s;   cin >> s;
    
    cout << longestVer2(s);
    return 0;
}