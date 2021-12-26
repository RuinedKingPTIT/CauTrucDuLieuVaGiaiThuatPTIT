#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    cin.ignore();
    while(t--){
        string s;   getline(cin, s);
        stack<int> cnt;
        vector<int> res;
        int run = 1;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '('){
                cnt.push(run);
                res.push_back(run);
                run++;
            }else if(s[i] == ')'){
                res.push_back(cnt.top());
                cnt.pop();    
            }
        }
        for(auto x : res)   cout << x << ' ';
        cout << endl;
    }
    return 0;

}