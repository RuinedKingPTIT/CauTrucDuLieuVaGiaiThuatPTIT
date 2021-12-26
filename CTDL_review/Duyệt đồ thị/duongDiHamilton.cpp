#include<bits/stdc++.h>
using namespace std;
int top, edge;  
vector<int> ke[1005];
bool visit[1005];
bool check;
void Try(int u, int dem){
    if(dem==top){
        check = true;
        return;   
    }
    for(auto x : ke[u]){
        if(visit[x]){
            visit[x] = false;
            Try(x, dem+1);
            visit[x] = true;
        }
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        check = false;
        cin >> top >> edge;
        for(int i = 0 ;  i< 1005; i++)  ke[i].clear();
        memset(visit, true, sizeof(visit));
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        for(int i = 1; i <= top; i++){
            visit[i] = false;
            Try(i, 1);
            visit[i] = true;

        }
        
        cout << check << endl;

    }
    return 0;
}