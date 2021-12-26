#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<string> a(n);
        for(int i = 0 ;i < n; i++)    cin >> a[i];
        queue<int> q;
        for(int i = a.size()-1; i >= 0; i--){
            if(a[i] !="+" && a[i]!= "-" && a[i]!= "*" && a[i]!= "/"){
                q.push(stoi(a[i]));
            }else{
                if(a[i] == "+"){
                    int t1 = q.front(); q.pop();
                    int t2 = q.front(); q.pop();
                    q.push(t2 + t1);
                }
                if(a[i] == "-"){
                    int t1 = q.front(); q.pop();
                    int t2 = q.front(); q.pop();
                    q.push(t2 - t1);
                }
                if(a[i] == "*"){
                    int t1 = q.front(); q.pop();
                    int t2 = q.front(); q.pop();
                    q.push(t2 * t1);
                }
                if(a[i] == "/"){
                    int t1 = q.front(); q.pop();
                    int t2 = q.front(); q.pop();
                    q.push(t2 / t1);
                }
            }
        }
        cout << q.front() << endl;
        
        
    }
    return 0;
}