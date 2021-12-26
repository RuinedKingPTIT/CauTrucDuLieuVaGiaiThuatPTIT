#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    if(s.size()==0) return true;
    stack<int> st;
    for(int i = 0 ; i < s.size(); i++){
        if((s[i] == ']' || s[i] == ')') && st.size()==0)    return false;
        else if(s[i] == '(' || s[i] == '[')    st.push(i);
        else if((s[i] == ')' || s[i] == ']') && st.size()>0){
            int top = st.top(); st.pop();
            if(s[top] == '(' && s[i] != ')')    return false;
            else if(s[top] == '[' && s[i]!= ']')    return false;
            else return true;
        }
    }
    if(st.size()==0)    return true;
    return false;
}
int longestRightString(string s){
    stack<char> cnt;
        cnt.push(-1);
        int res = 0;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '(') cnt.push(i);
            else{
                cnt.pop();
                if(cnt.size() > 0)  res = max(res, i - cnt.top());
                else if(cnt.size() == 0) cnt.push(i);
            } 
        }
       return res;
}
bool checkBraket(string s, int d, int c){
    if(s.size()==0) return true;
    stack<int> st;
    for(int i = d ; i <=c; i++){
        if((s[i] == ']' || s[i] == ')') && st.size()==0)    return false;
        else if(s[i] == '(' || s[i] == '[')    st.push(i);
        else if((s[i] == ')' || s[i] == ']') && st.size()>0){
            int top = st.top(); st.pop();
            if(s[top] == '(' && s[i] != ')')    return false;
            else if(s[top] == '[' && s[i]!= ']')    return false;
            else return true;
        }
    }
    if(st.size()==0)    return true;
    return false;
}
int sl(string s, int d, int c){
    int res = 0;
    for(int i = d; i<= c; i++)  if(s[i] == '[')  res++;
    return res;
}
int longestVer2(string s){
    stack<int> st;
    vector<pair<int, int>> p;
    int maxVal = INT_MIN;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '[' ) st.push(i);
        else if(s[i] == ']' && s[st.top()] == '['){
            p.push_back({st.top(), i});
            st.pop();
        }
    }
    for(auto x : p){
        if(checkBraket(s, x.first, x.second)){
            if(maxVal < sl(s, x.first, x.second))   maxVal = sl(s, x.first, x.second);
        }
    }
    return maxVal;
}
int main(){
    string s;   cin >> s;
    
    cout << longestVer2(s);
    return 0;
}