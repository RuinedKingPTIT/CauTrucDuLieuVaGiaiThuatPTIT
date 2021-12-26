#include<bits/stdc++.h>
// #define int long long
using namespace std;
int level;
vector<string> matrix;
map<pair<int, int>, bool> vis;
int bfs(int a, int b, int c, int d){
    vis[{a, b}] = true;
    queue<pair<pair<int, int>, int>> q;
    q.push({{a, b}, 0});
    while(!q.empty()){
        auto top = q.front();   q.pop();
        pair<int, int> temp = top.first;
        int step = top.second;
        int x = temp.first;
        int y = temp.second;
        // cout << "Day la x:" << x << ' ' << y << endl;
        if(x == c && y == d) return step;
        // di chuyen theo truc hoanh
        for(int i = y-1; i >= 0; i--){
            if(matrix[x][i] == 'X') break;
            if(!vis[{x, i}]){
                vis[{x, i}] = true;
                // cout << x << " " << i << endl;
                q.push({{x, i}, step+1});
            }
        }
        for(int i = y+1; i < level; i++){
            if(matrix[x][i] == 'X') break;
            if(!vis[{x, i}]){
                vis[{x, i}] = true;
                // cout << x << " " << i << endl;
                q.push({{x, i}, step+1});
            }
        }
        for(int i = x+1; i < level; i++){
            if(matrix[i][y] == 'X') break;
            if(!vis[{i, y}]){
                vis[{i, y}] = true;
                // cout << i << " " << y << endl;
                q.push({{i, y}, step+1});
            }
        }
      
    
        for(int i = x-1; i >= 0; i--){
            if(matrix[i][y] == 'X') break;
            if(!vis[{i,y}]){
                vis[{i, y}] = true;
                // cout << i << " " << y << endl;
                q.push({{i, y}, step+1});
            }
        }
        // cout << "next\n";
    }
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        matrix.clear();
        vis.clear();
        cin >> level;
        for(int i = 0 ;i < level; i++){
            string temp = "";   cin >> temp;
            matrix.push_back(temp);
        }
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << bfs(a, b, c, d) << endl;
    }
    return 0;
}