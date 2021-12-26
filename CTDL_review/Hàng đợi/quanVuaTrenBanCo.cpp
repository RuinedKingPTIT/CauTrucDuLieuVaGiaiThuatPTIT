#include<bits/stdc++.h>
#define int long long
using namespace std;
int s1, s2, f1, f2;
map<pair<int, int>, bool> vis;

int bfs(){
    vis[{s1, s2}] = true;
    queue<pair<pair<int,int>, int>> q;
    q.push({{s1, s2}, 0});
    while(!q.empty()){
        auto top = q.front(); q.pop();
        int x = top.first.first;
        int y = top.first.second;
        int step = top.second;
        if(x == f1 && y == f2)  return step;
        if((x-1) >= 1 && (y-1) >= 1){
            pair<int, int> vt1 = {x-1, y-1};
            if(!vis[vt1]){
                vis[vt1] = true;
                q.push({vt1, step + 1});
            }
        }
        if((x-1) >= 1){
            pair<int, int> vt2 = {x-1, y};
            if(!vis[vt2]){
                vis[vt2] = true;
                q.push({vt2, step + 1});
            }
        }
        if((x-1) >= 1 && (y+1) <= 8){
           pair<int, int> vt3 = {x-1, y+1};
            if(!vis[vt3]){
                vis[vt3] = true;
                q.push({vt3, step + 1});
            }
        }
        if((y-1) >= 1){
            pair<int, int> vt4 = {x, y-1};
            if(!vis[vt4]){
                vis[vt4] = true;
                q.push({vt4, step + 1});
            }
        }
        if((y+1) <= 8){
            pair<int, int> vt5 = {x, y+1};
            if(!vis[vt5]){
                vis[vt5] = true;
                q.push({vt5, step + 1});
            }
        }
        if((x+1) <= 8 && (y-1) >= 1){
           pair<int, int> vt6 = {x+1, y-1};
            if(!vis[vt6]){
                vis[vt6] = true;
                q.push({vt6, step + 1});
            }
        }
        if((x+1) <= 8){
            pair<int, int> vt7 = {x+1, y};
            if(!vis[vt7]){
                vis[vt7] = true;
                q.push({vt7, step + 1});
            }
        }
        if((x+1) <= 8 && (y+1) <= 8){
            pair<int, int> vt8 = {x+1, y+1};
            if(!vis[vt8]){
                vis[vt8] = true;
                q.push({vt8, step + 1});
            }
        }

    }
    return -1;
}
int32_t main(){
    cin >> s1 >> s2 >> f1 >> f2;
    cout << bfs();
    return 0;
}