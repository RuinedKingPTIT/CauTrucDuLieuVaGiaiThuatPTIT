#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n, S;   cin >> n >> S;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin>> a[i];
        bool flag = true;
        for(int i = 0 ; i < n-1; i++){
            int sum = a[i];
            for(int j = i+1; j < n; j++){
                if(sum == S){
                    flag = false;
                    cout << "YES\n";
                    break;
                }
                sum += a[j];
            }
        }
        if(flag)    cout << "NO\n";
        delete a;
        cout <<  endl;
    }
    return 0;
}