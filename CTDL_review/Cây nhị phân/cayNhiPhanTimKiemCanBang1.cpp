#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        sort(a.begin(), a.end());
        if(n%2==0)  cout << a[n/2-1] << endl;
        else cout << a[n/2] << endl;
    }
    return 0;
}