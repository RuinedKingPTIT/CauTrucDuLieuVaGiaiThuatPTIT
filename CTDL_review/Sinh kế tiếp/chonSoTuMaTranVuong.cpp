#include <bits/stdc++.h>
using namespace std;
void in(int *a, int n){
    for(int i = 0 ; i < n; i++) cout << a[i] << ' ';
}
int main(){
    int n, k;   cin >> n >> k;
    int a[n][n];
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ;  j< n; j++) cin >> a[i][j];
    }
    int *checkArr = new int[n];
    for(int i = 0 ; i < n; i++) checkArr[i] = i+1;
    vector<vector<int>> res;
    int d = 0;
    do{
        int t = 0;
        int r = 0;
        for(int i = 0 ; i < n; i++){
            t += a[i][checkArr[r++] -1 ];
        }
        if(t == k){
            vector<int> temp;
            d++;
            for(int i = 0 ; i< n; i++)  temp.push_back(checkArr[i]);
            res.push_back(temp);
        } 
    }while(next_permutation(checkArr, checkArr+n));
    cout << d << endl;
    for(auto x : res){
        for(int i = 0 ; i < x.size(); i++)  cout << x[i] << ' ';
        cout << endl;
    }
}