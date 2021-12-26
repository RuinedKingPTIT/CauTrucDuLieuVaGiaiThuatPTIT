#include<bits/stdc++.h>
#define int long long
using namespace std;
#define max 100

int b[max], n, k;

void in(){
    
    for(int i = 1; i <= k; i++) cout << b[i];
    cout << " ";
}
void init(){
    cin >>  n >> k;
    b[0] = 0;
}
void Try(int i){
    int j;
    for( j = b[i-1] + 1 ; j <= n-k+i; j++){
        b[i] = j;
        if(i==k) in();
        else Try(i+1);
    }
}


int32_t main(){
    int t;   cin >> t;
    while(t--){
        init();
        Try(1);
        cout << endl;
    }
    return 0;
}
