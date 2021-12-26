#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int n; cin >> n;
    int *a = new int[n];
    for(int i =  0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    vector<int> cont;
    cont.push_back(a[0]*a[1]); // hai so nho nhat
    cont.push_back(a[n-1]*a[n-2]); // hai so lon nhat
    cont.push_back(a[n-1]*a[n-2]*a[n-3]); 
    cont.push_back(a[0]*a[1]*a[n-1]);
    cout << *max_element(cont.begin(), cont.end());

    delete a;
    return 0;
}