#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
vector<pair<int, int>> cayKhung;
void BFS(int u){
    visit[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();    q.pop();
        for(int i : ke[top]){
            if(!visit[i]){
                visit[i] = true;
                cayKhung.push_back({top, i});
                q.push(i);
            }
        }
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        cayKhung.clear();
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        memset(visit, false, sizeof(visit));
        int top, edge, start;   cin >> top >> edge >> start;
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        BFS(start);
        if(cayKhung.size()!=(top-1))    cout << -1 << endl;
        else{
            for(auto x : cayKhung)  cout << x.first << " " << x.second<< endl;
        }
    }
    return 0;
}