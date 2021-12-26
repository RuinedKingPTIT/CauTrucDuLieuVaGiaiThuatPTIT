#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int tu, mau;
        cin >> tu >> mau;
        int res;
        while(1){
            if(mau%tu==0){
                cout << "1/" << (mau/tu) << "\n";
                break;
            }else{
                res = (mau/tu) + 1;
                cout << "1/" << res << " + ";
                tu = tu*res - mau;
                mau *= res;

            }
        }
    }
    return 0;
}