#include<bits/stdc++.h>
using namespace std;
struct dta
{
    long long value;
    int soLanXuatHien;
    int elemnent;
};
bool cmp(dta x ,dta y){
    if(x.soLanXuatHien > y.soLanXuatHien) return true;
    if(x.soLanXuatHien == y.soLanXuatHien && x.value < y.value) return true;
    return false;
}
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int d[100001] = {0};
       
        cin >>n;
        dta a[n]; 
        for(int i = 0 ; i < n; i++){
            cin >> a[i].value;
            
            d[a[i].value]++;
        }
   
        for(int i = 0 ; i < n; i++){
            a[i].soLanXuatHien = d[a[i].value];
           a[i].elemnent = i;
        }

        sort(a, a + n, cmp);
        for(int i = 0 ; i < n; i++){
            cout << a[i].value << " ";
        }
        cout << endl;
    }
    return 0;
}