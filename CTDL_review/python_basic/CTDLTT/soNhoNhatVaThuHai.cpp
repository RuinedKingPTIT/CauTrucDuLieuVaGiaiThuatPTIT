#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a=  new int[n];
        set<int> res;
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
            res.insert(a[i]);
        } 
       if(res.size() == 1) cout << -1 << endl;
       else{
           int dem = 0;
           for(set<int> :: iterator it = res.begin(); it!=res.end(); it++) {
               cout << *it << " ";
               dem++;
               if(dem==2) break;
           }
           cout << endl;
            
       }
        
       

        delete a;
    }
    return 0;
}