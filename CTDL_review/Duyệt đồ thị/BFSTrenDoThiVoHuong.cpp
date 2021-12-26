#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
void BFS(int start){
    queue<int> q;
    visit[start] = true;
    q.push(start);
    while(!q.empty()){
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        for(int i = 0 ; i < ke[temp].size(); i++){
            if(!visit[ke[temp][i]]){
                q.push(ke[temp][i]);
                visit[ke[temp][i]] = true;
            }
        }
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        int a, b, start;    cin >> a >> b >> start;
        for(int i = 0 ; i < 1001; i++)  ke[i].clear();
        memset(visit, false, sizeof(visit));
        for(int i = 0 ; i < b; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        BFS(start);
        cout << endl;

    }
    return 0;
}