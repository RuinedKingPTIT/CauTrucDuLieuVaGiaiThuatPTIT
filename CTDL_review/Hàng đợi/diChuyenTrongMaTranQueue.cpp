#include<bits/stdc++.h>
using namespace std;
map<pair<int, int>, bool> vis;
int matrix[1005][1005];
int row, col;
int bfs(pair<int, int> start){
    vis[start] = true;
    queue<pair<pair<int, int>, int>> q;
    q.push({start, 0});
    while(!q.empty()){
        auto top = q.front();   q.pop();
        int step =top.second;
        if(top.first.first == row && top.first.second == col)   return step;
        
        pair<int, int> vt1 = {top.first.first, top.first.second + matrix[top.first.first][top.first.second]};
        pair<int, int> vt2 = {top.first.first + matrix[top.first.first][top.first.second], top.first.second};
        if(!vis[vt1]){
            vis[vt1] = true;
            q.push({vt1, step+1});
        }
        if(!vis[vt2]){
            vis[vt2] = true;
            q.push({vt2, step+1});
        }
    }
    return -1;
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        cin >> row >> col;
        vis.clear();
        for(int i = 1 ; i <= row; i++){
            for(int j = 1 ; j <= col; j++)  cin >> matrix[i][j];
        }
        cout << bfs({1, 1}) << endl;
    }
    return 0;
}