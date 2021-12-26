#include<bits/stdc++.h>
using namespace std;
vector<int> ke[50005];
bool visit[1005];
void BFS(int u){
    visit[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();    q.pop();
        for(int i : ke[top]){
            if(!visit[i]){
                visit[i] = true;
                q.push(i);
            }
        }
    }
}
int demTPLienThong(int top){
    int dem = 0;
    for(int i = 1; i <= top ;i++){
        if(!visit[i]){
            BFS(i);
            dem++;
        }
    }
    return dem;
}
int main(){
    
    int top, edge;  cin >> top >> edge;
    for(int i = 0 ; i < edge; i++){
        int u, v;   cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    for(int i = 1; i <= top; i++){
        vector<int> temp(ke[i].size());
        for(int i = 0 ; i < ke[i].size(); i++){
            temp[i] = ke[i].at(i);
        }
        ke[i].clear();
        cout <<demTPLienThong(top) << endl;
        for(int i = 0 ; i < temp.size(); i++)   ke[i].push_back(temp[i]);
        
    }
    

}