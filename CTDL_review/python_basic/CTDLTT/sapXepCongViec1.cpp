#include<bits/stdc++.h>
#define int long long
using namespace std;
struct dta
{
    int startTime;
    int finishTime;
};
bool conditionSort(dta x, dta y){
    return x.finishTime < y.finishTime;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<dta> ar(n);
        for(int i = 0 ;i  < n; i++) cin >> ar[i].startTime;
        for(int i = 0 ;i  < n; i++) cin >> ar[i].finishTime;
        sort(ar.begin(), ar.end(), conditionSort);
        int dem = 1;
        int run = 0;
        for(int i = 1; i < n; i++){
            if(ar[i].startTime >= ar[run].finishTime){
                dem++;
                run = i;
            }
        }
        cout << dem << endl;
    }
    return 0;
}