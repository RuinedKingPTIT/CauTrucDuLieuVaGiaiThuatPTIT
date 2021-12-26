#include<bits/stdc++.h>
using namespace std;
bool checkSequence(vector<int> a){
    for(int i = 1; i < a.size(); i++)   if(abs(a[i] - a[i-1]) != 1) return false;
    return true;
}
int cal(vector<int> a, int k){
    reverse(a.begin(), a.end());
    int res = 0;
    for(int i = 0; i < a.size(); i++)   res += (a[i] * (int)pow(k, i));
    return res;
}
int main(){
    string s;   cin >>s;
    int k, b, m;    cin >> k >>b >> m;
    int res = 0;
    vector<bool> v(s.size());
    fill(v.end() - k, v.end(), true);
    do{
        vector<int> temp;
        for(int i = 0 ; i < s.size(); i++)  if(v[i])    temp.push_back(i);
        if(checkSequence(temp)){
            vector<int> r;
            for(auto x : temp)  r.push_back(s[x] - '0');
            res += cal(r, b)%m;
        } 
        
    }while(next_permutation(v.begin(), v.end()));
    cout << res << endl;
    return 0;
}