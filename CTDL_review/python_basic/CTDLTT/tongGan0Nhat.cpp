#include<bits/stdc++.h>
#define int long long
using namespace std;

int minOfTriplet(int a, int b, int c){
    return min(min(a, b), c);
}


int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a=  new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        // thuc chat là tim cặp số có trị tuyệt đối nhỏ nhâts
        int res = INT_MAX;
        int r = -1;
        int l = -1;
        for(int i = 0 ; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(res > abs(a[i]+a[j])){
                    r = a[i];
                    l = a[j];
                    res = abs(a[i]+a[j]);
                }
            }
        }
        cout << r + l << endl;
        delete a;
    }
    return 0;
}