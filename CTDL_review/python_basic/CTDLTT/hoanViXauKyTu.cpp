#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
       do{
           cout << s << " ";
       }while(next_permutation(s.begin(), s.end()));
       cout << endl;
        
    }
    return 0;
}