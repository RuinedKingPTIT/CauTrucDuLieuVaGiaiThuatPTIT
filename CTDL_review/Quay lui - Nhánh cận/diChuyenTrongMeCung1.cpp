#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[15][15];
char c[1005];
bool printed = false;
void show(int k){
    for(int i = 0 ; i < k; i++) cout << c[i];
    cout << ' ';
    printed = true;
}
void Try(int i, int j, int k){
    if(i == (n-1) && j == (n-1)){
        show(k);
        return;
    }
    if(i + 1 <= (n-1) && a[i+1][j] == 1){
        c[k] = 'D';
        Try(i+1, j, k+1);
    }
    if((j+1) <= (n-1) && a[i][j+1] == 1){
        c[k] = 'R';
        Try(i, j+1, k+1);
    }
}
int32_t main(){
   int t;   cin >> t;
   while(t--){
       cin >> n;
       for(int i = 0 ; i < n; i++){
           for(int j = 0 ; j < n; j++)  cin >> a[i][j];
       }
       if(a[0][0] == 0) cout << -1 << endl;
       else{
           printed = false;
           Try(0, 0 , 0);
           if(printed ==false)  cout << -1 << endl;
           cout << endl;
           
       }
   }
   return 0;
}