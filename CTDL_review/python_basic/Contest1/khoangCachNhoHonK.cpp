#include<bits/stdc++.h>
#define int long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int dem = 0;
        for(int i = n-1 ; i >=0; i--){
            int temp = upper_bound(a, a+n, a[i] - k) - a;
            temp = i-temp;
            if(temp) dem+=temp;
   
        }
        cout << dem << endl;
    }
    return 0;
}