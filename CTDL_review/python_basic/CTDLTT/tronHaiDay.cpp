#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n1, n2;
        cin >> n1 >> n2;
        int *a = new int[n1];
        int *b = new int[n2];
        vector<int> res;
        for(int i = 0 ; i < n1; i++){
            cin >> a[i];
            res.push_back(a[i]);
        }    
        for(int i = 0 ; i < n2; i++){
            cin >> b[i];
            res.push_back(b[i]);
        }    
        sort(res.begin(), res.end());
        for(auto x : res)   cout << x << " ";
        cout << endl;


        delete a;
        delete b;
    }
    return 0;
}