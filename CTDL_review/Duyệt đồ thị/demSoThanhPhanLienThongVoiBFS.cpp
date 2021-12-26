#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
void BFS(int u){
    visit[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();    q.pop();
        for(int i : ke[top]){
            if(!visit[i]){
                q.push(i);
                visit[i] = true;
            }
        }
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        int top, edge;  cin >> top >> edge;
        for(int i = 0 ;i  < 1005; i++)      ke[i].clear();
        memset(visit, false, sizeof(visit));
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        int res = 0;
        for(int i = 1; i <= top; i++){
            if(!visit[i]){
                res++;
                BFS(i);
            }
        }
        cout << res << endl;

    }
    return 0;
}