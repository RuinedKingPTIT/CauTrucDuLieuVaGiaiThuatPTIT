#include<bits/stdc++.h>
#define int long long
using namespace std;
int row, col;
int a[105][105];
int d = 0;
void Try(int i, int j){
    if(i == (row-1) && j == (col-1)){
        d++;
        return;
    }
    if((i+1) <= (row-1)){
        Try(i+1, j);
    }
    if((j+1) <= (col-1)){
        Try(i, j+1);
    }

}
int32_t main(){
    int t; cin >> t;
    while(t--){
        cin >> row >> col;
        for(int i = 0 ; i < row; i++){
            for(int j = 0 ; j < col; j++)   cin >> a[i][j];
        }
        d = 0;
        Try(0, 0);
        cout << d << endl;
    }
    return 0;
}