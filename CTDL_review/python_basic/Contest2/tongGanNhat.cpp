#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n, m;   cin >> n >> m;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        vector<bool> v(n);
        fill(v.end() - 3, v.end(),true);
        vector<int> res;
        do{
            vector<int> temp;
            for(int i = 0 ; i < n; i++) if(v[i])    temp.push_back(a[i]);
            if(accumulate(temp.begin(), temp.end(), 0) <= m) res.push_back(accumulate(temp.begin(), temp.end(), 0));
        }while(next_permutation(v.begin(), v.end()));
        cout << *max_element(res.begin(), res.end()) << endl;
    }
    return 0;
}