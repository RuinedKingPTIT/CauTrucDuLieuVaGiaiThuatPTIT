#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
    int t; cin >> t;
    while(t--){
        int k;  cin >> k;
        string s; cin >> s;
        int a[105] = {0};
        priority_queue<int> q;
        for(int i = 0 ; i < s.size(); i++)  a[s[i]]++;
        for(int i = 'A'; i <= 'Z'; i++) if(a[i]!=0) q.push(a[i]);
        while(k--){
            int t = q.top(); q.pop();
            t--;
            q.push(t);
        }
        int res = 0;
        while(!q.empty()){
            res += q.top() *q.top();
            q.pop();
        }
        cout << res << endl;
    }
    return 0;
}