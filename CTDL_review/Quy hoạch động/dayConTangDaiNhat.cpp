#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int n; cin >> n;
    int f[1005];
    int *a = new int[n+1];
    f[0] = 0;
    a[0] = 0;
    for(int i = 1 ; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        f[i] = 1;
        for(int j = i-1; j >= 1; j--){
            if(a[i] > a[j]) f[i] = max(f[i], f[j] + 1);
        }
    }
    cout << *max_element(f, f+n+1) << endl;
    delete a;
    return 0;
}