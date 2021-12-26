#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
void DFS(int u){
    visit[u] = true;
    for(int i : ke[u]){
        if(!visit[i])   DFS(i);
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        memset(visit, false, sizeof(visit));
        int top, edge;  cin >> top >> edge;
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        // dem so thanh phan lien thong
        int res = 0;
        for(int i = 1; i <= top; i++){
            if(!visit[i]){
                res++;
                DFS(i);
            }
        }
        // duyet qua tat ca cac dinh de xet xem neu loai bo no di co tang thanh phan lien thong len hay khong
        for(int i = 1; i <= top; i++){
            memset(visit, false, sizeof(visit));
            visit[i] =  true;
            int dem = 0;
            for(int j = 1; j <= top; j++){
                if(!visit[j]){
                    dem++;
                    DFS(j);
                }
            } 
            if(dem > res)   cout <<i << ' ';
        }
        cout << endl;
        
    }
    return 0;
}