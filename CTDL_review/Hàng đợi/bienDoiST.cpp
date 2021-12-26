#include<bits/stdc++.h>
#define int long long
using namespace std;
int S, T;   

int res(){
    int ans = 0;
    while(S < T){
        if(T%2!=0){
            T++;
            ans++;
        }else{
            T/=2;
            ans++;
        }
    }
    return ans+S-T;
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        cin >> S >> T;
        cout << res() << endl;
    }
    return 0;
}