#include<bits/stdc++.h>
using namespace std;
#define max_city 15
int c[max_city][max_city];
int n, cost = 0;
int res = INT_MAX;
bool mark[max_city] = {0};
int path[max_city] = {0};
vector<vector<int>> path_min;
void Try(int i){
    if(i==n){
        vector<int> temp;
        if(cost + c[path[i-1]][path[0]] < res){
            res = cost + c[path[i-1]][path[0]];
            for(int k = 0 ; k < n; k++) temp.push_back(path[k]);
            path_min.push_back(temp);
        } 
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
    cout << "(";
    for(int i = 0 ; i < path_min[path_min.size()-1].size(); i++)   cout << path_min[path_min.size()-1][i] + 1<< ", ";
    cout << "1)" << endl;
    cout << res;
    return 0;
}