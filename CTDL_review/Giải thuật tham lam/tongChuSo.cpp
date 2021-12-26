#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(string s, int n){
    int total = 0;
    for(int i = 0 ; i < s.size(); i++)  total += (s[i] - '0') * (s[i] - '0');
    if(total!=n)    return false;
    return true;
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int a, b;   cin >> a >> b;
        string s = to_string((a%9+1)*lround(pow(10, (a/9))) - 1);

        if(check(s, b)) cout << s << endl;
        else cout << "-1" << endl;
    }
    return 0;
}