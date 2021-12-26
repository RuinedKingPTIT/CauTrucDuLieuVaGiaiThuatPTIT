#include<bits/stdc++.h>
using namespace std;
bool checkIncre(vector<int> s){
    for(int i = 1; i < s.size(); i++)   if(s[i] < s[i-1]) return false;
    return true;
}
int main(){
    int n;  cin >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    int run = 2;
    vector<vector<string>> res;
    while(run <= n){
        vector<bool> v(n);
        fill(v.end() - run, v.end(), true);
        do{
            vector<string> temp;
            vector<int> b;
            stack<int> cnt;
            for(int i = 0 ; i < n; i++){
                if(v[i]){
                    temp.push_back(to_string(a[i]));
                    b.push_back(a[i]);
                    if(cnt.size()>0){
                        if(a[i] < cnt.top()) break;
                    }
                    cnt.push(a[i]);
                }
                
            } 
            // cout << endl;
            // temp.push_back(string(a[i], 0));
            if(checkIncre(b))    res.push_back(temp);
        }while(next_permutation(v.begin(), v.end()));
        run++;
    }
    sort(res.begin(), res.end());
    for(auto x : res){
        for(int j = 0 ; j < x.size(); j++)  cout << x[j] << ' ';
        cout << endl;
    }
    return 0;
}