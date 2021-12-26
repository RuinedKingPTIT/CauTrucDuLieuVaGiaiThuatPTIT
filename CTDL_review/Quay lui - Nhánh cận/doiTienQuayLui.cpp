#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int n, S;   cin >>n >> S;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    int run = 1;
    vector<int> res;
    int ans = 0;
    bool flag = true;
    while(run <= n){
        vector<bool> v(n);
        fill(v.end() - run, v.end(), true);
        do{
            vector<int> temp;
            for(int i = 0 ; i < n; i++){
                if(v[i])        
                temp.push_back(a[i]);
            }
            // cout << endl;
            if(accumulate(temp.begin(), temp.end(), 0) == S){
                ans++;
                flag = false;
            }        
            // res.push_back(temp.size());
        }while(next_permutation(v.begin(), v.end()));
        if(!flag)   break;
        run++;
    }
    // cout << count(res.begin(), res.end(), *min_element(res.begin(), res.end()));
    if(flag)    cout << -1;
    else
    cout << ans*run;
    return 0;
}