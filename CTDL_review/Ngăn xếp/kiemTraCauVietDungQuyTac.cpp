#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    stack<int> cnt;
    for(int i = 0 ; i < s.size(); i++){
        if((s[i] == ']' && cnt.empty()) || (s[i] == ')' && cnt.empty()))    return false;
        else if(s[i] == '(' || s[i] == '[') cnt.push(i);
        else if(s[i] == ')' || s[i] == ']'){
            if((s[i] == ')' && s[cnt.top()] == '('))    cnt.pop();
            else if((s[i] == ']' && s[cnt.top()] == '['))    cnt.pop();
            else return false;
        }
        
    }
    if(cnt.size() == 0) return true;
    return false;
    
}
int main(){
    int t;  cin >> t;
    cin.ignore();
    while(t--){
        string s;  getline(cin, s);
        if(check(s))    cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}