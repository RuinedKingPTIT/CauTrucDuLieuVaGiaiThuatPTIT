#include<bits/stdc++.h>
#define int long long
#define max 1e9+7
using namespace std;
struct dta{
    int value;
    int soLanXuatHien;
    int index;
};
bool cmp(dta x ,dta y){
    if(x.soLanXuatHien > y.soLanXuatHien) return true;
    if(x.soLanXuatHien == y.soLanXuatHien && x.index < y.index) return true;
    return false;
}
bool cmpSLXH(dta x, dta y){
    if(x.value == y.value)return true;
    return false;
}
int32_t main(){ 
    int t;  cin >> t;
    while (t--){
        int n;    cin >>n;
        int *a = new int[n];
       
        cout << endl;
        
    }
    return 0;
}
