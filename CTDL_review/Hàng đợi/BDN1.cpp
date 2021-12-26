#include<bits/stdc++.h>
#define int long long

using namespace std;

int countBDN(int n){
    int res = 0;
    queue<int> q;
    q.push(1);
    while(q.front() <= n){
        int x = q.front();
        q.pop();
        if(x <= n) res++;
        q.push(x*10);
        q.push(x*10 + 1);
        
    }
    return res;
}
int32_t main(){
    int t; cin >> t;
  
    while(t--){
        int n; cin >> n;
        cout << countBDN(n) << endl;
    }
    return 0;
}