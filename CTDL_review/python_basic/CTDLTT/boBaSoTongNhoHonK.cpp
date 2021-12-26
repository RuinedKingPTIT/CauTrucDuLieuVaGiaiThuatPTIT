#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int *a = new int[n];
        for(int i = 0 ;i < n; i++)  cin >> a[i];
        sort(a, a+n);
        int dem = 0;
        for(int i = 0; i < n-2; i++){
            int l = i+1;
            int r = n-1;
            while(l<r){
                if(a[l] + a[r] + a[i] >= k) r--;
                else{
                    dem += (r-l);
                    l++;
                }
            }
        }
        cout << dem << endl;
        delete a;
    }
    return 0;
}