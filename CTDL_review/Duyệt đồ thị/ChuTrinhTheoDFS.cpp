#include<bits/stdc++.h>
using namespace std;
int top, edge;
vector<int> ke[1005];
bool vis[1005];
int u, v;
int main(){
    int t;  cin >> t;
    while(t--){
        memset(vis, false, sizeof(vis));
        for(int i = 0 ; i , 1005;i++)   ke[i].clear();
        cin >> top >> edge;
        for(int i = 0 ; i < edge; i++){
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        
    }
    return 0;
}