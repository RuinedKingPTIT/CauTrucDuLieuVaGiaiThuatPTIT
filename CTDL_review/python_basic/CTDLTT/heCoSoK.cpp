#include<bits/stdc++.h>
#define int long long
using namespace std;
string addStringK(string s1, string s2, int k){
    string res = "";
    while(s1.size() > s2.size())    s2 = '0' + s2;
    while(s1.size() < s2.size())    s1 = '0' + s1;
    int c = 0;
    for(int i = s1.size()-1; i >= 0 ; i--){
        int sum = (s1[i] - '0') + (s2[i] - '0') + c;
        res.push_back((sum%k) + '0');
        c = sum/k;
    }
    if(c)   res.push_back(c + '0');
    reverse(res.begin(), res.end());
    return res;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int k; string x, y;
        cin >> k >> x >> y;
        cout << addStringK(x, y, k) << endl;
    }
    return 0;
}