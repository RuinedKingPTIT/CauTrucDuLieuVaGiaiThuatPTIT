#include<bits/stdc++.h>
using namespace std;

int bfs(int n){
    queue<pair<int, int>> q;
    q.push({n, 0});
    set<int> s;
    while(!q.empty()){
        auto top = q.front();   q.pop();
        int val = top.first;
        int step = top.second;
        if(val == 1)  return step;
        if(val-1 == 1)  return step+1;
        if(s.find(val-1)==s.end() && val-1>0){
            s.insert(val-1);
            q.push({val-1, step+1});
        }
        for(int i = 2; i *i <= val; i++){
            if(val%i==0){
                if(s.find(val/i)==s.end() && (val/i) > 1){
                    q.push({val/i, step+1});
                    s.insert(val/i);
                }
            }
        }
    }
}

int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        cout << bfs(n) << endl;
    }
    return 0;
}