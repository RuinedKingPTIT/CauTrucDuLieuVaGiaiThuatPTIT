#include<bits/stdc++.h>
#define int long long
#define max 10000
using namespace std;
vector<string> res;
void generate(){
    queue<string> q;
    q.push("9");
    for(int i = 10000; i > 0; i--){
        string s1 = q.front();    q.pop();
        res.push_back(s1);
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("9"));
    }
}
string findSmallest(int n){
    for(int i = 0; i < res.size(); i++){
        if(stoi(res[i])%n==0) return res[i];
    }
    return "";
}
int32_t main(){
    int t; cin >> t;
    generate();
    while(t--){
        int n; cin >> n;
        cout << findSmallest(n) << endl;
    }
    return 0;
}