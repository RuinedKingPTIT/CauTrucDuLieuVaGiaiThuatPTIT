#include<bits/stdc++.h>
#define int long long
#define max 100000
using namespace std;;


void gen(int n){
    queue<string> q;
    vector<string> cnt;
    q.push("6");
    q.push("8");
    for(int i = 1;i <= max; i++){
        string s1 = q.front(); q.pop();
        string s2 = q.front(); q.pop();

        if(s1.size() <= n && s2.size() <= n){
            cnt.push_back(s1);
            cnt.push_back(s2);
        }else break;
        string s3 = s1;
        string s4 = s2;
        q.push(s1.append("6"));
        q.push(s3.append("8"));
        q.push(s2.append("6"));
        q.push(s4.append("8"));
    }
    cout << cnt.size() << endl;
    for(auto x : cnt) cout << x << ' ';
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        gen(n);
        cout << endl;
    }
    return 0;
}