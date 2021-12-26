#include<bits/stdc++.h>
#define int long long 
using namespace std;
int row, col;
int matrix[505][505];
map<pair<int, int>, bool> vis;
vector<int> res;
void bfs(){
    vis[{1, 1}] = true;
    queue<pair<pair<int, int>, int>> q;
    q.push({{1, 1}, matrix[1][1]});
    while(!q.empty()){
        auto top = q.front();   q.pop();
        int x = top.first.first;
        int y = top.first.second;
        int val = top.second;
        if(x == row && y == col){
            res.push_back(val);
            cout << val << endl;
        }   
        if((x-1) >= 1){
            pair<int, int> vt1 = {x-1, y};
            
            if(!vis[vt1]){
                cout << x-1 << " " << y << endl;
                vis[vt1] = true;
                // if(vt1.first == row && vt1.second == col)   vis[vt1] = false;
                q.push({vt1, val+matrix[x-1][y]}); 
            }
            vis[{row, col}] = false; 
        }
        if((x+1) <= row){
           pair<int, int> vt2 = {x+1, y};
            
            if(!vis[vt2]){
                cout << x+1 << " " << y << endl;
                vis[vt2] = true;
                // if(vt2.first == row && vt2.second == col)   vis[vt2] = false;
                q.push({vt2, val+matrix[x+1][y]}); 
            }
            vis[{row, col}] = false;
        }
        if((y-1) >= 1){
            pair<int, int> vt3 = {x, y-1};
            
            if(!vis[vt3]){
                cout << x << " " << y-1 << endl;
                vis[vt3] = true;
                // if(vt3.first == row && vt3.second == col)   vis[vt3] = false;
                q.push({vt3, val+matrix[x][y-1]}); 
            }
            vis[{row, col}] = false;
        }
        if((y+1) <= col){
            pair<int, int> vt4 = {x, y+1};
            
            if(!vis[vt4]){
                cout << x<< " " << y+1 << endl;
                vis[vt4] = true;
                // if(vt4.first == row && vt4.second == col)   vis[vt4] = false;
                q.push({vt4, val+matrix[x][y+1]}); 
            }
            vis[{row, col}] = false;
        }
        
        
        
        
    }
}
void DFS(){
    vis[{1, 1}] = true;
    
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        vis.clear();
        res.clear();
        cin >> row >> col;
        // memset(matrix, 0, sizeof(matrix));
        for(int i = 1 ; i<= row; i++){
            for(int j = 1 ; j <= col; j++)   cin >> matrix[i][j];
        }
        bfs();
        cout << *min_element(res.begin(), res.end()) << endl;
    }
    return 0;
}