#include<bits/stdc++.h>
using namespace std;
vector<int> graph[1005];
bool visit[1005];
int Trace[1005];
void BFS(int start, int end){
    if(visit[end])  return;
    visit[start] = true;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int t = q.front();    q.pop();
        for(int i = 0 ; i < graph[t].size(); i++){
            if(!visit[graph[t][i]]){
                visit[graph[t][i]] = true;
                Trace[graph[t][i]] = t;
                q.push(graph[t][i]);
            }
        }
    }
}

void timKiem(int u, int v){
    if(!visit[v]){
        cout << -1;
        return;
    }   
    vector<int> a;
    while(u!=v){
        a.push_back(u);
        u = Trace[u];
    }
    a.push_back(v);
    reverse(a.begin(), a.end());
    for(auto x : a) cout << x << " ";

}
int main(){
    int t;  cin >> t;
    while(t--){
        int a, b, start, end;   cin >> a >> b >> start >> end;
        for(int i = 0 ; i < 1005; i++)  graph[i].clear();
        memset(visit, false, sizeof(visit));
        for(int i = 0 ; i < b; i++){
            int u, v;   cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        BFS(start, end);
        timKiem(end, start);
        cout << endl;
    }
    return 0;
}