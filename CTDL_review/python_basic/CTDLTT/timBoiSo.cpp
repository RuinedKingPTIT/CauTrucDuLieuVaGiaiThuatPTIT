#include<bits/stdc++.h>
#define int long long
using namespace std;
int findMultiples(int n){
    queue<int> q;
    q.push(9);
    for(int i = 1; i <= 100000; i++){
        int x = q.front(); q.pop();
        if(x%n==0) return x;
        q.push(10*x);
        q.push(10*x + 9);
    }
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << findMultiples(n) << endl;
    }
    return 0;
}