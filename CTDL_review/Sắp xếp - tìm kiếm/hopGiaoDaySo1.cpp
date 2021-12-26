#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n1, n2;
        cin >> n1 >> n2;
        int *ar1 = new int[n1];
        int *ar2 = new int[n1];
        set<int> copar;
        set<int> Union;

        for(int i = 0 ; i < n1; i++){
            cin >> ar1[i];
            copar.insert(ar1[i]);
            Union.insert(ar1[i]);
        }    
        for(int i = 0 ; i < n2; i++){
            cin >> ar2[i];
            Union.insert(ar2[i]);
        }    
        for(auto x : Union) cout << x << " ";
        cout << endl;
        for(auto x : copar){
            if(find(ar2, ar2+n2, x)!=(ar2+n2)) cout << x << " ";
        }
        cout << endl;



        delete ar1;
        delete ar2;
    }
    return 0;
}