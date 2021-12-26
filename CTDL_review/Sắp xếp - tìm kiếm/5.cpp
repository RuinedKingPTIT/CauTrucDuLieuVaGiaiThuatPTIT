#include<bits/stdc++.h>
#define int long long
using namespace std;
void printArr(int *a, int n){
    for(int i = 0 ; i < n; i++) cout << a[i] << ' ';
}
bool checkSort(int *a, int n){
    for(int i = 0 ; i < n-1; i++) if(a[i] > a[i+1]) return false;
    return true;
}
int32_t main(){
    int n; cin >> n;
    int *a = new int[n];
    for(int i = 0 ; i < n; i++) cin >> a[i];

    for(int i = 0 ; i < n-1;i++){
        cout << "Buoc " << i + 1 << ": ";
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1])  swap(a[j], a[j+1]);
        }
        
        printArr(a, n); cout << endl;
        if(checkSort(a, n)) break;
    }


    delete a;
    return 0;
}