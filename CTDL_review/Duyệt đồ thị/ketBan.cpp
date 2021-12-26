#include<bits/stdc++.h>
using namespace std;
vector<int> ke[100005];
bool visit[100005];
void BFS(int u, int *total){
    visit[u] = true;
    queue<int> q;
    q.push(u);
    *total+=1;
    while(!q.empty()){
        int top = q.front();    q.pop();
        for(int i : ke[top]){
            if(!visit[i]){
                q.push(i);
                *total+=1;
                visit[i] = true;
            }
        }
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        int top, edge;  cin >> top >> edge;
        for(int i = 0 ;i  < 1005; i++)      ke[i].clear();
        memset(visit, false, sizeof(visit));
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        int maxFri = INT_MIN;
        for(int i = 1; i <= top; i++){
            if(!visit[i]){
                int temp = 0;
                BFS(i, &temp);
                if(temp > maxFri)   maxFri = temp;
                
            }
        }
        cout << maxFri << endl;

    }
    return 0;
}