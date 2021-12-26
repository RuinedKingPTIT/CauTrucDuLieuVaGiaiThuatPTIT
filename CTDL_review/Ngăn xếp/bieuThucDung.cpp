#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s;   cin >> s;
		stack<char> cnt;
		int res = 0;
		int del = 0;
		for(int i = 0 ; i < s.size(); i++){
			if(cnt.size()==0)	cnt.push(s[i]);
			else if(cnt.top() == '[' && s[i] == ']'){
				del += 2;
				cnt.pop();
			}else if(cnt.top() == ']' && s[i] == '['){
				res += cnt.size() + del;
				cnt.pop();
			}else if(s[i] == '[')	cnt.push(s[i]);
			else if(cnt.top() == ']' && s[i] == ']')	cnt.push(s[i]);
			if(cnt.size() == 0)	del = 0;
		}
		cout << res << endl;
    }
    return 0;
}