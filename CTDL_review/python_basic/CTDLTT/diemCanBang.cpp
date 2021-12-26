#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        int totalSumArr = accumulate(a, a+n, 0);
        bool flag = true;
        for(int i = 0 ; i < n-1; i++){
            int sum1 = totalSumArr - a[i];
            if(sum1%2==0){
                if(i<= (n/2) && accumulate(a, a+i, 0) == (sum1/2)){
                    flag = false;
                    cout << i+1 << endl;
                    break;
                }else if(accumulate(a+i+1, a+n, 0) == (sum1/2)){
                    flag = false;
                    cout << i+1 << endl;
                    break;
                }
            }
        }
        if(flag)    cout << -1 << endl;
        delete a;
    }
    return 0;
}