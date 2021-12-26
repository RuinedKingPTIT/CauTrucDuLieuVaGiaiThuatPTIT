#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    stack<int> a;
    while(t--){
        string s;   cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            a.push(x);
        }
        if(s == "POP"){
            if(!a.empty()){
                a.pop();
            }
        }
        if(s=="PRINT"){
            if(!a.empty()){
                cout << a.top() << endl;
            }else cout << "NONE" << endl;
        }
    }
    return 0;
}