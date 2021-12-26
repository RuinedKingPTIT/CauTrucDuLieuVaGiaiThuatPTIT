#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(string s){
    stack<char> cnt;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] != ')') cnt.push(s[i]);
            else{
                bool flag = false;
                while(cnt.top()!= '('){
                    if(cnt.top() == '+' || cnt.top() == '-' || cnt.top() == '*' || cnt.top() == '/')
                        flag = true;
                    cnt.pop();
                }
                cnt.pop();
                if(!flag) return true;
            }
        }
        return false;
}
int32_t main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}