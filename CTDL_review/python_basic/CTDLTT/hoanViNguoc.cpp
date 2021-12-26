#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    // su dung ham pre_permutation

    int t;  cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        
        // init
        for(int i = 0; i < n; i++) a[i] = i+1;
        reverse(a, a+n);
        do{
            for(int i = 0; i < n; i++) cout << a[i];
            cout << " ";
        }while(prev_permutation(a, a+n));
        cout << endl;

        delete a;
    }

    return 0;
}