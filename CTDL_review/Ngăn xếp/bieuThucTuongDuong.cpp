#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s;   cin >> s;
        stack<int> cnt;
        for(int i = 0 ;i < s.size(); i++){
            if(s[i] == '(') cnt.push(i);
            else if(s[i] == ')'){
                int temp = cnt.top();   cnt.pop();
                if(s[temp-1] == '-'){
                    for(int j = temp; j <= i; j++){
                        if(s[j] == '+') s[j] = '-';
                        else if(s[j] == '-')    s[j] = '+';
                    }    
                }
            }
        }
        for(int i = 0 ; i < s.size(); i++)  if(s[i]!= '(' && s[i]!=')') cout << s[i];
        cout << endl;
    }
    return 0;
}