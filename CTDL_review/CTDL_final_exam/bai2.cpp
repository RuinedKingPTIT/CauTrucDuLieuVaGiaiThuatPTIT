#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        int res = 0;
        sort(a.begin(), a.end());
        for(int i = n-1; i >= 0; i--){
            // cout << a[i] - k << endl;
            // int temp = upper_bound(a.begin(), a.begin()+i, a[i] - k) - a.begin();
            // cout << temp << endl;
            // tim vi tri so dau tien > a[i] = k
            int temp = -1;
            for(int j = i-1; j >= 0; j--) if(a[j] > (a[i] - k)){
                temp = j;
                break;
            }
            // cout << temp << endl;
            if(temp!=-1)
            res += (i-temp);

        }
        cout << res<< endl;
    }
    return 0;
}