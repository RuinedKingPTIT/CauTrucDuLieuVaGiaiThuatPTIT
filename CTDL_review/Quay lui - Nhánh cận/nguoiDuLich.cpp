#include<bits/stdc++.h>
using namespace std;
#define max_city 15
int c[max_city][max_city];
int n, cost = 0;
int res = INT_MAX;
bool mark[max_city] = {0};
int path[max_city] = {0};
void Try(int i){
    if(i==n){
        if(cost + c[path[i-1]][path[0]] < res) res = cost + c[path[i-1]][path[0]];
    }else{
        for(int j = 0 ; j < n; j++){
            if(mark[j] == 0 && cost +  c[path[i-1]][j] < res){
                path[i] = j;
                mark[j] = 1;
                cost += c[path[i-1]][j];

                Try(i+1);
                mark[j] = 0;
                 cost -= c[path[i-1]][j];

            }
        }
    }
}
int main(){
    cin >> n;
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ;  j< n; j++) cin >> c[i][j];
    }
    Try(0);
    cout << res << endl;
    return 0;
}