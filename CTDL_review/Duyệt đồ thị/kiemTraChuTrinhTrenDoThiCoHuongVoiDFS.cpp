#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
int mark[1005];
bool DFS(int start, int parent){
    mark[start] = 1; // mau xam
    for(int v : ke[start]){
        if(mark[v] == 0){
            if(DFS(v, start))   return true;
        }else if(mark[v] == 1) return true;
    }
    mark[start] = 2;
    return false;
}
int main(){
    int t;  cin >> t;
    while(t--){
        int top, edge;  cin >> top >> edge;
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        memset(visit, false, sizeof(visit));
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
        }
        memset(mark, 0, sizeof(mark));
        bool flag= true;
        for(int i = 1; i <= top; i++){
            if(!visit[i]){
                if(DFS(i, 0)){
                    cout << "YES\n";
                    flag = false;
                    break;
                }
            }
        }
        if(flag)    cout << "NO\n"; 

    }
    return 0;
}