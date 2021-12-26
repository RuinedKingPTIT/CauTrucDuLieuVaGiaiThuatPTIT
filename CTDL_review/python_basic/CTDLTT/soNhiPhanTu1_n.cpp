#include<bits/stdc++.h>
#define int long long
using namespace std;

string convertBinary(int n){
    string res = "";
    stack<int> s;
    while(n!=0){
        s.push(n%2);
        n/=2;
    }
    while(!s.empty()){
        res.push_back(s.top() + '0');
        s.pop();
    }
    return res;

}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++) cout << convertBinary(i) << " ";
        cout << endl;
    }
    return 0;
}