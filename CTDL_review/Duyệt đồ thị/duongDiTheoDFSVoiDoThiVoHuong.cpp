#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
int Trace[1005];
void PathDFS(int start, int end){
    if(visit[end])  return;
    visit[start] = true;
    for(int i = 0 ; i< ke[start].size(); i++){
        if(!visit[ke[start][i]]){
            Trace[ke[start][i]] = start;
            PathDFS(ke[start][i], end);
        }
    }
}
void timKiem(int u, int v){
    if(!visit[v]){
        cout << -1;
        return;
    }
    vector<int> a;
    while(u!=v){
        // if(u==0){
        //     cout <<-1;
        //     return;
        // }
        a.push_back(u);
        u = Trace[u];
    }
    a.push_back(v);
    reverse(a.begin(), a.end());
    for(auto x : a) cout << x <<' ';
}
int main(){
    int t;  cin >> t;
    while(t--){
        int a, b, start, end;   cin >> a >> b >> start >> end;
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        memset(visit, false, sizeof(visit));
        for(int i = 0 ; i < b; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        PathDFS(start, end);
        timKiem(end, start);
        cout << endl;
    }
    return 0;
}