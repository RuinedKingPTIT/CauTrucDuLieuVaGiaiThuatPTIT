#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base ::sync_with_stdio(0);
    cin.tie(0);


    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<string> cnt;
        for(int i = s.size()-1; i>= 0; i--){
            if(s[i] =='+' || s[i] =='-' || s[i] =='*' || s[i] =='/'){
                string first = cnt.top(); cnt.pop();
                string second = cnt.top(); cnt.pop();
                string temp = first + second + s[i];
                cnt.push(temp);
            }else cnt.push(string(1, s[i]));
        }
        cout << cnt.top() << endl;
    }
    return 0;

}