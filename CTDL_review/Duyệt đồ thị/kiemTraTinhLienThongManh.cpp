#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
void DFS(int start, int &res){
    visit[start] = true;
    res++;
    for(int v : ke[start]){
        if(!visit[v])
        DFS(v, res);
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        int top, edge;  cin >> top >> edge;
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
      
        for(int i = 0; i < edge;i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
        }
        // duyet quat tat ca cac dinh, neu res != so dinh thi no
        bool flag= true;
        for(int i = 1; i <= top; i++){
            memset(visit, false, sizeof(visit));
            int res = 0;
            DFS(i, res);
            if(res!=top){
                cout << "NO\n";
                flag = false;
                break;
            }
        }
        if(flag)    cout << "YES\n";



    }
    return 0;
}