#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
int trace[1005];
void BFS(int start, int end){
    if(visit[end])  return;
    visit[start] = true;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int top = q.front();    q.pop();
        for(int i : ke[top]){
            if(!visit[i]){
                visit[i] = true;
                q.push(i);
                trace[i] = top;
            }
        }
    }
}
void timkiem(int u, int v){
    vector<int> res;
    if(!visit[v]){
        cout << -1;
        return;
    }
    while(u!=v){
        if(u==0){
            cout << -1;
            return;
        }
        res.push_back(u);
        u = trace[u];
    }
    res.push_back(v);
    reverse(res.begin(), res.end());
    for(int i = 0 ; i< res.size()-1; i++)   cout << res[i] << " ";
    cout << res[res.size()-1];
}
int main(){
    int t;  cin >> t;
    while(t--){
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        memset(visit, false, sizeof(visit));
        int top, edge, start, end;   cin >> top >> edge >> start >> end;
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
        }
        BFS(start, end);
        timkiem(end, start);
        cout << endl;

    }
    return 0;
}