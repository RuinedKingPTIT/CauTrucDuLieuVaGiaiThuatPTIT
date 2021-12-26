#include<bits/stdc++.h>
#define int long long
using namespace std;

bool nguyenTo(int n){
    if(n<=1)    return false;
    if(n<=3)    return true;
    if(n%2==0 || n%3==0)    return false;
    for(int i = 5; i * i <=n; i+= 6)    
        if(n%i==0 || n%(i+2) == 0) return false;
    return true;
}
bool checkDigit(int n){
    while(n!=0){
        if(nguyenTo(n%10) == 0) return false;
        n/=10;
    }
    return true;
}
bool tongChuSo(int n){
    int tong = 0;
    while(n!=0){
        tong += n%10;
        n/=10;
    }
    if(!nguyenTo(tong)) return false;
    return true;
}

int32_t main(){
   int t; cin >> t;
    while(t--){
        int a, b;   cin >> a >> b;
        int count = 0;
        for(int i = min(a, b); i <= max(a, b); i++){
            if(nguyenTo(i) && checkDigit(i) && tongChuSo(i) )    count++;
        }
        cout << count << endl;
    }
    return 0;
}