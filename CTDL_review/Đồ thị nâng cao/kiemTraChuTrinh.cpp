#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
bool DFS(int u, int parent){
    visit[u] =true;
    for(int v : ke[u]){
        if(!visit[v]){
            if(DFS(v, u)) return true;
        }   
        else if(v!=parent)  return true;
    }
    return false;
}
int main(){
    int t;  cin >> t;
    while(t--){
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        int top, edge;  cin >> top >> edge;
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        memset(visit, false, sizeof(visit));
        // duyet qua cac dinh va parent cua no
        // vi co the do thi da cho khong lien thong nen ta can phai duyet tat ca cac dinh lien thong cua no
        bool flag = true;
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