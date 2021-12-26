#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<string> cnt;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                string fi = cnt.top(); cnt.pop();
                string se = cnt.top(); cnt.pop();
                string temp = fi + se + s[i];
                cnt.push(temp);
            }else if(s[i] >= 'A' && s[i] <= 'Z') cnt.push(string(1, s[i]));
        }
        cout << cnt.top() << endl;
    }
    return 0;
}