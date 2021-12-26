#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    // su dung ham pre_permutation

    int t;  cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        
        // init
        for(int i = 0; i < n; i++) a[i] = i+1;
        reverse(a, a+n);
        vector<vector<int>> in;
        do{
            vector<int> temp;
            for(int i = 0; i < n; i++) temp.push_back(a[i]);
            in.push_back(temp);
        }while(prev_permutation(a, a+n));
        for(int i = 0 ; i < in.size()-1; i++){
            for(int j = 0 ; j < in[i].size(); j++)    cout << in[i][j];
            cout << ",";
        }
        for(int j = 0 ; j < in[in.size()-1].size(); j++)   cout << in[in.size()-1][j];
        cout << endl;

        delete a;
    }

    return 0;
}