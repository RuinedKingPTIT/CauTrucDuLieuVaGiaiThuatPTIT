#include<bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        int *a = new int[n1];
        int *b = new int[n2];
        int *c = new int[n3];
        for(int i = 0 ; i < n1;i++) cin >> a[i];
        for(int i = 0 ; i < n2;i++) cin >> b[i];
        for(int i = 0 ; i < n3;i++) cin >> c[i];
        vector<int> phase1(n1+n2+n3), phase2(n1+n2+n3);
        vector<int> :: iterator it;
        it = set_intersection(a, a+n1, b, b+n2, phase1.begin());
        phase1.resize(it-phase1.begin());
        it = set_intersection(phase1.begin(), phase1.end(), c, c+n3, phase2.begin());
        phase2.resize(it - phase2.begin());
        if(phase2.size()==0) cout << "NO\n";
        else{
            for(auto x : phase2)    cout << x << ' ';
            cout << endl;
        }
    }
    return 0;
}