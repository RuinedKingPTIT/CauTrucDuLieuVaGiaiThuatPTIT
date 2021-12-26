#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s;   cin >> s;
        stack<string> cnt;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                string temp1 = cnt.top();   cnt.pop();
                string temp2 = cnt.top();   cnt.pop();
                string res = temp2 + s[i] + temp1;
                cnt.push(res);
            }else cnt.push(string(1, s[i]));
        }
        cout << cnt.top() << endl;
    }
    return 0;
}