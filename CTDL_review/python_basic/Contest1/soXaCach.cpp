#include<bits/stdc++.h>
using namespace std;
int n;
bool checkDistance(vector<int> a){
    for(int i = 1 ; i < a.size(); i++)  if(abs(a[i] - a[i-1]) == 1)return false;
    return true;
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        cin >> n;
        vector<int> a(n);
        for(int i = 1; i <= n; i++) a[i-1] = i;
        vector<vector<int>> res;
        do{
            vector<int> temp;
            for(int i = 0 ;i < n; i++) temp.push_back(a[i]);
            if(checkDistance(temp)) res.push_back(temp);
        }while(next_permutation(a.begin(), a.end()));
        sort(res.begin(), res.end());
        for(auto x : res){
            for(int j = 0 ; j < x.size(); j++)  cout << x[j];
            cout <<endl;
        }
    }
    return 0;
}