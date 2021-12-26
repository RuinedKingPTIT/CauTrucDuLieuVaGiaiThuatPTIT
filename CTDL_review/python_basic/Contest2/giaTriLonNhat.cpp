#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;  cin >> n;
    vector<int> a(n);
    int res = 0;
    for(int& x : a){
        cin >> x;
        if(x > 0) res += x;
    }
    cout << res * 2;
   
    return 0;
}