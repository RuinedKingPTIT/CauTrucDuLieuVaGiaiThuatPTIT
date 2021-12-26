#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>a(n);
        for(int&x : a)  cin >> x;
        vector<int> b{a.begin(), a.end()};
        sort(b.begin(), b.end());
        int l = 0;
        int r = 0;
        for(int i = 0 ; i < n; i++){
            if(a[i] != b[i]){
                l = i;
                break;
            }
        }
        for(int i = n-1 ; i >= 0; i--){
            if(a[i] != b[i]){
                r = i;
                break;
            }
        }
        cout << l+1 << " " << r+1 << endl;
    }
    return 0;
}