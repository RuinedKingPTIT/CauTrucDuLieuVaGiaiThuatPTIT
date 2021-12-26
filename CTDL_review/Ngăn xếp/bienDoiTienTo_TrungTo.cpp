#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<string> cnt;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                string first = cnt.top(); cnt.pop();
                string second = cnt.top(); cnt.pop();
                string temp = "(" + first + s[i] + second + ")";
                cnt.push(temp);
            }else cnt.push(string(1, s[i]));
        }
        cout << cnt.top() << endl;
    }
    return 0;
}