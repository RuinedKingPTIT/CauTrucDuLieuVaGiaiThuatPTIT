#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;  cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        string inter;
        stack<string> cont;
        stringstream check(s);
        while(getline(check, inter, ' ')) cont.push(inter);
        while(!cont.empty()){
            cout << cont.top() << ' ';
            cont.pop();
        }
        cout << endl;
    }
    return 0;
}