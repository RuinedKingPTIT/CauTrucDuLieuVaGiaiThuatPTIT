#include<bits/stdc++.h>
using namespace std;
void in(int *a, int n){
    for(int i = 0 ; i < n; i++) cout << a[i];
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) a[i] = i+1;
        do{
            in(a, n);
            cout << " ";
        }while(next_permutation(a, a+n));
        cout << endl;
        delete a;
    }
    return 0;
}