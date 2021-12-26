#include<bits/stdc++.h>
// #define int long long
using namespace std;
int n, x;
bool cmp(int a, int b){
    if (abs(a - x) < abs(b - x))
            return true;
        else
            return false;
}
void rearrange(int arr[], int n, int x)
{

    stable_sort(arr, arr + n, [x](int a, int b)
    {
        if (abs(a - x) < abs(b - x))
            return true;
        else
            return false;
    });
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> x;
        int *a= new int[n];
        for(int i = 0 ; i < n; i++)     cin >> a[i];
        rearrange(a, n, x);
        for(int i = 0 ; i < n; i++) cout << a[i] << ' ';
        cout << endl;
        delete a;
    }
    return 0;
}