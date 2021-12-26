#include<bits/stdc++.h>
#define int long long
using namespace std;

int n, x[100], chuaxet[100], dem=0;

void init(){
    for(int i = 1; i <= n; i++) chuaxet[i] = true;
}

void res(){
    for(int i = 1; i <= n; i++) cout << x[i];
    cout << " ";
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(chuaxet[j]){
            x[i] = j;
            chuaxet[j] = false;
            if(i==n) res();
            else Try(i+1);
            chuaxet[j] = true;
        }
    }
}

int32_t main(){
    int t; cin >> t;
    while(t--){
       cin >> n;
       init();
       Try(1);
       cout << endl;
        
    }
    return 0;
}
