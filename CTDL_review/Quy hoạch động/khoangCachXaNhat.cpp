#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        int *leftMin = new int[n];
        leftMin[0] = a[0];
        for(int i = 1 ; i < n; i++) leftMin[i] = min(leftMin[i-1], a[i]);
        int res = -1;
        int i = n-1, j = n-1;
        while(i >= 0 && j >= 0){
            if(a[j] > leftMin[i]){
                res = max(res, (j-i));
                i--;
            }else j--;
        }
        cout << res << endl;
        delete a;
        delete leftMin;
    }
    return 0;
}