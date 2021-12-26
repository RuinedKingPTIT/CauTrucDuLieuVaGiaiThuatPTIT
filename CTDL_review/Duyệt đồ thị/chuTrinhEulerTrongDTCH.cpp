#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
int main(){
    int t;  cin >> t;
    while(t--){
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        memset(visit, false, sizeof(visit));
        int top, edge;  cin >> top >> edge;
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
        }
        
    }
    return 0;
}