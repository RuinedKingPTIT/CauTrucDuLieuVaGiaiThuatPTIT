#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9+7;
int exponential(int a, int b){
    if(a == 0)  return 0;
    if(b==0) return 1;
    if(b==1)    return a;
    long long x = exponential(a, b/2);
    if(b%2==0)  return x * x % mod;
    return a * (x*x%mod)%mod;
}

int32_t main(){
    int t;  cin >> t;
    for(int index = 1; index <= t; index++){
        int n;   cin >> n;
        string s = to_string(pow(3+sqrt(5), n));
        string res = "";
        int mark = 0;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '.'){
                mark = i;
                break;
            }
        }
        int run = 0;
        for(int i = mark -1; i >= 0; i--){
            if(run == 3)    break;
            res += s[i];
            run++;
        }
        // reverse(res.begin(), res.end());
        char finalString[3];
        finalString[0] = '0';
        finalString[1] = '0';
        finalString[2] = '0';
        for(int i = 0 ;i  < 3; i++) if(res[i])  finalString[i] = res[i];
        // reverse(finalString, finalString+3);
        cout << "Case #" << index<< ": ";
        for(int i = 2; i >= 0; i--) cout << finalString[i];
        cout << endl;
    }
    return 0;
}