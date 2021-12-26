#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
    int t; cin >> t;
    while(t--){
        string s;   cin >> s;
        stack<int> cnt;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] >= '0' && s[i] <= '9') cnt.push(s[i] - '0');
            else{
                if(s[i] == '+'){
                    int t1 = cnt.top();
                    cnt.pop();
                    int t2 = cnt.top();
                    cnt.pop();
                    cnt.push(t1 + t2);
                }
                if(s[i] == '-'){
                    int t1 = cnt.top();
                    cnt.pop();
                    int t2 = cnt.top();
                    cnt.pop();
                    cnt.push(t1 - t2);
                }
                if(s[i] == '*'){
                    int t1 = cnt.top();
                    cnt.pop();
                    int t2 = cnt.top();
                    cnt.pop();
                    cnt.push(t1 * t2);
                }
                if(s[i] == '/'){
                    int t1 = cnt.top();
                    cnt.pop();
                    int t2 = cnt.top();
                    cnt.pop();
                    cnt.push(t1 / t2);
                }
            }
        }
        cout << cnt.top() << endl;
    }
    return 0;
}