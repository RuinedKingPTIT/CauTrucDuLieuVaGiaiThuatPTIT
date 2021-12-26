#include<bits/stdc++.h>
#define int long long
using namespace std;
void in(int *a, int n){
    for(int i = 0 ; i < n; i++) cout << a[i] << ' ';
}
int32_t main(){
    int n; cin >> n;
    int *a = new int[n];
    for(int i = 0 ; i < n; i++) cin >> a[i];
    for(int i = 0 ; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[j] < a[i]) swap(a[i], a[j]);
        }
        cout << "Buoc " << i + 1 << ": ";
        in(a, n);
        cout << endl;
    }
    delete a;
    return 0;
}

