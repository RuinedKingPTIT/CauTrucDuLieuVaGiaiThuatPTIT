#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        priority_queue<int, vector<int>, greater<int>> pq(a, a+n);
        int res = 0;
        while(pq.size() > 1){ // lap lai neu trong pq con nhieu hon 1 soi day
            int t1 = pq.top(); pq.pop();
            int t2 = pq.top(); pq.pop();
            res += t1 + t2;
            pq.push(t1+t2);
        }
        cout << res << endl;
        delete a;
    }
    return 0;
}