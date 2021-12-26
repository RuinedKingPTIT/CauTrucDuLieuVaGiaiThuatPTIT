#include<bits/stdc++.h>
#define int long long

using namespace std;
void in(int *a, int n){
    for(int i = 0 ; i < n; i++) cout << a[i] << ' ';
}
int32_t main(){
    int n; cin >> n;
    int *a = new int[n];
   
    for(int i = 0 ; i < n; i++) cin >> a[i];
    
    vector<int> res;
    res.push_back(a[0]);
    cout << "Buoc 0: " << a[0] << endl; 
    for(int i = 1; i < n; i++){
        if(a[i] < *min(res.begin(), res.end())) res.insert(res.begin(), a[i]);
        else res.push_back(a[i]);
        sort(res.begin(), res.end());
        cout << "Buoc " << i << ": ";
        for(auto x : res) cout << x << ' ';
        cout << endl;
    }



    delete a;
    return 0;
}