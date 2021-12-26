#include<bits/stdc++.h>
using namespace std;

int cal(queue<char> q, int k){
    int res = 0;
    int run = 0;
    while(!q.empty()){
        res += (q.front() - '0') * (int)pow(k, k - run + 1);
        run++;
        q.pop();
    }
    return res;
}
int32_t main(){
    string s;  cin >> s;
    int k, b, m;    cin >> k >> b >> m;
    int res = 0;
    queue<char> q;
    for(int i = 0 ;i < s.size()+1; i++){
        if(q.size() < k && i > k)   break;
        if(q.size() == k){
            res += cal(q, b)%m;
            q.pop();
        }
        q.push(s[i]);
        
    }
    cout << res;

    return 0;
}