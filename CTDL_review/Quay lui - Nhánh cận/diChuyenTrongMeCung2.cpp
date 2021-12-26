#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[10][10];
bool isUse[10][10];
char c[1005];
vector<string> res;
void init(){
    res.clear();
    cin >>n;
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ;j < n; j++){
            cin >> a[i][j];
            isUse[i][j] = false;
        }
    }
}

void Try(int i, int j, string s){
    if(a[0][0] == 0 || a[n-1][n-1] == 0)    return;
    if(i == (n-1) && j == (n-1)){
        res.push_back(s);
        return;
    }
    if((i+1) <= (n-1) && a[i+1][j] == 1 && isUse[i+1][j] == false){
        isUse[i][j] = true;
        Try(i+1, j, s + "D");
        isUse[i][j] = false;
    }
    if((j-1) >= 0 && a[i][j-1] == 1 && isUse[i][j-1] == false){
        isUse[i][j] = true;
        Try(i, j-1, s + "L");
        isUse[i][j] = false;
    }

    if((j+1) <= (n-1) && a[i][j+1] == 1 && isUse[i][j+1] == false){
        isUse[i][j] = true;
        Try(i, j+1, s + "R");
        isUse[i][j] = false;
    }
   
    // len tren
    if((i-1) >= 0 && a[i-1][j] == 1 && isUse[i-1][j] == false){
        isUse[i][j] = true;
        Try(i-1, j, s + "U");
        isUse[i][j] =false;
    }
}
void result(){
    if(res.size() == 0) cout << -1 << endl;
    else{
        sort(res.begin(), res.end());
        for(auto x : res) cout << x << ' ';
        cout << endl;
    }
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        init();
        Try(0, 0, "");
        result();
    }
    return 0;
}
