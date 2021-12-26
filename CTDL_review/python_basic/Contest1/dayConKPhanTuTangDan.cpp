#include<bits/stdc++.h>
using namespace std;
bool checkIncreArr(vector<int> a){
    for(int i = 1 ; i < a.size(); i++)  if(a[i] < a[i-1]) return false;
    return true;
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        sort(a.begin(), a.end());
        vector<bool> v(n);
        fill(v.end() - k, v.end(), true);
        vector<vector<int>> res;
        do{
            vector<int> temp;
            for(int i = 0 ; i < n; i++) if(v[i])    temp.push_back(a[i]);
            if(checkIncreArr(temp)) res.push_back(temp);
        }while(next_permutation(v.begin(), v.end()));
        sort(res.begin(), res.end());
        for(auto x : res){
            for(int j = 0 ; j < x.size(); j++)  cout << x[j] << ' ';
            cout << endl;
        }
    }
   
    return 0;
}