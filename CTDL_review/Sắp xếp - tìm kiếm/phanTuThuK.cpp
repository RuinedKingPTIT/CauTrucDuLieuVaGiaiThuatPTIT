#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int m, n, k;
        cin >> m >> n >> k;
        int *a = new int[m];
        int *b = new int[n];
        vector<int> cont;
        for(int i = 0 ; i < m; i++){
            cin >> a[i];
            cont.push_back(a[i]);

        } 
        for(int i = 0 ; i < n; i++){
            cin >> b[i];
            cont.push_back(b[i]);
        } 

        sort(cont.begin(), cont.end());
        cout << cont[k-1] << endl;



        delete a;
        delete b;
    }
    return 0;
}