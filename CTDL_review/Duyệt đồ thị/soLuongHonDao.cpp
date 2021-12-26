#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visit[1005];
void BFS(int u){
    visit[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front(); q.pop();
        for(int i : ke[top]){
            if(!visit[i]){
                visit[i] = true;
                q.push(i);
            }
        }
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        memset(visit, false, sizeof(visit));
        int row, col;   cin >> row >> col;
        for(int i = 1 ; i <= row; i++){
            for(int j = 1 ; j <= col; j++){
                int tg = 0; cin >> tg;
                if(tg==1){
                    ke[i].push_back(j);
                    // ke[j].push_back(i);
                }
            }
        }
        // quy ve bai dem so thanh phan lien thong trong do thi
        // for(auto x : ke)    sort(x.begin(), x.end());
        // for(int i = 1;  i<= row; i++){
        //     for(int j = 0 ; j < ke[i].size(); j++)  cout << ke[i][j] << " ";
        //     cout << endl;
        // }
        int dem = 0;
        
        for(int i = 1; i <= row; i++){
            if(!visit[i]){
                dem++;
                BFS(i);
            }
        }
        cout << dem << endl;
        
    }
    return 0;
}