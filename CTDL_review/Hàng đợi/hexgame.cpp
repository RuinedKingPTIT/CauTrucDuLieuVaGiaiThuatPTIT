#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 10;
const string des = "1238004765";
map<string, bool> vis;
string left(string s){
    return (string)""+ s[3] + s[0] + s[2] + s[7] + s[4] + s[1] + s[6] + s[8] + s[5] + s[9];
}
string right(string s){
    return (string)"" + s[0] + s[4] + s[1] + s[3] + s[8] + s[5] + s[2] + s[7] + s[9] + s[6];
}

int bfs(string start){
    vis[start]  = true;
    queue<pair<string, int>> q;
    q.push({start, 0});
    while(!q.empty()){
        auto p = q.front(); q.pop();
        string status = p.first;
        int step = p.second;
        if(status == des)   return step;
        string L = left(status);
        string R = right(status);
        if(!vis[L]){
            vis[L] = true;
            q.push({L, step + 1});
        }
        if(!vis[R]){
            vis[R] = true;
            q.push({R, step + 1});
        }
    }
}
void solve(){
    vis.clear();
    string start;
    for(int i = 0 ; i < N; i++){
        char c; cin >> c;
        start += c;
    }
    cout << bfs(start) << endl;
}

int32_t main(){
    int t;  cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
    return 0;
}