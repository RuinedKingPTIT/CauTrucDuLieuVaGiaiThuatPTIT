#include<bits/stdc++.h>
#define int long long
using namespace std;
// tim so nhỏ nhất có tích các chữ số = nó
// 100
// 455
int res_ver2(int n){
    if(n>=0 && n <= 9)  return n;
    stack<int> chuSo;
    for(int i = 9 ; i >= 2 && n > 1; i--){
        while(n%i==0){
            chuSo.push(i);
            n/=i;
        }
    }
    if(n!=1)    return -1;
    int res = 0;
    while(!chuSo.empty()){
        res = res*10 + chuSo.top();   chuSo.pop();
    }
    return res;
}

int32_t main(){
    int t;  cin>> t;
    while(t--){
        int n;  cin >> n;
        cout << res_ver2(n) << endl;
    }
    return 0;
}