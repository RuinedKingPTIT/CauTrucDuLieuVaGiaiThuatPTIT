#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){
    int t; cin>> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i= 0 ; i < n; i++)  cin >> a[i];
        int sum = 0;
        int maxSum = a[0];
        for(int i = 0 ; i < n; i++){
            sum += a[i];
            maxSum = max(sum, maxSum);
            if(sum < 0) sum = 0;
        }
        cout << maxSum << endl;
        delete a;
    }
    return 0;
}