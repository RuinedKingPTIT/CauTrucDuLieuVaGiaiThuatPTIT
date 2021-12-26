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
        cout << "Buoc " << i+1 << ": ";
        swap(a[i], a[min_element(a+i, a+n) - a]);
        in(a, n);
        cout << endl;
    }
    delete a;
    return 0;
}

