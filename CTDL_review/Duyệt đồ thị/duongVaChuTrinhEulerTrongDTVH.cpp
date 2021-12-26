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
bool ktraLienThong(int top){
    int tpLienThong = 0;
    for(int i = 1 ; i <= top; i++){
        if(!visit[i]){
            tpLienThong++;
            BFS(i);
        }
    }
    return (tpLienThong==1); 
}
bool ktraDinh(int top){ // moi dinh deu la bac chan
    for(int i = 1; i <= top; i++){
        if(ke[i].size()%2!=0)   return false;
    }
    return true;
}
bool checkCoDungHaiDinhBacLe(int top){ // ton tai duy nhat hai dinh co bac le
    int check = 0;
    for(int i = 1; i <= top; i++){
        if(ke[i].size()%2!=0)   check++;
    }
    return (check==2);
}
int main(){
    int t;  cin >> t;
    while(t--){
        for(int i = 0 ; i < 1005; i++)  ke[i].clear();
        int top, edge;  cin >> top >> edge;
        for(int i = 0 ; i < edge; i++){
            int u, v;   cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        memset(visit, false, sizeof(visit));
        if(ktraLienThong(top)){
            if(checkCoDungHaiDinhBacLe(top))    cout << 1 << endl; // duong di euler
            else if(ktraDinh(top))  cout << 2 << endl; // chu trinh euler
            else cout << 0 << endl;
        }else cout << 0 << endl;

    }
    return 0;
}