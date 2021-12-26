#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        cin.ignore();
       int stt = 0;
       string s;
       cin >> stt >> s;
        if(next_permutation(s.begin(), s.end())) cout << stt << ' ' << s << endl;
        else cout << stt << ' ' << "BIGGEST" << endl;
    }
    return 0;
}