#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int n, s;   cin >> n >> s;
    vector<int> a(n);
    for(int& x : a) cin >>x;
    int run = 1;
    bool flag = true;
    while(run <= n){
        vector<bool> v(n);
        fill(v.end() - run, v.end(), true);
        do{
            vector<int> temp;
            for(int i = 0 ; i < n; i++) if(v[i])    temp.push_back(a[i]);
            if(accumulate(temp.begin(), temp.end(), 0) == s){
                cout << temp.size();
                flag = false;
                break;
            }
        }while(next_permutation(v.begin(), v.end()));
        if(!flag)   break;
        run++;
    }
    if(flag)    cout << -1;
    
    
    return 0;   
}