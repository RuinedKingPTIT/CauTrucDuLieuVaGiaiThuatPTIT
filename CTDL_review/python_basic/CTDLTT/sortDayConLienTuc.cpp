#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        int *b = new int[n];
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        } 
        sort(b, b+n);
        int firstIndex = -1;
        int lastIndex = -1;

        for(int i = 0 ; i < n; i++){
            if(a[i]!= b[i]){
                firstIndex = i;
                break;
            } 
        }
        for(int i = n-1 ; i >= 0; i--){
            if(a[i]!= b[i]){
                lastIndex = i;
                break;
            } 
        }
        cout << firstIndex + 1 << " " << lastIndex + 1 << endl;

        delete a;
        delete b;
    }
    return 0;
}