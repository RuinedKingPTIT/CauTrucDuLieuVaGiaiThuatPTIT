#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
void DFS(int u){
    visit[u] = true;
    cout << u << " ";
    for(int i = 0 ; i < ke[u].size(); i++){
        if(visit[ke[u][i]] == false){
           DFS(ke[u][i]);
        }
    }
}
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t;  cin >> t;
    while(t--){
        int a, b, start;    cin >> a >> b >> start;
        for(int i = 0 ; i < 1001; i++)  ke[i].clear();
        memset(visit, false, sizeof(visit)); // xet tat ca la chua tham
        for(int i = 0 ; i < b; i++){
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        DFS(start);
        cout << endl;
    }
    return 0;
}