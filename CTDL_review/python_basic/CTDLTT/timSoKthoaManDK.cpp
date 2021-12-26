#include<bits/stdc++.h>
#define int long long 
using namespace std;
bool checkDiff(int n){
    vector<int> a;
    while(n!=0){
        if((n%10)>5)    return false;
        a.push_back(n%10);
        n/=10;
    }
    set<int> check{a.begin(), a.end()};
    if(check.size() != a.size())        return false;
    
    return true;
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        int d = 0;
        for(int i = min(l, r) ; i <= max(l, r) ; i++){
            if(checkDiff(i))    d++;
        }
        cout << d << endl;
    }
    return 0;
}