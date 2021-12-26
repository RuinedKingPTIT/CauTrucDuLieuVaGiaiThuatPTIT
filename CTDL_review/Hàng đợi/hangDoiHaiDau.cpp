#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    deque<int> dq;
    while(t--){
        string s; cin >> s;
        if(s=="PUSHBACK"){
            // them phan tu vao cuoi
            int x; cin >> x;
            dq.push_back(x);
        }else if(s=="PUSHFRONT"){
          // them phan tu vao dau
          int x; cin>> x;
          dq.push_front(x);
        }else if(s=="PRINTFRONT"){
            if(!dq.empty()) cout << dq.front() << endl;
            else cout << "NONE\n";
        }else if(s=="POPFRONT"){
            if(!dq.empty()) dq.pop_front();
        }else if(s=="PRINTBACK"){
            // in phan tu cuoi
            if(!dq.empty()) cout << dq.back() << endl;
            else cout << "NONE\n";
        }else if(s=="POPBACK") if(!dq.empty())    dq.pop_back();
    }
    return 0;
}