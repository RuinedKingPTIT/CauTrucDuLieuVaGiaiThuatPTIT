#include<bits/stdc++.h>
using namespace std;
const int N = 6;
map<string, bool> vis;
string left(string s){
    string res;
    res += s[3];
    res += s[0];
    res += s[2];
    res += s[4];
    res += s[1];
    res += s[5];
    return res;
}
string right(string s){
    string res;
    res += s[0];
    res += s[4];
    res += s[1];
    res += s[3];
    res += s[5];
    res += s[2];
    return res;
}
int bfs(string start, string des){
    vis[start]  =true;
    queue<pair<string, int>> q;
    q.push({start, 0});
    while(!q.empty()){
        auto p = q.front(); q.pop();
        string status = p.first;
        int step = p.second;
        if(status == des)   return step;
        string L = left(status);
        string R = right(status);
        // cout << L << " " << R << end l;
        if(!vis[L]){
            vis[L] = true;
            q.push({L, step + 1});
        }
        if(!vis[R]){
            vis[R] = true;
            q.push({R, step + 1});
        }
    }
    return -1;
}
void solve(){
    vis.clear();
    string start, des;
    for(int i = 0 ; i < N; i++){
        char c; cin >> c;
        start += c;
    }
    for(int i = 0 ; i < N; i++){
        char c; cin >> c;
        des += c;
    }
    cout << bfs(start, des) << endl;
}

int main(){
    int t;  cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
    return 0;
}