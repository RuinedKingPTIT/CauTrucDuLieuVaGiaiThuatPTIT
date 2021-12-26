#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin >> n;
    vector<int> ke[1005];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= n; j++){
            int x;  cin >> x;
            if(x==1){
                ke[i].push_back(j);
                // ke[j].push_back(i);
            }
        }
    }
    for(auto x : ke)    sort(x.begin(), x.end());
    for(int i = 1; i <= n; i++){
        for(int j = 0 ; j < ke[i].size(); j++)   cout << ke[i][j] << " ";
        cout << endl;
    }
    return 0;
}