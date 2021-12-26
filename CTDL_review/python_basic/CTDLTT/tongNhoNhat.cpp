#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a= new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];

        sort(a, a+n);

        int t1 = 0;
        int t2 = 0;
        for(int i = 0 ; i < n; i++){
            if(i%2==0) t1 = t1*10 + a[i];
            else t2 = t2*10 + a[i];
        }
        cout << t1 + t2 << endl;
        delete a;
    }
    return 0;
}