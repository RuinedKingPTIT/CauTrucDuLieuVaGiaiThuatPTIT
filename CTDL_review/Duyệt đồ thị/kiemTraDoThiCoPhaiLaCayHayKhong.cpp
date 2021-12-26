#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
bool DFS(int start, int parent){
    visit[start] = true;
    for(int v : ke[start]){
        if(!visit[v]){
            if(DFS(v, start))   return true;
        }else if(v!=parent) return true;
    }
    return false;
}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        memset(visit, false, sizeof(visit));
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        for(int i = 0 ; i< n-1; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v); 
            ke[v].push_back(u); 
        }
        bool flag = true;
        for(int i = 1; i <= n; i++){
            if(!visit[i]){
                if(DFS(i, 0)){
                    flag = false;
                    break;
                }
            }
        }
        if(flag)// khong ton tai chu trinh
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}