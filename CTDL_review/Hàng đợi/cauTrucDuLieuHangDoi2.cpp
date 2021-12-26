#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
    int t; cin >> t;
    queue<int> q;
    while(t--){
        string s; cin >> s;
        if(s=="PUSH"){
            int x; cin >> x;
            q.push(x);
        }else if(s=="PRINTFRONT"){
            if(!q.empty())  cout << q.front() << endl;
            else cout << "NONE\n";
        }else{
            if(!q.empty()) q.pop();
        }
    }
    return 0;
}