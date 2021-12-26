#include<bits/stdc++.h>
#define int long long
using namespace std;
int top, edge;
vector<int> ke[1005];
bool vis[1005];
int trace[1005];

void bfs(int start, int end){
    if(vis[end]) return;
    vis[start] = true;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int top = q.front();    q.pop();
        for(auto x : ke[top]){
            if(!vis[x]){
                vis[x] = true;
                trace[x] = top;
                q.push(x);
            }
        }
    }
}
void timkiem(int u, int v){
    vector<int> res;
    if(!vis[v]){
        cout << "No path";
        return;
    }
    while(u!=v){
        if(u==0){
            cout << "No path";
            return;
        }
        res.push_back(u);
        u = trace[u];
    }
    res.push_back(v);
    reverse(res.begin(), res.end());
    for(auto x : res)   cout << x << " ";

}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        
        int start;
        cin >> top >> edge >> start;
        bool use[top];
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        memset(trace, 0, sizeof(trace));
        memset(vis, false, sizeof(vis));
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        use[start] = true;
        for(int i = 1; i <= top; i++)   if(i!=start) use[i] = false;
        for(int i = 1; i <= top; i++){
            if(use[i] == false){
               
                use[i] = true;
                bfs(start, i);
                timkiem(i, start);
                    cout << endl;
                memset(vis, false, sizeof(vis));
            }
        }

        
    }
    return 0;
}