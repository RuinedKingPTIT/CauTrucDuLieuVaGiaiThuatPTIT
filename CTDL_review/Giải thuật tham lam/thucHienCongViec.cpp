#include<bits/stdc++.h>
#define int long long
using namespace std;
struct dta
{
    int id, deadline, profit;
};
bool conditionSort(dta x, dta y){
    return x.profit > y.profit;
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<dta> Job(n);
        for(int i = 0 ; i < n; i++) cin >> Job[i].id >> Job[i].deadline >> Job[i].profit;
        sort(Job.begin(), Job.end(), conditionSort);
        int slcv = 0;
        int totalProfit = 0;
        int isUse[1001] = {0};
        for(int i = 0 ; i < n; i++){
            while(isUse[Job[i].deadline] && Job[i].deadline > 0) Job[i].deadline--;
            if(!isUse[Job[i].deadline] && Job[i].deadline > 0){
                isUse[Job[i].deadline] = 1;
               slcv++;
                totalProfit += Job[i].profit; 
            } 
        }
        cout << "(" << slcv << ':' << totalProfit << ")" << endl;
        
    }
    return 0;
}