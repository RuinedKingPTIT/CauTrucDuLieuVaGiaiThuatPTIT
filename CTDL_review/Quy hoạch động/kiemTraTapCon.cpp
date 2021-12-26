#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        int s = accumulate(a.begin(), a.end(), 0);
        if(s%2!=0)  cout << 0 << endl;
        else{
            int s2 = s/2;
            int temp[s2+1] = {0};
            temp[0] = 1;
            for(int i = 0 ; i < n; i++){
                for(int j = s2; j >= a[i]; j--) if(temp[j-a[i]] == 1)   temp[j] = 1;
            }
            if(temp[s2] == 1)   cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}