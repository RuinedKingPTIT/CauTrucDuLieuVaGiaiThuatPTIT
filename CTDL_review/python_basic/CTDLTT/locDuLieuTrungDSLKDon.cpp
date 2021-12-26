#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int n; cin >> n;
    int *a = new int[n];
    bool isUsed[10005];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        isUsed[a[i]] = false;
    } 
    for(int i = 0 ; i < n; i++){
        if(isUsed[a[i]] == false){
            cout << a[i] << " ";
            isUsed[a[i]] = true;
        }
    }

    delete a;
    return 0;
}