#include<bits/stdc++.h>
#define int long long
using namespace std;
bool checkAvai(vector<int> a){
    for(int i = 1; i < a.size(); i++)   if(a[i] != a[i-1] + 1)return false;
    return true;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int run = 0;
        int res = 0;
        while(run <= s.size()){
            vector<bool> v(s.size());
            fill(v.end()-run, v.end(), true);
            do{
                int temp = 0;
                vector<int> check;
                for(int i = 0 ; i< s.size(); i++){
                    if(v[i]){
                        check.push_back(i);
                        temp = temp * 10 + (s[i] - '0');
                    }
                }
                if(checkAvai(check))    res+=temp;
            }while(next_permutation(v.begin(), v.end()));
            run++;
        }
        cout << res << endl;
    }
    return 0;
}