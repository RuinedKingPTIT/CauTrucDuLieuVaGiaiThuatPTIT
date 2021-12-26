#include<bits/stdc++.h>
#define int long long
using namespace std;
struct dta
{
    int startTime, finishTime;
};
bool cond(dta x, dta y){
    return x.finishTime < y.finishTime;
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >>n;
        vector<dta> a(n);
        for(int i = 0 ; i < n; i++) cin >> a[i].startTime >> a[i].finishTime;
        sort(a.begin(), a.end(), cond);
        int dem = 1;
        int run = 0;
        for(int i = 1 ; i < n; i++){
            if(a[i].startTime >= a[run].finishTime){
                dem++;
                run = i;
            }
        }
        cout << dem << endl;
    }

    return 0;
}
