#include<bits/stdc++.h>
#define int long long
using namespace std;
string findSmallest(int s, int d){

    if(s > 9*d) return "-1";
    int *res = new int[d];
    s -=1;
    for(int i = d-1; i >= 0; i--){
        if(s > 9){
            res[i] = 9;
            s-=9;
        }else{
            res[i] = s;
            s = 0;
        }
    }
    res[0] += 1;
    string in = "";
    for(int i = 0 ; i < d; i++){
        in+=res[i]+'0';
    }
    return in;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int s, d; cin >> s >> d;
        cout << findSmallest(s, d) << endl;
    }
    return 0;
}