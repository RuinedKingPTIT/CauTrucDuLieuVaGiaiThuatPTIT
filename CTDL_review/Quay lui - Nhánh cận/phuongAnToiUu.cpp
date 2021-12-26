#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, x[100], a[100], c[100], XOPT[100], b;
double w = 0, cost = 0, FOPT = -32000;
void init(){
    cin >> n >> b;
    for(int i = 0 ; i< n; i++)  cin >> c[i];
    for(int i = 0 ; i< n; i++)  cin >> a[i];
}
void update(){
    int tweight = 0;
    int tcost = 0;
    for(int i = 0 ; i < n; i++){
        tweight += a[i] * x[i];
        tcost += c[i] * x[i];
    }
    if(tweight <= b && tcost > FOPT){
        FOPT = tcost;
        for(int i = 0 ;  i< n; i++) XOPT[i] = x[i];
    }
}
void res(){
    cout << FOPT << endl;
    for(int i = 0 ; i < n; i++) cout << XOPT[i] << ' ';
}
void Brach_And_Bound(int i){
    for(int j = 0 ; j <= 1 ; j++){
        x[i] = j;
        if(i == n-1) update();
        else Brach_And_Bound(i+1);
    }
}
int32_t main(){
    init();
    Brach_And_Bound(0);
    res();
    return 0;
}