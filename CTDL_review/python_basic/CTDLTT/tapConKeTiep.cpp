#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int *a = new int[k];
        for(int i = 0 ; i < k; i++)     cin >> a[i];
        int i = k-1;
        while(a[i]==n-k+i+1){
            i--;
        }
        if(i<0){
            for(int i = 1; i <= n-k+1; i++) cout << i << " ";
        }else{
            a[i] +=1;
            for(int j = i+1; j < k; j++) a[j] = a[i] +j-i;
            for(int i = 0 ; i < k; i++) cout << a[i] << " ";
        }
        
        cout << endl;
        delete a;
    }
    return 0;
}