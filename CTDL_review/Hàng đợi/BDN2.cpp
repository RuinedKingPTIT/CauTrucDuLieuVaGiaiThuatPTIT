#include<bits/stdc++.h>
#define int long long
#define max 10000
using namespace std;
vector<string> cnt;
int mod(string s, int n){
    int r = 0;
    for(int i= 0 ; i < s.size(); i++){
        r = r*10 + (s[i] - '0');
        r %= n;
    }
    return r;
}
string generate(int n){
    queue<string> q;
    set<int> v;
    q.push("1");
    for(int i = 1; i <= max; i++){
        string s1 = q.front();  q.pop();
        int m = mod(s1, n);
        if(m == 0) return s1;
        else if(v.find(m) == v.end()){
            v.insert(m);
            q.push(s1 + "0");
            q.push(s1 + "1");
        }
    }
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << generate(n) << endl;
    }
    return 0;
}