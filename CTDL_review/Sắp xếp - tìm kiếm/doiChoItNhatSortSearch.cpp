#include<bits/stdc++.h>
using namespace std;
struct dta
{
    int first, second;
};

bool cmp(dta a, dta b){
    if(a.first < b.first) return true;
    if(a.first == b.first && a.second < b.second ) return true;
    return false;
}
int main(){ 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<dta> a(n);
        for(int i = 0 ; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end(), cmp);
        int res = 0;
        for(int i = 0 ; i < n; i++){
            while(a[i].second != i){
                res++;
                swap(a[i], a[a[i].second]);
            }
        }
        cout << res << endl;     
    }   
    return 0;
}